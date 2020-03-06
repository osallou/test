/* rawy.y - RAW sequence parser */

%{
#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include <stdlib.h>

#include "sequence.h"
#include "sequence/parse.h"
#include "sequence/rawy.h"

void rawset_in(FILE *);
int rawlex(YYSTYPE *);
int rawlex_destroy(void);

static void yyerror(sequence_t *seq, const char *);

int rawy_check(FILE *);
sequence_t *rawy_parse(FILE *);
%}

%expect 0
%pure-parser
%parse-param { sequence_t *seq }

%union { char *str; }
%destructor { free($$); } <str>

%token ERR NUL
%token <str> BAS

%%

raw : sequence end                     { return 0;  /*NOTREACHED*/ }
    | NUL                              { return -1; /*NOTREACHED*/ }
    ;

sequence : sequence BAS                              { parse_stradd(seq, $2); }
         | BAS                                       { parse_stradd(seq, $1); }
         ;

end : NUL ;

%%


/* Checks RAW sequence */
int rawy_check(FILE *f) {
  int i;

  rawset_in(f);

  i = yyparse(NULL);
  if (i == 0) { return i; }

  rawlex_destroy();

  return i; }


/* Parse RAW sequence */
sequence_t *rawy_parse(FILE *f) {
  int i;
  sequence_t *seq;

  seq = sequence_new();
  if (seq == NULL) { return (seq); }
  rawset_in(f);

  i = yyparse((void *)seq);
  if (i == 0) {
    return seq; }

  rawlex_destroy();
  sequence_free(seq);

  return NULL; }


/* Helpers ... */

/*ARGSUSED*/
static void yyerror(sequence_t *seq, const char *s) { return; }
