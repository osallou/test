/* codatay.y - CODATA sequence parser */

%{
#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include <stdlib.h>

#include "sequence.h"
#include "sequence/parse.h"
#include "sequence/codatay.h"

void codataset_in(FILE *);
int codatalex(YYSTYPE *);
int codatalex_destroy(void);

static void yyerror(sequence_t *, const char *);

sequence_t *codatay_parse(FILE *);
int codatay_check(FILE *);
%}

%expect 0
%pure-parser
%parse-param { sequence_t *seq }

%union { char *str; }
%destructor { free($$); } <str>

%token CNT EOL ERR INT NUL NXT SEP SPC TXT

%token EN ENTXT
%token <str> ENNAM
%token TI
%token <str> TITXT
%token AL
%token CT
%token OR
%token DA
%token AC
%token <str> ACNUM
%token RE
%token CO
%token GE
%token FU
%token CX
%token CL
%token KE
%token FE
%token SU
%token SE
%token SN
%token SEQ
%token <str> BAS
%token END

%%

codata : annots sequence end                      { return 0;  /*NOTREACHED*/ }
       | NUL                                      { return -1; /*NOTREACHED*/ }
       ;

annots : entry title altnam contain organi date access refs comms genetic
         complex function classif kwords feats ;

entry : enline ;
enline : EN ennam entxt EOL ;
ennam : ENNAM                                        { parse_namadd(seq, $1); }
      ;
entxt : entxt ENTXT | ;

title : tiline1 tilines | ;
tilines : tilines tiline2 | ;
tiline1 : TI titxt EOL ;
tiline2 : NXT titxt EOL ;
titxt : titxt TITXT                                 { parse_dscadd2(seq, $2); }
      | TITXT                                       { parse_dscadd1(seq, $1); }
      ;

altnam : alline1 allines | ;
allines : allines alline2 | ;
alline1 : AL altxt EOL ;
alline2 : NXT altxt EOL ;
altxt : altxt TXT | TXT ;

contain : ctline1 ctlines | ;
ctlines : ctlines ctline2 | ;
ctline1 : CT cttxt EOL ;
ctline2 : NXT cttxt EOL ;
cttxt : cttxt TXT | TXT ;

organi : orline1 orlines | ;
orlines : orlines orline2 | ;
orline1 : OR ortxt EOL ;
orline2 : NXT ortxt EOL ;
ortxt : ortxt TXT | TXT ;

date : daline1 dalines | ;
dalines : dalines daline2 | daline2 ;
daline1 : DA datxt EOL ;
daline2 : NXT datxt EOL ;
datxt : datxt TXT | TXT ;

access : acline1 aclines acline3 | acline | ;
aclines : aclines acline2 | ;
acline : AC aclist EOL ;
acline1 : AC aclist CNT EOL ;
acline2 : NXT aclist CNT EOL ;
acline3 : NXT aclist EOL ;
aclist : aclist SEP ACNUM                            { parse_accadd(seq, $3); }
       | ACNUM                                       { parse_accadd(seq, $1); }
       ;

refs : refs refent | ;
refent : reline1 relines ;
relines : relines reline2 | reline2 ;
reline1 : RE retxt EOL ;
reline2 : NXT retxt EOL ;
retxt : retxt TXT | TXT ;

comms : comms coment | ;
coment : coline1 colines ;
colines : colines coline2 | ;
coline1 : CO cotxt EOL ;
coline2 : NXT cotxt EOL ;
cotxt : cotxt TXT | TXT ;

genetic : genetic genent | ;
genent : geline1 gelines ;
gelines : gelines geline2 | geline2 ;
geline1 : GE getxt EOL | GE EOL ;
geline2 : NXT getxt EOL ;
getxt : getxt TXT | TXT ;

complex : complex cmpent | ;
cmpent : cxline1 cxlines ;
cxlines : cxlines cxline2 | ;
cxline1 : CX cxtxt EOL ;
cxline2 : NXT cxtxt EOL ;
cxtxt : cxtxt TXT | TXT ;

function : function funent | ;
funent : fuline1 fulines ;
fulines : fulines fuline2 | ;
fuline1 : FU futxt EOL | FU EOL ;
fuline2 : NXT futxt EOL ;
futxt : futxt TXT | TXT ;

classif : clline1 cllines | ;
cllines : cllines clline2 | ;
clline1 : CL cltxt EOL ;
clline2 : NXT cltxt EOL ;
cltxt : cltxt TXT | TXT ;

kwords : keline1 kelines | ;
kelines : kelines keline2 | ;
keline1 : KE ketxt EOL ;
keline2 : NXT ketxt EOL ;
ketxt : ketxt TXT | TXT ;

feats : feline1 felines | ;
felines : felines feline2 | feline2 ;
feline1 : FE EOL ;
feline2 : NXT fetxt EOL ;
fetxt : fetxt TXT | TXT ;

sequence : seqhead seqdata ;

seqhead : suline seline snline ;

suline : SU sutxt EOL | ;
sutxt : sutxt TXT | TXT ;

seline : SE EOL ;

snline : SN snlist EOL ;
snlist : snlist SPC INT | INT ;

seqdata : seqdata seqline | seqline ;
seqline : SEQ INT seqlist seqsep EOL ;
seqlist : seqlist SEP BAS                            { parse_stradd(seq, $3); }
        | SEP BAS                                    { parse_stradd(seq, $2); }
        ;
seqsep : SEP | ;

end : END EOL ;

%%


/* Checks CODATA sequence */
int codatay_check(FILE *f) {
  int i;

  codataset_in(f);

  i = yyparse(NULL);
  if (i == 0) { return i; }

  codatalex_destroy();

  return i; }


/* Parse CODATA sequence */
sequence_t *codatay_parse(FILE *f) {
  int i;
  sequence_t *seq;

  seq = sequence_new();
  if (seq == NULL) { return seq; }
  codataset_in(f);

  i = yyparse((void *)seq);
  if (i == 0) { return seq; }

  codatalex_destroy();
  sequence_free(seq);

  return NULL; }


/* Helpers ... */

/*ARGSUSED*/
static void yyerror(sequence_t *seq, const char *s) { return; }
