/* igl.l - IG sequence lexer */

%{
#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include <stdlib.h>
#include <string.h>

#include "extern/text.h"

#include "sequence.h"
#include "sequence/igy.h"
%}

%option bison-bridge
%option never-interactive
%option noinput nounput noyywrap

%x HCOM HNAM SEQS

alp            [[:alpha:]]
blk            [[:blank:]]
dot            "."
eol            "\n"
min            "-"
sem            ";"
spc            " "
sta            "*"
til            "~"

txt            .{1,80}

nam            [^ \t\n]{1,80}
gap            ({min}|{dot}|{til})
bas            ({alp}|{gap}|{sta}){1,80}
typ            [12]

%%

^{eol}         ; /* Empty lines ignored */

^{sem}/{txt}   { BEGIN HCOM; return SEM; }
^{sem}/{eol}   { BEGIN HCOM; return SEM; }
<HCOM>{txt}    { yylval->str = xstrdup(yytext, yyleng); return TXT; }
<HCOM>{eol}    { BEGIN HNAM; return EOL; }
<HCOM>{eol}/{sem} { BEGIN INITIAL; return EOL; }

<HNAM>{nam}    { yylval->str = xstrdup(yytext, yyleng); return NAM; }
<HNAM>^{blk}+  ; /* Leading spaces ignored */
<HNAM>{blk}+/{eol} ; /* Trailing spaces ignored */
<HNAM>{eol}    { BEGIN SEQS; return EOL; }
<HNAM>.        { return ERR; }

<SEQS>{bas}    { yylval->str = xstrdup(yytext, yyleng); return BAS; }
<SEQS>{blk}    ; /* Spaces ignored */
<SEQS>{typ}    { return TYP; }
<SEQS>{eol}    ; /* Newlines ignored */
<SEQS>{eol}/{sem} { BEGIN INITIAL; return END; }
<SEQS><<EOF>>  { BEGIN INITIAL; return END; }
<SEQS>.        { return ERR; }

<<EOF>>        { BEGIN INITIAL; return NUL; }
{eol}          { return ERR; }
.              { return ERR; }

%%
