/* phylipsy.y - PHYLIPS alignment parser */

%{
#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include <stdlib.h>

#include "align.h"
#include "align/parse.h"
#include "align/phylipsy.h"

void phylipsset_in(FILE *);
int phylipslex(YYSTYPE *);
int phylipslex_destroy(void);

static void yyerror(align_t *, const char *);

int phylipsy_check(FILE *);
align_t *phylipsy_parse(FILE *);
%}

%expect 0
%pure-parser
%parse-param { align_t *ali }

%union { char *str; }
%destructor { free($$); } <str>

%token END EOL ERR INT SPC
%token <str> NAM BAS

%%

phylips : header seqents end                       { return 0; /*NOTREACHED*/ }
        ;

header : numline ;
numline : INT SPC INT EOL ;

seqents : seqents seqent | seqent ;
seqent : namline seqlines                        { CHKERR(parse_seqnxt(ali)); }
       ;

namline : namval seqlist EOL ;
namval : NAM                                 { CHKERR(parse_tmpupd(ali, $1));
                                                   CHKERR(parse_seqnew(ali)); }
       ;

seqlines : seqlines seqline | ;
seqline : seqlist EOL ;
seqlist : seqlist BAS                        { CHKERR(parse_sequpd(ali, $2)); }
        | BAS                                { CHKERR(parse_sequpd(ali, $1)); }
        ;

end : END ;

%%


/* Checks PHYLIP sequence */
int phylipsy_check(FILE *f) {
  int i;

  phylipsset_in(f);

  i = yyparse(NULL);
  if (i == 0) { return i; }

  phylipslex_destroy();

  return i; }


/* Parse PHYLIP alignment */
align_t *phylipsy_parse(FILE *f) {
  int i;
  align_t *ali;

  ali = align_new();
  if (ali == NULL) { return ali; }
  phylipsset_in(f);

  i = yyparse((void *)ali);
  if (i == 0 && ali->seq != NULL) {
    return ali; }

  phylipslex_destroy();
  align_free(ali);

  return NULL; }


/* Helpers ... */

/*ARGSUSED*/
static void yyerror(align_t *ali, const char *s) { return; }
