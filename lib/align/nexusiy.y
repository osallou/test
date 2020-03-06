/* nexusiy.y - NEXUSI alignment parser */

%{
#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include <stdlib.h>

#include "align.h"
#include "align/parse.h"
#include "align/nexusiy.h"

void nexusiset_in(FILE *);
int nexusilex(YYSTYPE *);
int nexusilex_destroy(void);

static void yyerror(align_t *, const char *);

int nexusiy_check(FILE *);
align_t *nexusiy_parse(FILE *);
%}

%expect 0
%pure-parser
%parse-param { align_t *ali }

%union { char *str; }
%destructor { free($$); } <str>

%token EOL EQU ERR SEM SPC
%token TAG BEG END KEY COM TOK VAL MAT SEP
%token <str> NAM BAS

%%

nexusi : header blocks ;

header : TAG ;

blocks : begin commands matrix end ;

begin : BEG SPC KEY SEM ;

commands : commands command | command ;
command : COM toklist SEM ;
toklist : toklist SPC token | toklist token | SPC token | token ;
token : TOK EQU VAL | VAL ;

matrix : MAT sequence ter ;
sequence : sequence seqsep seqent                { CHKERR(parse_seqrst(ali)); }
         | seqsep seqent                         { CHKERR(parse_seqrst(ali)); }
         | seqent                                { CHKERR(parse_seqrst(ali)); }
         ;
seqent : seqent seqline | seqline ;
seqline : seqnam SPC seqbas                      { CHKERR(parse_seqnxt(ali)); }
        ;
seqnam : NAM                                 { CHKERR(parse_tmpupd(ali, $1));
                                                   CHKERR(parse_seqnew(ali)); }
       ;
seqbas : seqbas SPC BAS                      { CHKERR(parse_sequpd(ali, $3)); }
       | seqbas BAS                          { CHKERR(parse_sequpd(ali, $2)); }
       | BAS                                 { CHKERR(parse_sequpd(ali, $1)); }
       ;
seqsep : seqsep SEP
       | SEP
       ;

ter : SEP SEM | SEM ;

end : END SEM ;

%%


/* Checks NEXUSI sequence */
int nexusiy_check(FILE *f) {
  int i;

  nexusiset_in(f);

  i = yyparse(NULL);
  if (i == 0) { return i; }

  nexusilex_destroy();

  return i; }


/* Parse NEXUSI alignment */
align_t *nexusiy_parse(FILE *f) {
  int i;
  align_t *ali;

  ali = align_new();
  if (ali == NULL) { return ali; }
  nexusiset_in(f);

  i = yyparse((void *)ali);
  if (i == 0 && ali->seq != NULL) {
    return ali; }

  nexusilex_destroy();
  align_free(ali);

  return NULL; }


/* Helpers ... */

/*ARGSUSED*/
static void yyerror(align_t *ali, const char *s) { return; }
