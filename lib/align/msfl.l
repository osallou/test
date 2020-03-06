/* msfl.l - MSF alignment lexer */

%{
#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include <stdlib.h>
#include <string.h>

#include "extern/text.h"

#include "align.h"
#include "align/msfy.h"

static int init = 0;
%}

%option bison-bridge
%option never-interactive
%option noinput nounput noyywrap

%x HEAD NAME SEQS

alp     [[:alpha:]]
blk     [[:blank:]]
dig     [[:digit:]]
dot     "."
eol     "\n"
exc     "!"
min     "-"
que     "?"
sla     "/"
spc     " "
sta     "*"
til     "~"

txt     .{1,80}

tag     {exc}{2}[NA]A_MULTIPLE_ALIGNMENT{spc}{dig}+{dot}{dig}+
tam     {spc}{0,2}Name:{spc}
nam     [^ \n]{1,80}
gap     ({dot}|{min}|{que}|{til})
bas     ({alp}|{sta}|{gap}){1,80}

%%

%{
if (init == 0) { init = 1; BEGIN HEAD; }
%}

<*>^{tag}      { BEGIN HEAD; }
<HEAD>{dot}{2}{spc}?/{eol} { BEGIN NAME; return TER; }
<HEAD>{txt}    { return TXT; }
<HEAD>{txt}/{dot}{dot}{spc}{eol} { return TXT; }
<HEAD>{txt}/{dot}{dot}{eol} { return TXT; }
<HEAD>{eol}    { return EOL; }

<NAME>^{blk}*{eol}   ; /* Empty lines ignored */
<NAME>^{tam}/{txt} { return NAM; }
<NAME>{txt}    { return TXT; }
<NAME>^{spc}*{sla}{2}{spc}*/{eol} { BEGIN SEQS; return TER; }
<NAME>{eol}    { return EOL; }

<SEQS>^{blk}*{eol}/. { return EOL; }
<SEQS>^{blk}*{eol} ; /* Empty lines ignored */
<SEQS>^{spc}*Consensus{spc}{2}.+{eol} ; /* Multalin consensus ignored */
<SEQS>^{spc}*{nam}/{spc}{spc}*{bas} { yylval->str = xstrdup(yytext, yyleng);
                                      return NAM; }
<SEQS>{bas}+   { yylval->str = xstrdup(yytext, yyleng); return BAS; }
<SEQS>{spc}+   { return SPC; }
<SEQS>{spc}+/{eol} ; /* Trailing spaces ignored */
<SEQS>{dig}+   { return INT; }
<SEQS>{eol}/{spc}*{nam}{spc}{spc}+{bas} { return EOL; }
<SEQS>{eol}    { return EOL; }
<SEQS><<EOF>>  { BEGIN INITIAL; }
<SEQS>.        { return ERR; }

<<EOF>>        { init = 0; return END; }
{eol}          { return ERR; }
.              { return ERR; }

%%
