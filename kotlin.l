%{
#include <stdlib.h>
#include <string.h>

#include "kotlin.tab.h"

extern int yyerror(const char*);
%}

STRING \".*\"
range [0-9]+\.\.
NUMBER [0-9]+[.]?[0-9]*
ID [a-zA-Z][a-zA-Z0-9|\_]*
SPACE [ \t\r]+
COMMENT (\/[\*].*[\*]]\/|\/{2}[^\n]*)

%%



"package" { return PACKAGE; }
"import" { return IMPORT; }
".*" { return FORALL; }
"->" { return POINT; }
"fun" { return FUNCTION; }

"down" { return DOWN; }
"step" { return STEP; }
"when" { return WHEN; }
"return" { return RET; }

"Any" { return ANY; }
"Unit" { return UNIT; }
"Byte" { return BYTE; }
"Short" { return SHORT; }
"Int" { return INT; }
"Long" { return LONG; }
"Float" { return FLOAT; }
"Double" { return DOUBLE; }
"String" { return STR; }
"Boolean" { return BOOL; }

 /* in operation */
"in" { return IN; }
"!in" { return NOTIN; }

 /* is operation */
"is" { return IS; }
"!is" { return NOTIS; }

{COMMENT} {/* ignore */}

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
"="	{ return ASSIGNMENT; }
"+=" { return PLUS_ASSIGNMENT; }
"-=" { return MINUS_ASSIGNMENT; }
"*=" { return MULT_ASSIGNMENT; }
"/=" { return DIV_ASSIGNMENT; }
"%=" { return MOD_ASSIGNMENT; }

 /* uniary operation */
"++" { return INCR; }
"--" { return DECR; }
"!" { return EXCL; }

 /* enum type */
"listOf" { return LISTOF; }
"SetOf" { return SETOF; }

 /* variable operation */
"var" { return VAR; }
"val" { return VAL; }

 /* range operation */
".." { return FROMTO; }
"downTo" { return DOWNTO; }

 /* conditional token */
"if" { return IF; }
"else if" { return ELSEIF; }
"else" { return ELSE; }

 /* loop token */
"for" { return FOR; }
"while" { return WHILE; }

 /* bool operation */
"&&" { return AND; }
"||" { return OR; }

"," { return COMMA; }
"{" { return CURLY_OPEN; }
"}" { return CURLY_CLOSE; }
"?" { return NULLABLE; }
":" { return COLON; }
"." { return INCL; }

"("	{ return OPEN; }
")"	{ return CLOSE; }

"null" { return NUL; }
"\n"	{ return EOL; }
";" { return SEMI; }

 /* factor */
{range} { return RANGE; }
{STRING} { yylval.str_var = yytext;
					return STRING;}

{ID} { yylval.str_var = yytext;
			return ID;}

{NUMBER} { yylval.double_var = atof(yytext);
					return NUMBER; }

{SPACE} { /* ignore */ }

.	{  printf("%d\n", yytext[0]);
           yyerror("unexpected input");
}

%%
/* User code */
