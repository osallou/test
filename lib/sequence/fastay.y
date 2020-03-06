/* fastay.y - FASTA sequence parser */

%{
#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include <stdlib.h>

#include "sequence.h"
#include "sequence/parse.h"
#include "sequence/fastay.h"

void fastaset_in(FILE *);
int fastalex(YYSTYPE *);
int fastalex_destroy(void);

static void yyerror(sequence_t *, const char *);

int fastay_check(FILE *);
sequence_t *fastay_parse(FILE *);
%}

%expect 0
%pure-parser
%parse-param { sequence_t *seq }

%union { char *str; }
%destructor { free($$); } <str>

%token END EOL ERR NUL SPC SUP
%token <str> BAS NAM TXT

%%

fasta : header sequence end            { return 0;  /*NOTREACHED*/ }
      | NUL                            { return -1; /*NOTREACHED*/ }
      ;

header : SUP headtxt EOL ;

headtxt : headname SPC headdesc | headname ;

headname : headname NAM                              { parse_namadd(seq, $2); }
         | /* Empty */
         ;

headdesc : headdesc TXT                             { parse_dscadd2(seq, $2); }
         | /* Empty */
         ;

sequence : sequence BAS                              { parse_stradd(seq, $2); }
         | BAS                                       { parse_stradd(seq, $1); }
         ;

end : END ;

%%


/* Checks FASTA sequence */
int fastay_check(FILE *f) {
  int i;

  fastaset_in(f);

  i = yyparse(NULL);
  if (i == 0) { return i; }

  fastalex_destroy();

  return i; }


/* Parse FASTA sequence */
sequence_t *fastay_parse(FILE *f) {
  int i;
  sequence_t *seq;

  seq = sequence_new();
  if (seq == NULL) { return seq; }
  fastaset_in(f);

  i = yyparse((void *)seq);
  if (i == 0) {
    return seq; }

  fastalex_destroy();
  sequence_free(seq);

  return NULL; }


/* Helpers ... */

/*ARGSUSED*/
static void yyerror(sequence_t *seq, const char *s) { return; }
