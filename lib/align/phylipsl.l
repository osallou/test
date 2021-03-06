/* phylipsl.l - PHYLIPS alignment lexer */

%{
#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#include "extern/text.h"

#include "align.h"
#include "align/phylipsy.h"

static void clean_spc(char *str);
%}

%option bison-bridge
%option never-interactive
%option noinput nounput noyywrap

%x HEAD SEQS

alp        [[:alpha:]]
blk        [[:blank:]]
dig        [[:digit:]]
dot        "."
eol        "\n"
min        "-"
que        "?"
spc        " "
sta        "*"

mis        ({spc}+{alp}*)+
nam        [^\(\):;,\[\]\n]{10}
gap        ({dot}|{min})
bas        ({alp}|{que}|{sta}|{gap}){1,10}

%%

^{spc}*{eol}   ; /* Empty lines ignored */

^{spc}*/{dig}+{blk}+{dig}+ { BEGIN HEAD; }
<HEAD>{dig}+   { return INT; }
<HEAD>{blk}+   { return SPC; }
<HEAD>{blk}+/{eol} ; /* Ignore trailing spaces */
<HEAD>{mis}/{eol} ; /* Extra stuff ignored */
<HEAD>{eol}    { BEGIN SEQS; return EOL; }
<HEAD>.        { return ERR; }

<SEQS>^{spc}{10} ; /* Leading spaces ignored */
<SEQS>^{nam}   { yylval->str = xstrdup(yytext, yyleng); clean_spc(yylval->str);
                 BEGIN SEQS; return NAM; }
<SEQS>{bas}    { yylval->str = xstrdup(yytext, yyleng); return BAS; }
<SEQS>{spc}    ; /* Sequence spaces ignored */
<SEQS>^{eol}   ; /* Empty lines ignored */
<SEQS>{eol}{2,}/{spc}{10} { return ERR; } /* Not allowed */
<SEQS>{eol}/{spc}{10} { return EOL; }
<SEQS>{eol}+/{nam} { return EOL; }
<SEQS>{eol}    { BEGIN INITIAL; return EOL; }
<SEQS><<EOF>>  { BEGIN INITIAL; return EOL; }
<SEQS>.        { return ERR; }

<<EOF>>        { return END; }
{eol}          { return ERR; }
.              { return ERR; }

%%


/* Clean trailing spaces ... */
static void clean_spc(char *str) {
  char *p;

  p = str;
  while (*p) { p++; }
  p--;
  while (p >= str && isspace((unsigned char)*p)) {
    *p = '\0'; p--; }

  return; }
