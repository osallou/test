/* rawl.l - RAW sequence lexer */

%{
#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include <stdlib.h>
#include <string.h>

#include "extern/text.h"

#include "sequence.h"
#include "sequence/rawy.h"
%}

%option bison-bridge
%option never-interactive
%option noinput nounput noyywrap

alp            [[:alpha:]]
blk            [[:blank:]]
eol            "\n"
min            "-"
spc            " "
sta            "*"
tab            "\t"

gap            {min}
bas            ({alp}|{gap}|{sta}){1,80}

%%

{eol}          ; /* Newlines ignored */
{blk}          ; /* Spaces/Tabs ignored */

{bas}          { yylval->str = xstrdup(yytext, yyleng); return BAS; }

<<EOF>>        { return NUL; }
.              { return ERR; }

%%
