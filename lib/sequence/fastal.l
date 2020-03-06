/* fastal.l - FASTA sequence lexer */

%{
#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include <stdlib.h>
#include <string.h>

#include "extern/text.h"

#include "sequence.h"
#include "sequence/fastay.h"
%}

%option bison-bridge
%option never-interactive
%option noinput nounput noyywrap

%x HEAD DESC SEQS

alp            [[:alpha:]]
blk            [[:blank:]]
dot            "."
eol            "\n"
min            "-"
pip            "|"
sem            ";"
spc            " "
sta            "*"
sup            ">"
tab            "\t"
til            "~"

nam            [^ \n]{1,80}
gap            ({min}|{til})
bas            ({alp}|{sta}|{gap}){1,80}
txt            .{1,80}

nbr            ([PF]1|[DR][LC]|N[13]){sem}[^ \n]+

%%

^{blk}*{eol}   ; /* Empty lines ignored */

^{sup}         { BEGIN HEAD; return SUP; }
<HEAD>{nbr}/{eol} { return ERR; } /* FIXME: Reject NBRF header */
<HEAD>{nam}    { yylval->str = xstrdup(yytext, yyleng); return NAM; }
<HEAD>{spc}+   { BEGIN DESC; return SPC; }
<HEAD>{eol}    { BEGIN SEQS; return EOL; }

<DESC>{txt}    { yylval->str = xstrdup(yytext, yyleng); return TXT; }
<DESC>{eol}    { BEGIN SEQS; return EOL; }

<SEQS>{bas}    { yylval->str = xstrdup(yytext, yyleng); return BAS; }
<SEQS>{blk}    ; /* Spaces/Tabs ignored */
<SEQS>{eol}    ; /* Newlines ignored */
<SEQS>{eol}/{sup} { BEGIN INITIAL; return END; }
<SEQS><<EOF>>  { BEGIN INITIAL; return END; }
<SEQS>.        { return ERR; }

<<EOF>>        { return NUL; }
{eol}          { return ERR; }
.              { return ERR; }

%%
