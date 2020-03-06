/* gdey.y - GDE sequence parser */

%{
#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include <stdlib.h>

#include "sequence.h"
#include "sequence/parse.h"
#include "sequence/gdey.h"

void gdeset_in(FILE *);
int gdelex(YYSTYPE *);
int gdelex_destroy(void);

static void yyerror(sequence_t *, const char *);

int gdey_check(FILE *);
sequence_t *gdey_parse(FILE *);
%}

%expect 0
%pure-parser
%parse-param { sequence_t *seq }

%union { char *str; }
%destructor { free($$); } <str>

%token END EOL ERR NUL
%token TAG
%token <str> NAM BAS

%%

gde : header sequence end              { return 0;  /*NOTREACHED*/ }
    | NUL                              { return -1; /*NOTREACHED*/ }
;

header : TAG headnam EOL ;

headnam : NAM                                        { parse_namadd(seq, $1); }
        ;

sequence : sequence BAS                              { parse_stradd(seq, $2); }
         | BAS                                       { parse_stradd(seq, $1); }
         ;

end : END ;

%%


/* Checks GDE sequence */
int gdey_check(FILE *f) {
  int i;

  gdeset_in(f);

  i = yyparse(NULL);
  if (i == 0) { return i; }

  gdelex_destroy();

  return i; }


/* Parse GDE sequence */
sequence_t *gdey_parse(FILE *f) {
  int i;
  sequence_t *seq;

  seq = sequence_new();
  if (seq == NULL) { return seq; }
  gdeset_in(f);

  i = yyparse((void *)seq);
  if (i == 0) {
    return seq; }

  gdelex_destroy();
  sequence_free(seq);

  return NULL; }


/* Helpers ... */

/*ARGSUSED*/
static void yyerror(sequence_t *seq, const char *s) { return; }
