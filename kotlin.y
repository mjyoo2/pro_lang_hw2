%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "parser_util.h"

extern int yylex(void);
extern void yyterminate();
extern int yyerror(const char *s);

%}
%union{char *str_var; int int_var; double double_var}

%type <double_var> eval
%type <double_var> expr
%type <double_var> term
%type <double_var> factor

%token <double_var> NUMBER
%token <int_var> EOL
%token <str_var> ID
%token <str_var> STRING

%left FUNCTION
%left VAR VAL
%left FOR IN
%left DOWN STEP
%left WHEN
%left LISTOF SETOF
%left RET IS

%left UNIT BYTE SHORT INT LONG FLOAT DOUBLE

%left	COMMA
%left FROMTO
%left CURLY_OPEN CURLY_CLOSE
%left NULLABLE
%left COLON
%left PULS MINUS
%left OPEN CLOSE
%left MULT DIV
%left EQUAL
%left EOL

%%
/* Rules */
goal:	eval goal	{}
    |	eval		{}
	;


body: CURLY_OPEN state* CURLY_CLOSE {}

var_declear: ro_type ID COLON type EQUAL expr {}
			 | ro_type ID EQUAL expr {}
			 | ro_type ID COLON type {}

ro_type : VAR { $$ = "VAR"; }
				| VAL { $$ = "VAL"; }

type: BYTE { $$ = "BYTE"; }
		| SHORT	{ $$ = "SHORT"; }
		| INT	{ $$ = "INT"; }
		| LONG	{ $$ = "LONG"; }
		| FLOAT { $$ = "FLOAT"; }
		| DOUBLE { $$ = "DOUBLE"; }

expr:	expr PLUS term	{ $$ = strcat(strcat($1, "PLUS"), $3); }
    |	expr MINUS term	{ $$ = strcat(strcat($1, "MINUS"), $3); }
    |	term	{ $$ = $1; }
		| STRING	{ $$ = "STRING"; }
    ;

term:		term MULT factor { $$ = strcat(strcat($1, "MULT"), $3); }
    |		term DIV factor	{ $$ = strcat(strcat($1, "DIV"), $3); }
    |		factor	{ $$ = $1 }
    ;

factor: NUMBER	{ $$ = "NUMBER"; }
    |   OPEN expr CLOSE	{ $$ = strcat(strcat("OPEN", $2), "CLOSE"); }
    |		ID	{ $$ = "ID"; }
    |   MINUS factor { $$ = strcat("MINUS", $2); }
    |   PLUS factor { $$ = strcat("PLUS", $2); }
    ;

%%
/* User code */
int yyerror(const char *s)
{
	return printf("%s\n", s);
}
