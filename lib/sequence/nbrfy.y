/* nbrfy.y - NBRF sequence parser */

%{
#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include <stdlib.h>

#include "sequence.h"
#include "sequence/parse.h"
#include "sequence/nbrfy.h"

void nbrfset_in(FILE *);
int nbrflex(YYSTYPE *);
int nbrflex_destroy(void);

static void yyerror(sequence_t *, const char *);

sequence_t *nbrfy_parse(FILE *);
int nbrfy_check(FILE *);
%}

%expect 0
%pure-parser
%parse-param { sequence_t *seq }

%union { char *str; }
%destructor { free($$); } <str>

%token END EOL ERR NUL SEM SPC SUP
%token <str> TXT
%token TAG
%token <str> BAS NAM

%%

nbrf : header sequence end            { return 0;  /*NOTREACHED*/ }
     | NUL                            { return -1; /*NOTREACHED*/ }
     ;

header : headname headdesc ;

headname : SUP TAG SEM hnam EOL ;

hnam : NAM                                           { parse_namadd(seq, $1); }
     ;

headdesc : headtxt EOL ;

headtxt : headtxt TXT                               { parse_dscadd2(seq, $2); }
        | /* Empty */
        ;

sequence : sequence BAS                              { parse_stradd(seq, $2); }
         | BAS                                       { parse_stradd(seq, $1); }
         ;

end : END ;

%%


/* Check NBRF sequence */
int nbrfy_check(FILE *f) {
  int i;

  nbrfset_in(f);

  i = yyparse(NULL);
  if (i == 0) { return i; }

  nbrflex_destroy();

  return i; }


/* Parse NBRF sequence */
sequence_t *nbrfy_parse(FILE *f) {
  int i;
  sequence_t *seq;

  seq = sequence_new();
  if (seq == NULL) { return seq; }
  nbrfset_in(f);

  i = yyparse((void *)seq);
  if (i == 0) {
    return seq; }

  nbrflex_destroy();
  sequence_free(seq);

  return NULL; }


/* Helpers ... */

/*ARGSUSED*/
static void yyerror(sequence_t *seq, const char *s) { return; }
