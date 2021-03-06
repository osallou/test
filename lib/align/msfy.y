/* msfy.y - MSF alignment parser */

%{
#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include <stdlib.h>

#include "align.h"
#include "align/parse.h"
#include "align/msfy.h"

void msfset_in(FILE *);
int msflex(YYSTYPE *);
int msflex_destroy(void);

static void yyerror(align_t *, const char *);

int msfy_check(FILE *);
align_t *msfy_parse(FILE *);
%}

%expect 0
%pure-parser
%parse-param { align_t *ali }

%union { char *str; }
%destructor { free($$); } <str>

%token EOL END ERR INT SPC TER TXT
%token <str> NAM BAS

%%

msf : header names sequence end                    { return 0; /*NOTREACHED*/ }
    ;

header : hlines hline2 ;
hlines : hlines hline1 | ;
hline1 : htxt EOL ;
hline2 : htxt TER EOL ;
htxt : htxt TXT | ;

names : namlines namend ;
namlines : namlines namline | namline ;
namline : NAM namtxt EOL ;
namtxt : namtxt TXT | TXT ;
namend : TER EOL ;

sequence : sequence EOL seqent | EOL seqent | seqent ;
seqent : numline seqlines                        { CHKERR(parse_seqrst(ali)); }
       ;
numline : seqnum EOL | ;
seqnum : SPC INT SPC INT | SPC INT ;
seqlines : seqlines seqline | seqline ;
seqline : seqnam SPC seqlist EOL                 { CHKERR(parse_seqnxt(ali)); }
        ;
seqnam : NAM                                 { CHKERR(parse_tmpupd(ali, $1));
                                                   CHKERR(parse_seqnew(ali)); }
       ;
seqlist : seqlist SPC BAS                    { CHKERR(parse_sequpd(ali, $3)); }
        | BAS                                { CHKERR(parse_sequpd(ali, $1)); }
;

end : END ;

%%


/* Checks MSF sequence */
int msfy_check(FILE *f) {
  int i;

  msfset_in(f);

  i = yyparse(NULL);
  if (i == 0) { return i; }

  msflex_destroy();

  return i; }


/* Parse MSF alignment */
align_t *msfy_parse(FILE *f) {
  int i;
  align_t *ali;

  ali = align_new();
  if (ali == NULL) { return ali; }
  msfset_in(f);

  i = yyparse((void *)ali);
  if (i == 0 && ali->seq != NULL) {
    return ali; }

  msflex_destroy();
  align_free(ali);

  return NULL; }


/* Helpers ... */

/*ARGSUSED*/
static void yyerror(align_t *ali, const char *s) { return; }
