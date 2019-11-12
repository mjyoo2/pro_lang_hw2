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
%token <str_var> ID
%token <str_var> STRING

%token <int_var> FUNCTION

%token <int_var> DOWN
%token <int_var> STEP
%token <int_var> WHEN
%token <int_var> RET

%token <int_var> UNIT
%token <int_var> BYTE
%token <int_var> SHORT
%token <int_var> INT
%token <int_var> LONG
%token <int_var> FLOAT
%token <int_var> DOUBLE

%token <int_var> IN
%token <int_var> NOTIN

%token <int_var> IS
%token <int_var> NOTIS

%token <int_var> PULS
%token <int_var> MINUS

%token <int_var> MULT
%token <int_var> DIV
%token <int_var> MOD

%token <int_var> LANGLE
%token <int_var> RANGLE
%token <int_var> LE
%token <int_var> GE

%token <int_var> EQEQ
%token <int_var> EQEQEQ
%token <int_var> EXCL_EQ
%token <int_var> EXCL_EQEQ

%token <int_var> ASSIGNMENT
%token <int_var> PLUS_ASSIGNMENT
%token <int_var> MINUS_ASSIGNMENT
%token <int_var> DIV_ASSIGNMENT
%token <int_var> MULT_ASSIGNMENT
%token <int_var> MOD_ASSIGNMENT

%token <int_var> INCR
%token <int_var> DECR
%token <int_var> EXCL

%token <int_var> LISTOF
%token <int_var> SETOF

%token <int_var> VAR
%token <int_var> VAL

%token <int_var> FROMTO
%token <int_var> DOWNTO

%token <int_var> IF
%token <int_var> ELSEIF
%token <int_var> ELSE

%token <int_var> FOR
%token <int_var> WHILE

%token <int_var> AND
%token <int_var> OR

%token <int_var> STEP
%token <int_var> COMMA

%token <int_var> CURLY_OPEN
%token <int_var> CURLY_CLOSE

%token <int_var> NULLABLE
%token <int_var> COLON
%token <int_var> INCL

%token <int_var> OPEN
%token <int_var> CLOSE

%token <int_var> EOL
%token <int_var> SEMI

// https://kotlinlang.org/docs/reference/basic-syntax.html
// https://github.com/Kotlin/kotlin-spec/blob/master/grammar/src/main/antlr/KotlinLexer.g4
// https://github.com/Kotlin/kotlin-spec/blob/master/grammar/src/main/antlr/KotlinParser.g4

%%
/* Rules */

file: code { print_tree($1);}
    ;

code: def_func { parse_node* parent = make_node("code");
                 $$ = add_child(parent, $1);}
    | code def_func { parse_node* parent = make_node("code");
                      add_child(parent, $1);
                      $$ = add_child(parent, $2);}
    ;

/* component of code */
def_func : FUNCTION arg_ex block { parse_node *parent = make_node("def_func");
                                   add_string(parent, "FUNCTION");
                                   add_child(parent, $2);
                                   $$ = add_child(parent, $3); }
         | FUNCTION arg_ex ASSIGNMENT value { parse_node *parent = make_node("def_func");
                                              add_string(parent, "FUNCTION");
                                              add_child(parent, $2);
                                              add_string(parent, "ASSIGNMENT")
                                              $$ = add_child(parent, $4); }
         ;

arg_ex : OPEN arg_state CLOSE { parse_node *parent = make_node("arg_ex");
                                add_string(parent, "OPEN");
                                add_child(parent, $2);
                                $$ = add_string(parent, "CLOSE"); }
       | OPEN CLOSE { parse_node *parent = make_node("arg_ex");
                      add_string(parent, "OPEN");
                      $$ = add_string(parent, "CLOSE"); }
       ;

arg_state : var_ex { parent_node* parent = make_node("arg_ex");
                  $$ = add_child(parent, $1); }
       | arg_ex COMMA var_ex { parent_node* parent = make_node("arg_ex");
                               add_child(parent, $1);
                               add_string(parent, "COMMA");
                               $$ = add_child(parent, $1); }
       ;

/* block */

block : CURLY_OPEN states CURLY_CLOSE { parse_node *parent = make_node("block");
                                        add_string(parent, "CURLY_OPEN");
                                        add_child(parent, $2);
                                        $$ = add_string(parent, "CURLY_CLOSE"); }
      ;

states : state { parse_node *parent = make_node("states");
                 $$ = add_child(parent, $1); }
       | states state { parse_node *parent = make_node("states");
                        add_child(parent, $1);
                        $$ = add_child(parent, $2); }
       ;

state : expression { parse_node *parent = make_node("state");
                     $$ = add_child(parent, $1); }
      | expression EOL { parse_node *parent = make_node("state");
                         add_child(parent, $1);
                         $$ = add_string(parent, "EOL"); }
      | expression SEMI { parse_node *parent = make_node("state");
                          add_child(parent, $1);
                          $$ = add_string(parent, "SEMI"); }
      ;

/* expression */

expression: assign_ex { parse_node *parent = make_node("expression");
                        $$ = add_child(parent, $1); }
          | declear_ex { parse_node *parent = make_node("expression");
                        $$ = add_child(parent, $1); }
          | EOL { parse_node *parent = make_node("expression");
                  $$ = add_string(parent, "EOF"); }
          | if_ex { parse_node *parent = make_node("expression");
                    $$ = add_child(parent, $1); }
          | while_ex { parse_node *parent = make_node("expression");
                       $$ = add_child(parent, $1); }
          | for_ex { parse_node *parent = make_node("expression");
                     $$ = add_child(parent, $1); }
          | function_ex { parse_node *parent = make_node("expression");
                     $$ = add_child(parent, $1); }
          ;

function_ex : ID tuple { parse_node *parent = make_node("function_ex");
                         add_string(parent, "ID");
                         $$ = add_child(parent, $2);}
            ;

for_ex : FOR OPEN in_ex CLOSE block { parse_node* parent = make_node("for_ex");
                                      add_string(parent, "FOR");
                                      add_string(parent, "OPEN");
                                      add_child(parent, $3);
                                      add_string(parnet, "CLOSE");
                                      $$ = add_child(parent, $5); }
        ;

if_ex: if_state { parse_node* parent = make_node("if_ex");
                  $$ = add_child(parent, $1);}
     | if_state else_state { parse_node* parent = make_node("if_ex");
                             add_child(parent, $1);
                             $$ = add_child(parent, $2); }
     | if_state else_if_state { parse_node* parent = make_node("if_ex");
                                add_child(parent, $1);
                                $$ = add_child(parent, $2);}
     | if_state else_if_state else_state { parse_node* parent = make_node("if_ex");
                                           add_child(parent, $1);
                                           add_child(parent, $2);
                                           $$ = add_child(parent, $3);}
     ;

if_state: IF cond_ex block { parse_node* parent = make_node("if_state");
                             add_string(parent, "IF");
                             add_child(parent, $2);
                             $$ = add_child(parent, $3); }
        ;

else_if_state: ELSEIF cond_ex block { parse_node* parent = make_node("else_if_state");
                                      add_string(parent, "ELSEIF");
                                      add_child(parent, $2);
                                      $$ = add_child(parent, $3); }
             | else_if_state ELSEIF cond_ex block { parse_node* parent = make_node("else_if_state");
                                                    add_child(parent, $1);
                                                    add_string(parent, "ELSEIF");
                                                    add_child(parent, $3);
                                                    $$ = add_child(parent, $4);}
             ;

else_state: ELSE block { parse_node* parent = make_node("else_state");
                         add_string(parent, "ELSE");
                         $$ = add_child(parent, $2); }
          ;

while_ex: WHILE cond_ex block { parse_node* parent = make_node("while_ex");
                                add_string(parent, "WHILE");
                                add_child(parent, $2);
                                $$ = add_child(parent, $3);}
        ;

cond_ex : cond_state { parse_node* parent = make_node("cond_ex");
                       $$ = add_child(parent, $1);}
        | cond_ex bool_op cond_state { parse_node* parent = make_node("cond_ex");
                                       add_child(parent, $1);
                                       add_child(parent, $2);
                                       $$ = add_child(parent, $3);}
        ;

cond_state: value com_op value { parse_node* parent = make_node("cond_state");
                                 add_child(parent, $1);
                                 add_child(parent, $2);
                                 $$ = add_child(parent, $3); }
       | value equl_op value { parse_node* parent = make_node("cond_state");
                               add_child(parent, $1);
                               add_child(parent, $2);
                               $$ = add_child(parent, $3); }
       | value is_op type { parse_node* parent = make_node("cond_state");
                            add_child(parent, $1);
                            add_child(parent, $2);
                            $$ = add_child(parent, $3); }
       | OPEN cond_ex CLOSE { parse_node* parent = make_node("cond_state");
                              add_string(parent, "OPEN");
                              add_child(parent, $2);
                              $$ = add_string(parent, "CLOSE"); }
       | value { parse_node* parent = make_node("in_ex");
                 $$ = add_child(parent, $1); }
       ;

in_ex : value in_op range { parse_node* parent = make_node("in_ex");
                            add_child(parent, $1);
                            add_child(parent, $2);
                            $$ = add_child(parent, $3); }
     ;

range: value range_op value { parse_node* parent = make_node("range"); }
     | value range_op value STEP value { parse_node* parent = make_node("range");
                                         add_child(parent, $1);
                                         add_child(parent, $2);
                                         add_child(parent, $3);
                                         add_string(parent, "STEP");
                                         $$ = add_child(parent, $5);}
     | value { parse_node* parent = make_node("range");
               $$ = add_child(parent, $1); }
     ;

declear_ex: var_op var_ex ASSIGNMENT value { parse_node* parent = make_node("declear_ex");
                                             add_child(parent, $1);
                                             add_child(parent, $2);
                                             add_string(parent, ASSIGNMNET);
                                             $$ = add_child(parent, $4); }

           | var_op ID ASSIGNMENT value { parse_node* parent = make_node("declear_ex");
                                          add_child(parent, $1)
                                          add_string(parent, "ID");
                                          add_string(parent, "ASSIGNMNET");
                                          $$ = add_child(parent, $4);}

           | var_op var_ex { parse_node* parent = make_node("declear_ex");
                             add_child(parent, $1);
                             $$ = add_child(parent, $2); }
           ;

assign_ex: ID ass_op value{ parse_node* parent = make_node("assign_ex");
                            add_string(parent, "ID");
                            add_child(parent, $2);
                            $$ = add_child(parent, $3);}
          ;

var_ex : ID COLON type {parse_node* parent = make_node("var_ex");
                        add_string(parent, "ID");
                        add_string(parent, "COLON");
                        $$ = add_child(parent, $3);}
       ;

/* values */

enum_value: enum_type tuple { parse_node* parent = make_node("enum_value");
                              add_child(parent, $1);
                              add_string(parent, "OPEN");
                              add_child(parent, $3);
                              $$ = add_string(parent, "CLOSE"); }
          ;

tuple: tuple COMMA value { parse_node* parent = make_node("tuple");
                           add_child(parent, $1);
                           add_string(parent, "COMMA");
                           $$ = add_child(parent, $3);}
     | OPEN CLOSE { parse_node *parent = make_node("tuple");
                    add_string(parent, "OPEN");
                    $$ = add_string(parent, "CLOSE"); }
     | OPEN tuple CLOSE { parse_node *parent = make_node("tuple");
                          add_string(parent, "OPEN");
                          add_child(parent, $2);
                          $$ = add_string(parent, "CLOSE");}
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
      ;

member: ID INCL ID { parse_node* parent = make_node("member");
                     add_string(parent, "ID");
                     add_string(parent, "INCL");
                     $$ = add_string(parent, "ID"); }
      | ID INCL ID tuple { parse_node* parent = make_node("factor");
                           add_string(parent, "ID");
                           add_string(parent, "INCL");
                           add_string(parent, "ID");
                           $$ = add_child(parent, $4); }

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
