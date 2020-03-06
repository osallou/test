/* stocky.y - STOCKHOLM alignment parser */

%{
#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include <stdlib.h>

#include "align.h"
#include "align/parse.h"
#include "align/stocky.h"

void stockset_in(FILE *);
int stocklex(YYSTYPE *);
int stocklex_destroy(void);

static void yyerror(align_t *, const char *);

int stocky_check(FILE *);
align_t *stocky_parse(FILE *);
%}

%expect 0
%pure-parser
%parse-param { align_t *ali }

%union { char *str; }
%destructor { free($$); } <str>

%token DOT EOL ERR INT SPC
%token TAG END
%token <str> NAM BAS

%%

stock : header seqents end ;

header : hdrtag SPC hdrver EOL ;
hdrtag : TAG ;
hdrver : INT DOT INT ;

seqents : seqents EOL seqent | seqent ;

seqent : seqent seqline                          { CHKERR(parse_seqnxt(ali)); }
       | /* Empty */                             { CHKERR(parse_seqrst(ali)); }
       ;

seqline : seqnam SPC seqbas EOL ;

seqnam : NAM                                 { CHKERR(parse_tmpupd(ali, $1));
                                                   CHKERR(parse_seqnew(ali)); }
       ;
seqbas : seqbas BAS                          { CHKERR(parse_sequpd(ali, $2)); }
       | BAS                                 { CHKERR(parse_sequpd(ali, $1)); }
       ;

end : END EOL ;

%%


/* Checks STOCK sequence */
int stocky_check(FILE *f) {
  int i;

  stockset_in(f);

  i = yyparse(NULL);
  if (i == 0) { return i; }

  stocklex_destroy();

  return i; }


/* Parse STOCK alignment */
align_t *stocky_parse(FILE *f) {
  int i;
  align_t *ali;

  if ((ali = align_new()) == NULL) {
    return NULL; }
  stockset_in(f);

  i = yyparse((void *)ali);
  if (i == 0 && ali->seq != NULL) {
    return ali; }

  stocklex_destroy();
  align_free(ali);

  return NULL; }


/* Helpers ... */

/*ARGSUSED*/
static void yyerror(align_t *ali, const char *s) { return; }
