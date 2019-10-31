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



declear_expression: var_op var_ex ASSIGNMENT value {}
                  : var_op var_ex

assign_expression: var_ex ass_op value{ parse_node* parent = make_node("assign_expression");
                                        add_child(parent, $1);
                                        add_child(parent, $2);
                                        $$ = add_child(parent, $3);}

var_ex : ID COLON type {parse_node* parent = make_node("var_ex");
                        add_child(parent, $1);
                        add_child(parent, $2);
                        $$ = add_child(parent, $3);}
       | ID { $$ = $1; }

enum_value: enum_type OPEN tuple CLOSE { parse_node* parent = make_node("enum_value");
                                         add_child(parent, $1);
                                         add_child(parent, $2);
                                         add_child(parent, $3);
                                         $$ = add_child(parent, $4); }
          ;

tuple: tuple COMMA value { parse_node* parent = make_node("tuple");
                           add_child(parent, $1);
                           $$ = add_child(parent, $2);}
     | value { $$ = $1; }
     ;

value: mult_ex add_op mult_ex { parse_node* parent = make_node("value");
                                 add_child(parent, $1);
                                 add_child(parent, $2);
                                 $$ = add_child(parent, $3); }
      | mult_ex { $$ = $1; }
      | enum { $$ = $1; }
      ;

mult_ex : factor mult_op factor { parse_node* parent = make_node("mult_ex");
                                  add_child(parent, $1);
                                  add_child(parent, $2);
                                  $$ = add_child(parent, $3); }
        | STRING { $$ = make_node("STRING"); }
        | factor { $$ = $1; }
        ;

factor: ID { $$ = make_node("ID"); }
      | NUMBER { $$ = make_node("NUMBER"); }
      | pre_uni_op factor { parse_node* parent = make_node("factor");
                            add_child(parent, $1);
                            $$ = add_child(parent, $2);}
      | factor post_uni_op { parse_node* parent = make_node("factor");
                            add_child(parent, $1);
                            $$ = add_child(parent, $2);}
      | OPEN value CLOSE { parse_node* parent = make_node("factor");
                           add_child(parent, $1);
                           add_child(parent, $2);
                           $$ = add_child(parent, $3); }
      ;

pre_uni_op : INCR { $$ = make_node("INCR"); }
           | DECR { $$ = make_node("DECR"); }
           | EXCL { $$ = make_node("EXCL"); }
           | PLUS { $$ = make_node("PLUS"); }
           | MINUS { $$ = make_node("MINUS"); }
           ;

post_uni_op : INCR { $$ = make_node("INCR"); }
            | DECR { $$ = make_node("DECR"); }
            ;

ass_op : PLUS_ASSIGNMENT { $$ = make_node("PLUS_ASSIGNMENT"); }
       | MINUS_ASSIGNMENT { $$ = make_node("MINUS_ASSIGNMENT"); }
       | MULT_ASSIGNMENT { $$ = make_node("MULT_ASSIGNMENT"); }
       | DIV_ASSIGNMENT { $$ = make_node("DIV_ASSIGNMENT"); }
       | MOD_ASSIGNMENT { $$ = make_node("MOD_ASSIGNMENT"); }
       | ASSIGNMENT { $$ = make_node("ASSIGNMENT"); }
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

enum_type: LISTOF { $$ = make_node("LISTOF"); }
         | SETOF { $$ = make_node("SETOF"); }
         ;

var_op : VAR { $$ = make_node("VAR"); }
       | VAL { $$ = make_node("VAL"); }
       ;

type: BYTE { $$ = make_node("BYTE"); }
 		| SHORT	{ $$ = make_node("SHORT"); }
 		| INT	{ $$ = make_node("INT"); }
 		| LONG	{ $$ = make_node("LONG"); }
 		| FLOAT { $$ = make_node("FLOAT"); }
 		| DOUBLE { $$ = make_node("DOUBLE"); }
    ;

%%
/* User code */
int yyerror(const char *s)
{
	return printf("%s\n", s);
}
