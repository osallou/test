/* phylipiy.y - PHYLIPI alignment parser */

%{
#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include <stdlib.h>

#include "align.h"
#include "align/parse.h"
#include "align/phylipiy.h"

void phylipiset_in(FILE *);
int phylipilex(YYSTYPE *);
int phylipilex_destroy(void);

static void yyerror(align_t *, const char *);

int phylipiy_check(FILE *);
align_t *phylipiy_parse(FILE *);
%}

%expect 0
%pure-parser
%parse-param { align_t *ali }

%union { char *str; }
%destructor { free($$); } <str>

%token END EOL ERR INT SPC
%token <str> NAM BAS

%%

phylipi : header nament seqents end                { return 0; /*NOTREACHED*/ }
        ;

header : numline ;
numline : INT SPC INT EOL ;

nament : nament namline                          { CHKERR(parse_seqnxt(ali)); }
       | namline                                 { CHKERR(parse_seqnxt(ali)); }
       ;
namline : namval seqlist EOL ;
namval : NAM                                 { CHKERR(parse_tmpupd(ali, $1));
                                                   CHKERR(parse_seqnew(ali)); }
       ;

seqents : seqents seqent
        | /* Empty */
        ;
seqent : seqent seqline                          { CHKERR(parse_seqnxt(ali)); }
       | EOL                                     { CHKERR(parse_seqrst(ali)); }
       ;
seqline : seqlist EOL ;

seqlist : seqlist BAS                        { CHKERR(parse_sequpd(ali, $2)); }
        | BAS                                { CHKERR(parse_sequpd(ali, $1)); }
        ;

end : END ;

%%


/* Checks PHYLIPI sequence */
int phylipiy_check(FILE *f) {
  int i;

  phylipiset_in(f);

  i = yyparse(NULL);
  if (i == 0) { return i; }

  phylipilex_destroy();

  return i; }


/* Parse PHYLIPI alignment */
align_t *phylipiy_parse(FILE *f) {
  int i;
  align_t *ali;

  ali = align_new();
  if (ali == NULL) { return ali; }
  phylipiset_in(f);

  i = yyparse((void *)ali);
  if (i == 0 && ali->seq != NULL) {
    return ali; }

  phylipilex_destroy();
  align_free(ali);

  return NULL; }


/* Helpers ... */

/*ARGSUSED*/
static void yyerror(align_t *ali, const char *s) { return; }
