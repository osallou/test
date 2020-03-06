/* gdel.l - GDE sequence lexer */

%{
#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include <stdlib.h>
#include <string.h>

#include "extern/text.h"

#include "sequence.h"
#include "sequence/gdey.h"
%}

%option bison-bridge
%option never-interactive
%option noinput nounput noyywrap

%x HEAD SEQS

alp      [[:alpha:]]
blk      [[:blank:]]
die      "#"
eol      "\n"
min      "-"
per      "%"

txt      .{1,80}

tag      ({die}|{per})
nam      [^ \n]{1,80}
gap      {min}
bas      ({alp}|{min}){1,80}

%%

^{eol}         ; /* Empty lines ignored */

^{tag}         { BEGIN HEAD; return TAG; }
<HEAD>{nam}    { yylval->str = xstrdup(yytext, yyleng); return NAM; }
<HEAD>{blk}/{eol} ; /* Ignore trailing spaces */
<HEAD>{eol}    { BEGIN SEQS; return EOL; }
<HEAD>.        { return ERR; }

<SEQS>{bas}    { yylval->str = xstrdup(yytext, yyleng); return BAS; }
<SEQS>{eol}/{tag} { BEGIN INITIAL; return END; }
<SEQS>{eol}    ; /* Newlines ignored */
<SEQS>{blk}    ; /* Spaces ignored */
<SEQS><<EOF>>  { BEGIN INITIAL; return END; }
<SEQS>.        { return ERR; }

<<EOF>>        { return NUL; }
{eol}          { return ERR; }
.              { return ERR; }

%%
