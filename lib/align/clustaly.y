/* clustaly.y - CLUSTAL alignment parser */

%{
#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include <stdlib.h>

#include "align.h"
#include "align/parse.h"
#include "align/clustaly.h"

void clustalset_in(FILE *);
int clustallex(YYSTYPE *);
int clustallex_destroy(void);

static void yyerror(align_t *, const char *);

int clustaly_check(FILE *);
align_t *clustaly_parse(FILE *);
%}

%expect 0
%pure-parser
%parse-param { align_t *ali }

%union { char *str; }
%destructor { free($$); } <str>

%token EOL END ERR INT SPC TXT
%token TAG CON
%token <str> NAM BAS

%%

clustal : header sequence end                      { return 0; /*NOTREACHED*/ }
        ;

header : headline ;
headline : TAG headtxt EOL ;
headtxt : headtxt TXT | ;

sequence : sequence EOL seqent | EOL seqent ;
seqent : seqlines consline                       { CHKERR(parse_seqrst(ali)); }
       ;

seqlines : seqlines seqline | seqline ;
seqline : seqnam SPC seqbas seqnum EOL           { CHKERR(parse_seqnxt(ali)); }
        ;
seqnam : NAM                                 { CHKERR(parse_tmpupd(ali, $1));
                                                   CHKERR(parse_seqnew(ali)); }
       ;
seqbas : seqbas SPC BAS                      { CHKERR(parse_sequpd(ali, $3)); }
seqbas : seqbas BAS                          { CHKERR(parse_sequpd(ali, $2)); }
       | INT SPC BAS                         { CHKERR(parse_sequpd(ali, $3)); }
       | BAS                                 { CHKERR(parse_sequpd(ali, $1)); }
       ;
seqnum : SPC INT | ;

consline : seqcon EOL | ;
seqcon : seqcon CON | CON ;

end : END ;

%%


/* Checks CLUSTAL sequence */
int clustaly_check(FILE *f) {
  int i;

  clustalset_in(f);

  i = yyparse(NULL);
  if (i == 0) { return i; }

  clustallex_destroy();

  return i; }


/* Parse CLUSTAL alignment */
align_t *clustaly_parse(FILE *f) {
  int i;
  align_t *ali;

  ali = align_new();
  if (ali == NULL) { return ali; }
  clustalset_in(f);

  i = yyparse((void *)ali);
  if (i == 0 && ali->seq != NULL) {
    return ali; }

  clustallex_destroy();
  align_free(ali);

  return NULL; }


/* Helpers ... */

/*ARGSUSED*/
static void yyerror(align_t *ali, const char *s) { return; }
