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
/*
assignment: var_declear EQUAL value { last_add($1, "EQUAL");
                                    $$ = concat($1, $4); }
          | ID EQUAL value { first_add($3, "EQUAL");
                           $$ = first_add($3, "ID"); }

var_declear:
			 | ro_type ID { last_add($1, "ID");
                     first_add($4, "EQAUL");
                     $$ = concat($1, $4); }
			 | ro_type ID COLON type { last_add($1, "ID");
                                first_add($4, "COLON");
                                $$ = concat($1, $4); }
       ;

ro_type : VAR { $$ = make_node("VAR"); }
				| VAL { $$ = make_node("VAL"); }
        ;

type: BYTE { $$ = make_node("BYTE"); }
		| SHORT	{ $$ = make_node("SHORT"); }
		| INT	{ $$ = make_node("INT"); }
		| LONG	{ $$ = make_node("LONG"); }
		| FLOAT { $$ = make_node("FLOAT"); }
		| DOUBLE { $$ = make_node("DOUBLE"); }
    ;

value: SETOF OPEN expr CLOSE { first_add($3, "OPEN");
                              first_add($3, "SETOF");
                              last_add($3, "CLOSE"); }
     | LISTOF OPEN expr CLOSE { first_add($3, "OPEN");
                               first_add($3, "LISTOF");
                               last_add($3, "CLOSE"); }
     | expr { $$ = $1; }
     ;

expr:	expr PLUS term	{ last_add($1, "PLUS");
                        $$ = concat($1, $3); }
    |	expr MINUS term	{ last_add($1, "MINUS");
                        $$ = concat($1, $3); }
    |	term	{ $$ = $1; }
		| STRING	{ $$ = make_node("STRING"); }
    | expr COMMA expr { last_add($1, "COMMA");
                        $$ = concat($1, $3); }
    ;

term:		term MULT factor { last_add($1, "MULT");
                          $$ = concat($1, $3); }
    |		term DIV factor	{ last_add($1, "DIV");
                          $$ = concat($1, $3); }
    |		factor	{ $$ = $1 }
    ;

factor: NUMBER	{ $$ = make_node("NUMBER"); }
    |   OPEN expr CLOSE	{ parse_node *parent = make_node("factor");
                          add_child()}
    |		ID	{ $$ = make_node("ID"); }
    |   MINUS factor { parse_node *parent = make_node("factor");
                      add_string(parent, "MINUS");
                      $$ = add_child(parent, $2); }
    |   PLUS factor { parse_node *parent = make_node("factor");
                      add_string(parent, "PLUS");
                      $$ = add_child(parent, $2);}
    ; */


pre_uni_op : INCR { $$ = make_node("INCR"); }
       | DECR { $$ = make_node("DECR"); }
       | EXCL { $$ = make_node("EXCL"); }
       | PLUS { $$ = make_node("PLUS"); }
       | MINUS { $$ = make_node("MINUS"); }
       ;

ass_op : PLUS_ASSIGNMENT { $$ = make_node("PLUS_ASSIGNMENT"); }
       | MINUS_ASSIGNMENT { $$ = make_node("MINUS_ASSIGNMENT"); }
       | MULT_ASSIGNMENT { $$ = make_node("MULT_ASSIGNMENT"); }
       | DIV_ASSIGNMENT { $$ = make_node("DIV_ASSIGNMENT"); }
       | MOD_ASSIGNMENT { $$ = make_node("MOD_ASSIGNMENT"); }
       ;

com_op: LANGLE { $$ = make_node("LANGLE"); }
      | RANGLE { $$ = make_node("RANGLE"); }
      | LE { $$ = make_node("LE"); }
      | GE { $$ = make_node("GE"); }
      ;

in_op: IN { $$ = make_node("IN"); }
     | NOTIN { $$ = make_node("NOTIN"); }
     ;

is_op: IS { $$ = make_node("IS"); }
     | NOTIS { $$ = make_node("NOTIS"); }
     ;

add_op: PLUS{ $$ = make_node("PLUS"); }
      | MINUS {$$ = make_node("MINUS"); }
      ;

mult_op: MOD { $$ = make_node("MOD"); }
       | MULT { $$ = make_node("MULT"); }
       | DIV { $$ = make_node("DIV"); }
       ;

%%
/* User code */
int yyerror(const char *s)
{
	return printf("%s\n", s);
}
