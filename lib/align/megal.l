/* megal.l - MEGA alignment lexer */

%{
#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include <stdlib.h>
#include <string.h>

#include "extern/text.h"

#include "align.h"
#include "align/megay.h"
%}

%option bison-bridge
%option caseless
%option never-interactive
%option noinput nounput noyywrap

%x HDRTAG DEFTAG NAMTAG CMTTAG SEQTAG
%x DEFTA2 DEFTA3 DEFTA4

alp        [[:alpha:]]
blk        [[:blank:]]
cbr        "]"
col        ":"
exc        "!"
die        "#"
dot        "."
eol        "\n"
equ        "="
min        "-"
obr        "["
que        "?"
quo        "\""
sem        ";"
spc        " "
sta        "*"

txt        .{1,80}

tag        mega
tit        Title
fmt        Format
key        (CodonStart|Domain|Gene|Property)
nam        [^ \n]{1,50}
cmt        [^"\n]{1,50}
gap        ({min}|{que})
bas        ({alp}|{gap}|{sta}|{dot}){1,10}

%%

^{eol}         ; /* Empty lines ignored */
<*>{obr}.*{cbr}   ; /* Comments ignored */

^{die}/{tag} { BEGIN HDRTAG; return DIE; }
<HDRTAG>{tag}  { return TAG; }
<HDRTAG>{blk}+/{eol} ; /* Trailing spaces ignored */
<HDRTAG>{eol}  { BEGIN INITIAL; return EOL; }
<HDRTAG>.      { return ERR; }

^{exc}         { BEGIN DEFTAG; return EXC; }
<DEFTAG>{tit}  { return TIT; }
<DEFTAG>{fmt}  { return FMT; }
<DEFTAG>{key}  { return KEY; }
<DEFTAG>{equ}  { BEGIN DEFTA2; return EQU; }
<DEFTAG>{spc}  { BEGIN DEFTA2; }
<DEFTAG>{eol}  { return ERR; }
<DEFTAG>.      { return ERR; }

<DEFTA2>{txt}/{sem}{eol} { return TXT; }
<DEFTA2>{txt}/{eol}{spc} { return TXT; }
<DEFTA2>{txt}/{spc} { return TXT; }
<DEFTA2>{sem}  { return SEM; }
<DEFTA2>{spc}  { return SPC; }
<DEFTA2>{eol}/{spc} /* Line continuation ignored */
<DEFTA2>{eol}  { BEGIN INITIAL; return EOL; }
<DEFTA2>.      { return ERR; }

^{tit}/{col} { BEGIN DEFTA3; return TIT; }
<DEFTA3>{col}  { return COL; }
<DEFTA3>{spc}  { BEGIN DEFTA4; return SPC; }
<DEFTA3>{eol}  { return ERR; }
<DEFTA3>.      { return ERR; }

<DEFTA4>{txt}  { return TXT; }
<DEFTA4>{eol}  { BEGIN INITIAL; return EOL; }

^{die}/{nam}   { BEGIN NAMTAG; return DIE; }
<NAMTAG>{nam}  { yylval->str = xstrdup(yytext, yyleng); return NAM; }
<NAMTAG>{spc}+{quo} { BEGIN CMTTAG; }
<NAMTAG>{spc}+ { BEGIN SEQTAG; return EOL; }
<NAMTAG>{eol}  { BEGIN SEQTAG; return EOL; }

<CMTTAG>{quo}  { BEGIN NAMTAG; }
<CMTTAG>{cmt}  ; /* Comment ignored */
<CMTTAG>{eol}  { return ERR; }

<SEQTAG>{bas}  { yylval->str = xstrdup(yytext, yyleng); return BAS; }
<SEQTAG>{spc}  ; /* Spaces ignored */
<SEQTAG>{eol}  ; /* Newlines ignored */
<SEQTAG>{eol}/{die} { BEGIN INITIAL; return EOL; }
<SEQTAG>{eol}/{exc} { BEGIN INITIAL; return EOL; }
<SEQTAG><<EOF>> { BEGIN INITIAL; return EOL; }
<SEQTAG>.      { return ERR; }

<<EOF>>        { return END; }
{eol}          { return ERR; }
.              { return ERR; }

%%
