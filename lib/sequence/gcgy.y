/* gcgy.y - GCG sequence parser */

%{
#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include <stdlib.h>

#include "sequence.h"
#include "sequence/parse.h"
#include "sequence/gcgy.h"

void gcgset_in(FILE *);
int gcglex(YYSTYPE *);
int gcglex_destroy(void);

static void yyerror(sequence_t *, const char *);

int gcgy_check(FILE *);
sequence_t *gcgy_parse(FILE *);
%}

%expect 0
%pure-parser
%parse-param { sequence_t *seq }

%union { char *str; }
%destructor { free($$); } <str>

%token END EOL ERR INT NUL SPC TER
%token TXT
%token <str> BAS

%%

gcg : header sequence end              { return 0;  /*NOTREACHED*/ }
    | NUL                              { return -1; /*NOTREACHED*/ }
    ;

header : headlines headline2 ;
headlines : headlines headline1 | ;
headline1 : headtxt EOL ;
headline2 : headtxt TER EOL ;
headtxt : headtxt TXT
        | /* Empty */
        ;

sequence : sequence seqline | seqline ;
seqline : INT SPC seqlist EOL ;
seqlist : seqlist SPC BAS                            { parse_stradd(seq, $3); }
        | BAS                                        { parse_stradd(seq, $1); }
        ;

end : END ;

%%


/* Checks GCG sequence */
int gcgy_check(FILE *f) {
  int i;

  gcgset_in(f);

  i = yyparse(NULL);
  if (i == 0) { return i; }

  gcglex_destroy();

  return i; }


/* Parse GCG sequence */
sequence_t *gcgy_parse(FILE *f) {
  int i;
  sequence_t *seq;

  seq = sequence_new();
  if (seq == NULL) { return seq; }
  gcgset_in(f);

  i = yyparse((void *)seq);
  if (i == 0) {
    return seq; }

  gcglex_destroy();
  sequence_free(seq);

  return NULL; }


/* Helpers ... */

/*ARGSUSED*/
static void yyerror(sequence_t *seq, const char *s) { return; }
