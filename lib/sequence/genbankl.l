/* genbankl.l - GENBANK sequence lexer */

%{
#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include <stdlib.h>
#include <string.h>

#include "extern/text.h"

#include "sequence.h"
#include "sequence/genbanky.h"
%}

%option bison-bridge
%option never-interactive
%option noinput nounput noyywrap

%x HDTAG
%x LOTAG DETAG DATAG ACTAG VETAG PJTAG LNTAG DBTAG KETAG SETAG SOTAG OGTAG
%x RETAG RATAG RCTAG RTTAG RJTAG RMTAG RPTAG RRTAG COTAG PRTAG FETAG BCTAG
%x WETAG PITAG LETAG ORTAG
%x WGSTAG SCATAG CONTAG SEQTAG ENDTAG
%x LOTA2 VETA2 KETA2

alp            [[:alpha:]]
aln            [[:alnum:]]
dig            [[:digit:]]
dot            "."
eol            "\n"
min            "-"
que            "?"
sem            ";"
sla            "/"
spc            " "
sta            "*"
und            "_"

txt            .{1,80}

num            {dig}+({dot}{dig}+)?

gbtag          GB{alp}{3}{dig}*{dot}SEQ
gptag          (gp{alp}{3}{dig}*|gpeptnew|nc{dig}{4})({dot}seq)?
dbtag          ({gbtag}|{gptag})

lonam          [^ \n]{1,68}

acnum          [^ \n]{1,68}

kword          [^ \n]{1,80}

gap            ({dot}|{min}|{que})
seqbas         ({alp}|{gap}|{sta}){1,10}

%%

^{eol}         ; /* Empty lines ignored */
^{spc}+{eol}   ; /* Empty lines ignored */

^TITLE.*{eol}  ; /* Ignore TITLE from unknown source */

^{spc}?{dbtag} { BEGIN HDTAG; } /* Ignore file header */
<HDTAG>{txt}   ;
<HDTAG>{eol}/LOCUS { BEGIN INITIAL; }
<HDTAG>{eol}   ;

^LOCUS{spc}{7} { BEGIN LOTAG; return LO; }
<LOTAG>{lonam} { yylval->str = xstrdup(yytext, yyleng); return LONAM; }
<LOTAG>{spc}+  { BEGIN LOTA2; return SPC; }
<LOTAG>{eol}   { BEGIN INITIAL; return EOL; }
<LOTAG>.       { return ERR; }

<LOTA2>{txt}   { return TXT; }
<LOTA2>{eol}   { BEGIN INITIAL; return EOL; }

^DEFINITION{spc}{2} { BEGIN DETAG; return DE; }
<DETAG>^{spc}{12}/{txt}{dot}{eol}[^ ] { return NXT; }
<DETAG>^{spc}{12}/{txt}{eol}{spc} { return NXT; }
<DETAG>{dot}/{eol} { return TER; }
<DETAG>{txt}   { yylval->str = xstrdup(yytext, yyleng); return DETXT; }
<DETAG>{txt}/{dot}{eol}[^ ] { yylval->str = xstrdup(yytext, yyleng);
                              return DETXT; }
<DETAG>{txt}/{eol}{spc} { yylval->str = xstrdup(yytext, yyleng); return DETXT; }
<DETAG>{eol}/{spc}{12} { return EOL; }
<DETAG>{eol}   { BEGIN INITIAL; return EOL; }

^DATE{spc}{8}  { BEGIN DATAG; return DA; }
<DATAG>{txt}   { return TXT; }
<DATAG>{eol}   { BEGIN INITIAL; return EOL; }

^ACCESSION{spc}{3} { BEGIN ACTAG; return AC; }
<ACTAG>^{spc}{12}/{acnum} { return NXT; }
<ACTAG>{acnum} { yylval->str = xstrdup(yytext, yyleng); return ACNUM; }
<ACTAG>{spc}+  { return SEP; }
<ACTAG>{eol}/{spc}{12} { return EOL; }
<ACTAG>{eol}   { BEGIN INITIAL; return EOL; }
<ACTAG>{spc}REGION.*/{eol} ; /* Ignore region values, unknown source ... */
<ACTAG>.       { return ERR; }

^VERSION{spc}{5} { BEGIN VETAG; return VE; }
<VETAG>{dot}   { return SEP; }
<VETAG>{dig}+  { yylval->num = atoi(yytext); return VENUM; }
<VETAG>{spc}{2} { BEGIN VETA2; return SPC; }
<VETAG>{acnum} { return ACNUM; }
<VETAG>{eol}   { BEGIN INITIAL; return EOL; }
<VETAG>.       { return ERR; }

<VETA2>{dig}+  { yylval->num = atoi(yytext); return GINUM; }
<VETA2>GI:     { return GI; }
<VETA2>{eol}   { BEGIN INITIAL; return EOL; }
<VETA2>.       { return ERR; }

^PROJECT{spc}{5} { BEGIN PJTAG; return PJ; }
<PJTAG>{txt}   { return TXT; }
<PJTAG>{eol}   { BEGIN INITIAL; return EOL; }

^DBLINK{spc}{6} { BEGIN LNTAG; return LN; }
<LNTAG>^{spc}{12}/{txt} { return NXT; }
<LNTAG>{txt}   { return TXT; }
<LNTAG>{eol}/{spc}{12} { return EOL; }
<LNTAG>{eol}   { BEGIN INITIAL; return EOL; }

^DBSOURCE{spc}{4} { BEGIN DBTAG; return DB; }
<DBTAG>^{spc}{12}/{txt} { return NXT; }
<DBTAG>{txt}   { return TXT; }
<DBTAG>{eol}/{spc}{12} { return EOL; }
<DBTAG>{eol}   { BEGIN INITIAL; return EOL; }

^KEYWORDS{spc}{4} { BEGIN KETAG; return KE; }
<KETAG>^{spc}{12} { return NXT; }
<KETAG>{sem}{spc}+ { return SEP; }
<KETAG>{sem}/{eol} { return SEP2; }
<KETAG>{dot}/{eol}[^ ] { return TER; }
<KETAG>{kword}/{sem}{spc} { yylval->str = xstrdup(yytext, yyleng);
                            return KWORD; }
<KETAG>{kword}/{sem}{eol} { yylval->str = xstrdup(yytext, yyleng);
                            return KWORD; }
<KETAG>{kword}/{dot}{eol}[^ ] { yylval->str = xstrdup(yytext, yyleng);
                                return KWORD; }
<KETAG>{kword}/{spc} { yylval->str = xstrdup(yytext, yyleng); return KWORD; }
<KETAG>{kword}/{eol} { yylval->str = xstrdup(yytext, yyleng); return KWORD; }
<KETAG>{spc}+  { return SPC; }
<KETAG>{eol}/{spc}{12} { return EOL; }
<KETAG>{eol}   { BEGIN INITIAL; return EOL; }
<KETAG>.       { return ERR; }

^SEGMENT{spc}{5} { BEGIN SETAG; return SE; }
<SETAG>{txt}   { return TXT; }
<SETAG>{eol}   { BEGIN INITIAL; return EOL; }

^SOURCE{spc}{6} { BEGIN SOTAG; return SO; }
<SOTAG>^{spc}{12}/{txt} { return NXT; }
<SOTAG>{txt}   { return TXT; }
<SOTAG>{eol}/{spc}{12} { return EOL; }
<SOTAG>{eol}   { BEGIN INITIAL; return EOL; }

^{spc}{0,2}ORGANISM{spc}{2,4} { BEGIN OGTAG; return OG; }
<OGTAG>^{spc}{12}/{txt} { return NXT; }
<OGTAG>{txt}   { return TXT; }
<OGTAG>{eol}/{spc}{12} { return EOL; }
<OGTAG>{eol}   { BEGIN INITIAL; return EOL; }

^REFERENCE{spc}{3} { BEGIN RETAG; return RE; }
<RETAG>^{spc}{12}/{txt} { return NXT; }
<RETAG>{txt}   { return TXT; }
<RETAG>{eol}/{spc}{12} { return EOL; }
<RETAG>{eol}   { BEGIN INITIAL; return EOL; }

^{spc}{2}AUTHORS{spc}{3} { BEGIN RATAG; return RA; }
<RATAG>^{spc}{12}/{txt} { return NXT; }
<RATAG>{txt}   { return TXT; }
<RATAG>{eol}/{spc}{12} { return EOL; }
<RATAG>{eol}   { BEGIN INITIAL; return EOL; }

^{spc}{2}CONSRTM{spc}{3} { BEGIN RCTAG; return RC; }
<RCTAG>^{spc}{12}/{txt} { return NXT; }
<RCTAG>{txt}   { return TXT; }
<RCTAG>{eol}/{spc}{12} { return EOL; }
<RCTAG>{eol}   { BEGIN INITIAL; return EOL; }

^{spc}{2}TITLE{spc}{5} { BEGIN RTTAG; return RT; }
<RTTAG>^{spc}{12}/{txt} { return NXT; }
<RTTAG>{txt}   { return TXT; }
<RTTAG>{eol}/{spc}{12} { return EOL; }
<RTTAG>{eol}   { BEGIN INITIAL; return EOL; }

^{spc}{2}JOURNAL{spc}{3} { BEGIN RJTAG; return RJ; }
<RJTAG>^{spc}{12}/{txt} { return NXT; }
<RJTAG>{txt}   { return TXT; }
<RJTAG>{eol}/{spc}{12} { return EOL; }
<RJTAG>{eol}   { BEGIN INITIAL; return EOL; }

^{spc}{2}MEDLINE{spc}{3} { BEGIN RMTAG; return RM; }
<RMTAG>{txt}   { return TXT; }
<RMTAG>{eol}   { BEGIN INITIAL; return EOL; }

^{spc}{3}PUBMED{spc}{3} { BEGIN RPTAG; return RP; }
<RPTAG>{txt}   { return TXT; }
<RPTAG>{eol}   { BEGIN INITIAL; return EOL; }

^{spc}{2}REMARK{spc}{4} { BEGIN RRTAG; return RR; }
<RRTAG>^{spc}{12}/{txt} { return NXT; }
<RRTAG>{txt}   { return TXT; }
<RRTAG>{eol}/{spc}{12} { return EOL; }
<RRTAG>{eol}   { BEGIN INITIAL; return EOL; }

^COMMENT{spc}{5} { BEGIN COTAG; return CO; }
<COTAG>^{spc}{12}/{eol} { return NXT; }
<COTAG>^{spc}{12}/{txt} { return NXT; }
<COTAG>{txt}   { return TXT; }
<COTAG>{eol}+/{spc}{12} { return EOL; }
<COTAG>{eol}   { BEGIN INITIAL; return EOL; }

^PRIMARY{spc}{5} { BEGIN PRTAG; return PR; }
<PRTAG>^{spc}{12}/{txt} { return NXT; }
<PRTAG>{txt}   { return TXT; }
<PRTAG>{eol}/{spc}{12} { return EOL; }
<PRTAG>{eol}   { BEGIN INITIAL; return EOL; }

^FEATURES{spc}{4} { BEGIN FETAG; return FE; }
<FETAG>^{spc}{5}/{txt} { return NXT; }
<FETAG>{txt}   { return TXT; }
<FETAG>{eol}/{spc}{5} { return EOL; }
<FETAG>{eol}   { BEGIN INITIAL; return EOL; }

^BASE{spc}COUNT{spc}{2} { BEGIN BCTAG; return BC; }
<BCTAG>{txt}   { return TXT; }
<BCTAG>{eol}   { BEGIN INITIAL; return EOL; }

^WEIGHT{spc}{6} { BEGIN WETAG; return WE; }
<WETAG>{num}   { return NUM; }
<WETAG>{eol}   { BEGIN INITIAL; return EOL; }
<WETAG>.       { return ERR; }

^PI{spc}{10}   { BEGIN PITAG; return PI; }
<PITAG>{num}   { return NUM; }
<PITAG>{eol}   { BEGIN INITIAL; return EOL; }
<PITAG>.       { return ERR; }

^LENGTH{spc}{6} { BEGIN LETAG; return LE; }
<LETAG>{dig}+  { return INT; }
<LETAG>{eol}   { BEGIN INITIAL; return EOL; }
<LETAG>.       { return ERR; }

^ORIGIN{spc}{6} { BEGIN ORTAG; return OR; }
^ORIGIN        { BEGIN ORTAG; return OR; }
<ORTAG>{txt}   { return TXT; }
<ORTAG>{eol}   { BEGIN SEQTAG; return EOL; }
<ORTAG>{eol}/{eol} ; /* Ignore extra newlines */

<SEQTAG>^{spc}{1,8}/{dig} ; /* Ignore leading spaces */
<SEQTAG>{seqbas} { yylval->str = xstrdup(yytext, yyleng); return SEQBAS; }
<SEQTAG>{dig}+ { return INT; }
<SEQTAG>{spc}+/{eol} ; /* Trailing space ignored */
<SEQTAG>{spc}{1,2} { return SPC; }
<SEQTAG>{eol}/{spc} { return EOL; }
<SEQTAG>{eol}/{dig} { return EOL; }
<SEQTAG>{eol}  { BEGIN INITIAL; return EOL; }
<SEQTAG>.      { return ERR; }

^CONTIG{spc}{6} { BEGIN CONTAG; return CON; }
<CONTAG>^{spc}{12}/{txt} { return NXT; }
<CONTAG>{txt}  { return TXT; }
<CONTAG>{eol}/{spc}{12} { return EOL; }
<CONTAG>{eol}  { BEGIN INITIAL; return EOL; }

^WGS{spc}{9}   { BEGIN WGSTAG; return WGS; }
<WGSTAG>{txt}  { return TXT; }
<WGSTAG>{eol}  { BEGIN INITIAL; return EOL; }

^WGS_SCAFLD{spc}{2} { BEGIN SCATAG; return SCA; }
<SCATAG>{txt}  { return TXT; }
<SCATAG>{eol}  { BEGIN INITIAL; return EOL; }

^{sla}{2}      { BEGIN ENDTAG; return END; }
<ENDTAG>{eol}  { BEGIN INITIAL; return EOL; }
<ENDTAG><<EOF>> { BEGIN INITIAL; return EOL; }
<ENDTAG>.      { return ERR; }

<<EOF>>        { return NUL; }
{eol}          { return ERR; }
.              { return ERR; }

%%
