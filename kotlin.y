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

for_ex : FOR OPEN in_ex CLOSE block {}
        ;

if_ex:

if_state: IF cond_ex block {}
        ;

else_if_state:

else_state:

while_ex:



block : CURLY_OPEN states CURLY_CLOSE {}
      ;
      
states : state {}
       | states state {}
       ;

state : expression {}
      | expression EOL {}
      | expression SEMI {}
      ;

expression: assign_ex {}
          | declear_ex {}
          | EOL {}
          |

in_ex : value in_op range {}
      ;

cond_ex : cond_state {}
        | cond_ex bool_op cond_state {}
        ;

cond_state: value com_op value {}
       | value equl_op value {}
       | value is_op type {}
       | OPEN cond_ex CLOSE {}
       | value {}
       ;

range: value range_op value {}
     | value range_op value STEP value {}
     | value {}
     ;

arg_ex : var_ex { parent_node* parent = make_node("arg_ex");
                  $$ = add_child(parent, $1); }
       | arg_ex COMMA var_ex { parent_node* parent = make_node("arg_ex");
                               add_child(parent, $1);
                               add_string(parent, "COMMA");
                               $$ = add_child(parent, $1); }
       ;

declear_ex: var_op var_ex ASSIGNMENT value { parse_node* parent = make_node("declear_ex");
                                    add_child(parent, $1);
                                    add_child(parent, $2);
                                    $$ = add_child(parent, $3);}
           | var_op ID ASSIGNMENT value { parse_node* parent = make_node("declear_ex");
                                          add_child(parent, $1);
                                          add_child(parent, $2);
                                          $$ = add_child(parent, $3);}
           | var_op var_ex { parse_node* parent = make_node("declear_ex");
                             add_child(parent, $1);
                             $$ = add_child(parent, $2); }
           ;

assign_ex: ID ass_op value{ parse_node* parent = make_node("assign_ex");
                                    add_child(parent, $1);
                                    add_child(parent, $2);
                                    $$ = add_child(parent, $3);}
          ;

var_ex : ID COLON type {parse_node* parent = make_node("var_ex");
                        add_string(parent, "ID");
                        add_string(parent, "COLON");
                        $$ = add_child(parent, $3);}
       ;

enum_value: enum_type OPEN tuple CLOSE { parse_node* parent = make_node("enum_value");
                                         add_child(parent, $1);
                                         add_string(parent, "OPEN");
                                         add_child(parent, $3);
                                         $$ = add_string(parent, "CLOSE"); }
          ;

tuple: tuple COMMA value { parse_node* parent = make_node("tuple");
                           add_string(parent, "COMMA");
                           $$ = add_child(parent, $2);}
     | value { $$ = $1; }
     ;

value: mult_ex add_op mult_ex { parse_node* parent = make_node("value");
                                 add_child(parent, $1);
                                 add_child(parent, $2);
                                 $$ = add_child(parent, $3); }
      | mult_ex { $$ = $1; }
      | enum_value { $$ = $1; }
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
                           add_string(parent, "OPEN");
                           add_child(parent, $2);
                           $$ = add_string(parent, "CLOSE"); }
      | ID INCL ID { parse_node* parent = make_node("factor");
                     add_string(parent, "ID");
                     add_child(parent, "INCL");
                     $$ = add_string(parent, "ID"); }
      ;

/* operations */

range_op : FROMTO { $$ = make_node("FROMTO"); }
         | DOWNTO { $$ = make_node("DOWNTO"); }
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

equl_op: EQEQ { $$ = make_node("EQEQ"); }
       | EQEQEQ { $$ = make_node("EQEQEQ"); }
       | EXCL_EQ { $$ = make_node("EXCL_EQ"); }
       | EXCL_EQEQ { $$ = make_node("EXCL_EQEQ"); }

bool_op : AND { $$ = make_node("AND"); }
          OR { $$ = make_node("OR"); }

var_op : VAR { $$ = make_node("VAR"); }
       | VAL { $$ = make_node("VAL"); }
       ;

/* types */

type: BYTE { $$ = make_node("BYTE"); }
 		| SHORT	{ $$ = make_node("SHORT"); }
 		| INT	{ $$ = make_node("INT"); }
 		| LONG	{ $$ = make_node("LONG"); }
 		| FLOAT { $$ = make_node("FLOAT"); }
 		| DOUBLE { $$ = make_node("DOUBLE"); }
    ;

enum_type: LISTOF { $$ = make_node("LISTOF"); }
         | SETOF { $$ = make_node("SETOF"); }
         ;

%%
/* User code */
int yyerror(const char *s)
{
	return printf("%s\n", s);
}
