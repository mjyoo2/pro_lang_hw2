%{
#include <stdlib.h>
#include <string.h>

#include "expr.tab.h"

extern int yyerror(const char*);
%}

STRING \"[^\0]*\"
INTNUMBER [0-9]+
NUMBER [0-9]+[.]?[0-9]*
ID [a-zA-Z][a-zA-Z0-9]*
SPACE [ \t\r]+

%%
"fun" { return FUNCTION; }
"var" { return VAR; }
"val" { return VAL; }
"for" { return FOR; }

"down" { return DOWN; }
"step" { return STEP; }
"when" { return WHEN; }
"listOf" { return LISTOF; }
"SetOf" { return SETOF; }
"return" { return RET; }


"Unit" { return UNIT; }
"Byte" { return BYTE; }
"Short" { return SHORT; }
"Int" { return INT; }
"Long" { return LONG; }
"Float" { return FLOAT; }
"Double" { return DOUBLE; }

/* in operation */
"in" { return IN; }
"!in" { return NOTIN; }

/* is operation */
"is" { return IS; }
"!is" { return NOTIS; }

/* add operation */
"+"	{ return PLUS; }
"-"	{ return MINUS; }

/* multiplicative opeartion */
"*"	{ return MULT; }
"/"	{ return DIV; }
"%%" { return MOD; }

/* comparision operation */
"<" { return LANGLE; }
">" { return RANGLE; }
"<=" { return LE; }
">=" { return GE; }

/* equality operation */
"==" { return EQEQ; }
"===" { return EQEQEQ; }
"!=" { return EXCL_EQ; }
"!==" { return EXCL_EQEQ; }

/* assingnment and operation */
"+=" { return PLUS_ASSIGNMENT; }
"-=" { return MINUS_ASSIGNMENT; }
"*=" { return MULT_ASSIGNMENT; }
"/=" { return DIV_ASSIGNMENT; }
"%%=" { return MOD_ASSIGNMENT; }

/* uniary operation */
"++" { return INCR; }
"--" { return DECR; }
"!" { return EXCL; }


"," { return COMMA; }
".." { return FROMTO; }
"{" { return CURLY_OPEN; }
"}" { return CURLY_CLOSE; }
"?" { return NULLABLE; }
":" { return COLON; }

"("	{ return OPEN; }
")"	{ return CLOSE; }

"="	{ return EQUAL; }
"\n"	{ return EOL; }

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
