%{
#include <stdlib.h>
#include <string.h>

#include "expr.tab.h"

extern int yyerror(const char*);
%}

STRING "[^\0]*"
INTNUMBER [0-9]+
NUMBER [0-9]+[.]?[0-9]*
ID [a-zA-Z][a-zA-Z0-9]*
SPACE [ \t\r\n]+

%%
"fun" { return FUNCTION; }
"var" { return VAR; }
"val" { return VAL; }
"for" { return FOR; }
"in" { return IN; }
"down" { return DOWN; }
"step" { return STEP; }
"when" { return WHEN; }
"listOf" { return LISTOF; }
"SetOf" { return SETOF; }

"Unit" { return UNIT; }
"Byte" { return BYTE; }
"Short" { return SHORT; }
"Int" { return INT; }
"Long" { return LONG; }
"Float" { return FLOAT; }
"Double" { return DOUBLE; }

"," { return COMMA; }
".." { return FROMTO; }
"{" { return CURLY_OPEN; }
"}" { return CURLY_CLOSE; }
"?" { return NULLABLE; }
":" { return COLON; }
"+"	{ return PLUS; }
"("	{ return OPEN; }
")"	{ return CLOSE; }
"-"	{ return MINUS; }
"*"	{ return MULT; }
"/"	{ return DIV; }
"="	{ return EQUAL; }
";"	{ return EOL; }

{STRING} { yylval.str_var = yytext;
					return STRING;}

{NUMBER} { yylval.double_var = atof(yytext);
					return NUMBER; }

{SPACE} { /* ignore */ }

{ID}		{ yylval.str_var = yytext;
					return ID;}

.	{  printf("%d\n", yytext[0]);
           yyerror("unexpected input");
}

%%
/* User code */
