/* gcgl.l - GCG sequence lexer */

%{
#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include <stdlib.h>
#include <string.h>

#include "extern/text.h"

#include "sequence.h"
#include "sequence/gcgy.h"

static int init = 0;
%}

%option bison-bridge
%option never-interactive
%option noinput nounput noyywrap

%x HEAD SEQS

alp       [[:alpha:]]
dig       [[:digit:]]
dot       "."
eol       "\n"
exc       "!"
min       "-"
spc       " "
sta       "*"

txt       .{1,80}

tag       {exc}{2}[NA]A_SEQUENCE{spc}{dig}+{dot}{dig}+
bas       ({alp}|{sta}|{min}){1,80}

%%

%{
if (init == 0) { init = 1; BEGIN HEAD; } /* FIXME: Not thread safe !!! */
%}

<*>^{tag}      { BEGIN HEAD; }
<HEAD>{dot}{2}{spc}?/{eol} { BEGIN SEQS; return TER; }
<HEAD>{txt}    { return TXT; }
<HEAD>{txt}/{dot}{dot}{spc}{eol} { return TXT; }
<HEAD>{txt}/{dot}{dot}{eol} { return TXT; }
<HEAD>{eol}    { return EOL; }

<SEQS>^{spc}+/{dig} ; /* Leading spaces ignored */
<SEQS>{spc}+/{eol} ; /* Trailing spaces ignored */
<SEQS>{bas}    { yylval->str = xstrdup(yytext, yyleng); return BAS; }
<SEQS>{dig}+   { return INT; }
<SEQS>{spc}{1,2} { return SPC; }
<SEQS>^{eol}   ; /* Empty sequence line ignored */
<SEQS>{eol}    { return EOL; }
<SEQS><<EOF>>  { init = 0; BEGIN INITIAL; return END; }
<SEQS>.        { return ERR; }

<<EOF>>        { init = 0; BEGIN INITIAL; return NUL; }
{eol}          { return ERR; }
.              { return ERR; }

%%
