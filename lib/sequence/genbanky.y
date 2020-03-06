/* genbanky.y - GENBANK sequence parser */

%{
#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include <stdlib.h>
#include <string.h>

#include "sequence.h"
#include "sequence/parse.h"
#include "sequence/genbanky.h"

void genbankset_in(FILE *);
int genbanklex(YYSTYPE *);
int genbanklex_destroy(void);

static void yyerror(sequence_t *, const char *);

int genbanky_check(FILE *);
sequence_t *genbanky_parse(FILE *);
%}

%expect 1
%pure-parser
%parse-param { sequence_t *seq }

%union { char *str; int num; }
%destructor {} <num>
%destructor { free($$); } <str>

%token EOL ERR INT NUL NUM SPC TXT
%token NXT SEP SEP2 TER
%token LO
%token <str> LONAM
%token DE
%token <str> DETXT
%token DA
%token AC
%token <str> ACNUM
%token VE GI
%token <num> VENUM GINUM
%token PJ
%token LN
%token DB
%token KE
%token <str> KWORD
%token SE
%token SO
%token OG
%token RE
%token RA
%token RC
%token RT
%token RJ
%token RM
%token RP
%token RR
%token CO
%token PR
%token FE
%token BC
%token WE
%token PI
%token LE
%token OR
%token WGS SCA CON SEQ
%token <str> SEQBAS
%token END

%%

genbank : gbannots gbsequence end      { return 0;  /*NOTREACHED*/ }
        | gpannots gpsequence end      { return 0;  /*NOTREACHED*/ }
        | rfannots rfsequence end      { return 0;  /*NOTREACHED*/ }
        | NUL                          { return -1; /*NOTREACHED*/ }
        ;

gbannots : locus defs access vers kwrds segmt orga refs comm prim feats bcount ;
gpannots : locus defs date access vers kwrds orga comm weight piso length ;
rfannots : locus defs access vers rfsrc kwrds segmt orga refs comm prim feats ;

gbsequence : sequence | contig ;
gpsequence : sequence ;
rfsequence : contig sequence | sequence | contig | shotgun ;

locus : loline ;
loline : LO LONAM lotxt EOL                          { parse_namadd(seq, $2); }
       ;
lotxt : lotxt TXT | SPC | ;

defs : deline1 delines deline3 | deline | ;
delines : delines deline2 | ;
deline : DE detxt TER EOL | DE TER EOL ;
deline1 : DE detxt EOL ;
deline2 : NXT detxt EOL ;
deline3 : NXT detxt TER EOL ;
detxt : detxt DETXT                                 { parse_dscadd2(seq, $2); }
      | DETXT                                       { parse_dscadd1(seq, $1); }
      ;

date : daline ;
daline : DA datxt EOL ;
datxt : datxt TXT | TXT ;

access : acline1 aclines | ;
aclines : aclines acline2 | ;
acline1 : AC aclist EOL ;
acline2 : NXT aclist EOL ;
aclist : aclist SEP ACNUM                            { parse_accadd(seq, $3); }
       | ACNUM                                       { parse_accadd(seq, $1); }
       ;

vers : veline | ;
veline : VE vetxt gitxt EOL ;
vetxt : ACNUM SEP VENUM                              { parse_nuladd(seq, $1);
                                                       parse_veradd(seq, $3); }
      | ACNUM
      ;
gitxt : SPC GI GINUM                                  { parse_giadd(seq, $3); }
      | /* Empty */
      ;

rfsrc: proj dblnk | proj | dblnk dbsrc | dblnk | dbsrc ;

proj : pjline ;
pjline : PJ pjtxt EOL ;
pjtxt : pjtxt TXT | TXT ;

dblnk: lnline1 lnlines ;
lnlines: lnlines lnline2 | ;
lnline1: LN lntxt EOL ;
lnline2: NXT lntxt EOL ;
lntxt : lntxt TXT | TXT ;

dbsrc : dbline1 dblines ;
dblines: dblines dbline2 | ;
dbline1 : DB dbtxt EOL ;
dbline2 : NXT dbtxt EOL ;
dbtxt : dbtxt TXT | TXT ;

kwrds : keline1 kelines keline3 | keline | ;
kelines : kelines keline2 | ;
keline : KE kwlist TER EOL | KE TER EOL ;
keline1 : KE kwlist SEP2 EOL                { parse_kwdadd2(seq, strdup("")); }
        | KE kwlist EOL
        ;
keline2 : NXT kwlist SEP2 EOL               { parse_kwdadd2(seq, strdup("")); }
        | NXT kwlist EOL
        ;
keline3 : NXT kwlist TER EOL ;
kwlist : kwlist SEP KWORD                           { parse_kwdadd2(seq, $3); }
       | kwlist SPC KWORD                           { parse_kwdupd2(seq, $3); }
       | KWORD                                      { parse_kwdupd2(seq, $1); }
       ;

segmt : seline | ;
seline : SE setxt EOL ;
setxt : setxt TXT | TXT ;

orga : orga orgent | ;
orgent : orgsou orggan | orgsou | orggan ;

orgsou : soline1 solines ;
solines : solines soline2 | ;
soline1 : SO sotxt EOL ;
soline2 : NXT sotxt EOL ;
sotxt : sotxt TXT | TXT ;

orggan : ogline1 oglines ;
oglines : oglines ogline2 | ;
ogline1 : OG ogtxt EOL ;
ogline2 : NXT ogtxt EOL ;
ogtxt : ogtxt TXT | TXT ;

refs : refs refent | ;
refent : refnum refaut refcon reftit refjou refmed refpub refrem ;

refnum : reline1 relines ;
relines: relines reline2 | ;
reline1 : RE retxt EOL ;
reline2 : NXT retxt EOL ;
retxt : retxt TXT | TXT ;

refaut : raline1 ralines | ;
ralines : ralines raline2 | ;
raline1 : RA ratxt EOL ;
raline2 : NXT ratxt EOL ;
ratxt : ratxt TXT | TXT ;

refcon : rcline1 rclines | ;
rclines : rclines rcline2 | ;
rcline1 : RC rctxt EOL ;
rcline2 : NXT rctxt EOL ;
rctxt : rctxt TXT | TXT ;

reftit : rtline1 rtlines | ;
rtlines : rtlines rtline2 | ;
rtline1 : RT rttxt EOL ;
rtline2 : NXT rttxt EOL ;
rttxt : rttxt TXT | TXT ;

refjou : rjline1 rjlines | ;
rjlines : rjlines rjline2 | ;
rjline1 : RJ rjtxt EOL ;
rjline2 : NXT rjtxt EOL ;
rjtxt : rjtxt TXT | TXT ;

refmed : rmline | ;
rmline : RM rmtxt EOL ;
rmtxt : rmtxt TXT | TXT ;

refpub : rpline | ;
rpline : RP rptxt EOL ;
rptxt : rptxt TXT | TXT ;

refrem : rrline1 rrlines | ;
rrlines : rrlines rrline2 | ;
rrline1 : RR rrtxt EOL ;
rrline2 : NXT rrtxt EOL ;
rrtxt : rrtxt TXT | TXT ;

comm : coline1 colines | ;
colines : colines coline2 | ;
coline1 : CO cotxt EOL ;
coline2 : NXT cotxt EOL ;
cotxt : cotxt TXT | ;

prim : prline1 prlines | ;
prlines : prlines prline2 | ;
prline1 : PR prtxt EOL ;
prline2 : NXT prtxt EOL ;
prtxt : prtxt TXT | TXT ;

feats : feline1 felines | ;
felines : felines feline2 | ;
feline1 : FE fetxt EOL ;
feline2 : NXT fetxt EOL ;
fetxt : fetxt TXT | TXT ;

bcount : bcline | ;
bcline : BC bctxt EOL ;
bctxt : bctxt TXT | TXT ;

weight : weline ;
weline : WE NUM EOL ;

piso : piline | ;
piline : PI NUM EOL ;

length : leline ;
leline : LE INT EOL ;

sequence : seqhead seqdata ;
contig : seqcont ;
shotgun : seqwgs seqsca | seqwgs ;

seqhead : orline ;
orline : OR ortxt EOL ;
ortxt : ortxt TXT | ;

seqdata : seqdata seqline | seqline ;
seqline : INT SPC seqlist EOL ;
seqlist : seqlist SPC SEQBAS                         { parse_stradd(seq, $3); }
        | SEQBAS                                     { parse_stradd(seq, $1); }
        ;

seqcont : conline1 conlines ;
conlines : conlines conline2 | ;
conline1 : CON contxt EOL ;
conline2 : NXT contxt EOL ;
contxt : contxt TXT | TXT ;

seqwgs : seqwgs wgsline | wgsline ;
wgsline : WGS wgstxt EOL ;
wgstxt : wgstxt TXT | TXT ;

seqsca : seqsca scaline | scaline ;
scaline : SCA scatxt EOL ;
scatxt : scatxt TXT | TXT ;

end : END EOL ;



%%


/* Check GENBANK sequence */
int genbanky_check(FILE *f) {
  int i;

  genbankset_in(f);

  i = yyparse(NULL);
  if (i == 0) { return i; }

  genbanklex_destroy();

  return i; }


/* Parse GENBANK sequence */
sequence_t *genbanky_parse(FILE *f) {
  int i;
  sequence_t *seq;

  seq = sequence_new();
  if (seq == NULL) { return seq; }
  genbankset_in(f);

  i = yyparse((void *)seq);
  if (i == 0) {
    return seq; }

  genbanklex_destroy();
  sequence_free(seq);

  return NULL; }


/* Helpers ... */

/*ARGSUSED*/
static void yyerror(sequence_t *seq, const char *s) { return; }
