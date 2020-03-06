/* stockl.l - STOCKHOLM alignment lexer */

%{
#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include <stdlib.h>
#include <string.h>

#include "extern/text.h"

#include "align.h"
#include "align/stocky.h"
%}

%option bison-bridge
%option never-interactive
%option noinput nounput noyywrap

%x HDRTAG SEQTAG ENDTAG

alp            [[:alpha:]]
blk            [[:blank:]]
dig            [[:digit:]]
dot            "."
eol            "\n"
min            "-"
sla            "/"
spc            " "
sta            "*"
til            "~"
und            "_"

tag            #{spc}STOCKHOLM
nam            [^# \t\n][^ \t\n]{0,49}
gap            ({min}|{dot}|{und}|{til})
bas            ({alp}|{gap}|{sta}){1,10}
end            {sla}{2}

%%

<*>^#=GC.*{eol} /* Column annot. markup ignored */
<*>^#=GF.*{eol} /* File annot. markup ignored */
<*>^#=GR.*{eol} /* Residue annot. markup ignored */
<*>^#=GS.*{eol} /* Sequence annot. markup ignored */
<*>^{eol}       /* Empty lines ignored */

^{tag}         { BEGIN HDRTAG; return TAG; }
<HDRTAG>{spc}  { return SPC; }
<HDRTAG>{dig}+ { return INT; }
<HDRTAG>{dot}  { return DOT; }
<HDRTAG>{eol}  { BEGIN INITIAL; return EOL; }
<HDRTAG>.      { return ERR; }

^{eol}/{nam}   { return EOL; }
^{nam}/{blk}+{bas} { BEGIN SEQTAG; yylval->str = xstrdup(yytext, yyleng);
                     return NAM; }
<SEQTAG>{blk}+ { return SPC; }
<SEQTAG>{bas}  { yylval->str = xstrdup(yytext, yyleng); return BAS; }
<SEQTAG>{eol}  { BEGIN INITIAL; return EOL; }
<SEQTAG>.      { return ERR; }

<*>^{end}      { BEGIN ENDTAG; return END; }
<ENDTAG>{eol}  { BEGIN INITIAL; return EOL; }
<ENDTAG><<EOF>> { BEGIN INITIAL; return EOL; }
<ENDTAG>.      { return ERR; }

{eol}          { return ERR; }
.              { return ERR; }

%%
