/* nexusil.l - NEXUSI alignment lexer */

%{
#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#include "extern/text.h"

#include "align.h"
#include "align/nexusiy.h"

static void clean_quo(char *str);
%}

%option bison-bridge
%option caseless
%option never-interactive
%option noinput nounput noyywrap
%option stack noyy_top_state

%x COMM BBLO CMDS MATX EBLO IGNO

alp        [[:alpha:]]
blk        [[:blank:]]
cbr        "]"
dot        "."
eol        "\n"
equ        "="
min        "-"
obr        "["
que        "?"
quo        ("\""|"\'")
sem        ";"
spa        [[:space:]]
spc        " "
sta        "*"
til        "~"

tag        #NEXUS
beg        begin
key        (characters?|data)
end        end(block)?
blo        [^; \n]{1,80}

com        (dimensions|format|options|title|char(state)?labels)
tok        {alp}{1,80}
val        ([^ \t=;\n]{1,80}|{quo}[^;\n]{1,80}{quo})

mat        matrix
nam        ([^\[\] \t\n]{1,80}|{quo}[^\n]{1,80}{quo})
gap        ({dot}|{min}|{que}|{til})
bas        ({alp}|{gap}|{sta}){1,10}

%%

<*>{blk}{0,80}{obr} { yy_push_state(COMM); } /* Skip comments */
<COMM>[^\]]{1,80} ;
<COMM>{cbr}{blk}{0,80} { yy_pop_state(); }
<COMM>.        { return ERR; }

{eol}          ; /* Newlines ignored */
{spc}+/{eol}   ; /* Trailing spaces ignored */

^{tag}         { return TAG; }

^{blk}*{beg}/{spc}{key} { BEGIN BBLO; return BEG; }
<BBLO>{key}    { return KEY; }
<BBLO>{sem}    { return SEM; }
<BBLO>{spc}    { return SPC; }
<BBLO>{eol}    { BEGIN CMDS; } /* Newlines ignored */
<BBLO>.        { return ERR; }

<CMDS>{com}/{blk} { return COM; }
<CMDS>{com}/{eol} { return COM; }
<CMDS>{tok}/{blk}?{equ}{blk}? { return TOK; }
<CMDS>{val}/{blk} { return VAL; }
<CMDS>{val}/{sem} { return VAL; }
<CMDS>{val}/{eol} { return VAL; }
<CMDS>{blk}?{equ}{blk}? { return EQU; }
<CMDS>{sem}{blk}* { return SEM; }
<CMDS>^{blk}+  ; /* Leading spaces ignored */
<CMDS>{blk}+/{sem} ; /* Ingore extra spaces before `;' */
<CMDS>{blk}+   { return SPC; }
<CMDS>{eol}/{blk}*{mat} { BEGIN MATX; }
<CMDS>{eol}    ; /* Newlines ignored */
<CMDS>.        { return ERR; }

<MATX>^{blk}*{mat}{blk}*{eol} { return MAT; }
<MATX>^{blk}*{nam}/{blk} { yylval->str = xstrdup(yytext, yyleng);
                           clean_quo(yylval->str);
                           if (*yylval->str == '\0') return ERR; return NAM; }
<MATX>{bas}    { yylval->str = xstrdup(yytext, yyleng); return BAS; }
<MATX>{sem}/{blk}*{eol} { BEGIN EBLO; return SEM; }
<MATX>^{blk}+  ; /* Leading spaces ignored */
<MATX>{blk}+/{eol} ; /* Trailing spaces ignored */
<MATX>{blk}+   { return SPC; }
<MATX>^{eol}+/{sem} ; /* Ignore extra lines */
<MATX>^{eol}+  { return SEP; }
<MATX>{eol}    ;
<MATX>.        { return ERR; }

<EBLO>{end}    { return END; }
<EBLO>{sem}    { BEGIN INITIAL; return SEM; }
<EBLO>{blk}+   ; /* Spaces ignored */
<EBLO>{eol}    ; /* Newlines ignored */
<EBLO>.        { return ERR; }

^{blk}*{beg}/{spc} { BEGIN IGNO; }
<IGNO>^{blk}*{end}{sem} { BEGIN INITIAL; }
<IGNO>{eol}    ; /* Newlines ignored */
<IGNO>.        ; /* All chars ignored */
<IGNO><<EOF>>  { return ERR; }

.              { return ERR; }

%%

/* Remove quotes ... */
static void clean_quo(char *str) {
  char *p;

  p = str;
  if (*p != '\'' && *p != '"')
    return;
  while (*p && *(p+1)) {
    *p = *(p+1);
    p++; }
  *(p-1) = '\0';

  return; }
