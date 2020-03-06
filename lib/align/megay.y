/* megay.y - MEGA alignment parser */

%{
#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include <stdlib.h>

#include "align.h"
#include "align/parse.h"
#include "align/megay.h"

void megaset_in(FILE *);
int megalex(YYSTYPE *);
int megalex_destroy(void);

static void yyerror(align_t *, const char *);

int megay_check(FILE *);
align_t *megay_parse(FILE *);
%}

%pure-parser
%parse-param { align_t *ali }

%union { char *str; }
%destructor { free($$); } <str>

%token COL EXC DIE END EOL EQU ERR SEM SPC TXT
%token TAG KEY VAL TIT FMT
%token <str> NAM BAS

%%

mega : header seqents end                          { return 0; /*NOTREACHED*/ }
     ;

header : tagline deflines ;

tagline : DIE TAG EOL ;

deflines : titline fmtline | titline2 | ;
titline : EXC TIT deftxt SEM EOL ;
titline2 : TIT COL SPC deftxt EOL ;
fmtline : EXC FMT deftxt SEM EOL | ;

deftxt : deftxt TXT | TXT ;

seqents : seqents seqent | seqent ;
seqent : genline namline seqlines                { CHKERR(parse_seqnxt(ali)); }
       ;

genline : EXC genlist SEM EOL | ;
genlist : genlist SPC genkey | genkey ;
genkey : KEY EQU TXT ;

namline : DIE namval EOL                         { CHKERR(parse_seqnew(ali)); }
        ;
namval : namval NAM                          { CHKERR(parse_tmpupd(ali, $2)); }
       | NAM                                 { CHKERR(parse_tmpupd(ali, $1)); }
       ;

seqlines : seqlines seqline | seqline ;
seqline : seqlist EOL ;
seqlist : seqlist BAS                        { CHKERR(parse_sequpd(ali, $2)); }
        | BAS                                { CHKERR(parse_sequpd(ali, $1)); }
        ;

end : END ;

%%


/* Checks MEGA sequence */
int megay_check(FILE *f) {
  int i;

  megaset_in(f);

  i = yyparse(NULL);
  if (i == 0) { return i; }

  megalex_destroy();

  return i; }


/* Parse MEGA alignment */
align_t *megay_parse(FILE *f) {
  int i;
  align_t *ali;

  ali = align_new();
  if (ali == NULL) { return ali; }
  megaset_in(f);

  i = yyparse((void *)ali);
  if (i == 0 && ali->seq != NULL) {
    return ali; }

  megalex_destroy();
  align_free(ali);

  return NULL; }


/* Helpers ... */

/*ARGSUSED*/
static void yyerror(align_t *ali, const char *s) { return; }
