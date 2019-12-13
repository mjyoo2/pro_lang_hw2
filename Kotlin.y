%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylex(void);
extern void yyterminate();
extern int yyerror(const char *s);

typedef struct parse_tree{
		char str[200];
		char data[2000];
		double num;
		struct parse_tree *child;
	    struct parse_tree *next;
	    struct parse_tree *prev;
		struct parse_tree *parent;
}parse_node;

parse_node* make_dummy();
parse_node* make_node(char* new_data);
parse_node* add_string(parse_node* parent, char* child);
parse_node* add_string_ID(parse_node* parent, char* child, char *ID);
parse_node* add_child(parse_node* parent, parse_node* child);
void last_add(parse_node *temp, parse_node *new_node);
void print_tree(parse_node *parent, int layers);

%}

%union{struct parse_tree *node; char *str_var; int int_var; double double_var;}

%type <int_var> file
%type <node> codes
%type <node> code

/* component of code */
%type <node> def_func
%type <node> arg_block
%type <node> arg_ex
%type <node> arg_state

/* block */
%type <node> block
%type <node> states
%type <node> state

/* expression */
%type <node> expression
%type <node> return_ex
%type <node> package_ex
%type <node> import_ex
%type <node> function_ex
%type <node> for_ex
/* %type <node> if_ex */
%type <node> if_state
%type <node> else_if_states
%type <node> else_if_state
%type <node> else_state
%type <node> while_ex
%type <node> when_ex
%type <node> when_block
%type <node> when_states
%type <node> when_state
%type <node> when_cond_ex
%type <node> cond_ex
%type <node> cond_state
%type <node> in_ex
%type <node> declear_ex
%type <node> assign_ex
%type <node> var_ex

/* values */
%type <node> iterable_value
%type <node> range
%type <node> enum_value
%type <node> tuple
%type <node> value
%type <node> mult_ex
%type <node> factor
%type <node> object_ex
%type <node> members
%type <node> member
%type <node> new_line

/* operations */
%type <node> range_op
%type <node> pre_uni_op
%type <node> post_uni_op
%type <node> ass_op
%type <node> com_op
%type <node> in_op
%type <node> is_op
%type <node> add_op
%type <node> mult_op
%type <node> equl_op
%type <node> bool_op
%type <node> var_op

/* enum_type */
%type <node> type_ex
%type <node> type
%type <node> enum_type

%token <int_var> COMMENT
%token <int_var> PACKAGE
%token <int_var> IMPORT
%token <int_var> FORALL
%token <int_var> POINT
%token <int_var> FUNCTION

%token <int_var> DOWN
%token <int_var> STEP
%token <int_var> WHEN
%token <int_var> RET

%token <int_var> ANY
%token <int_var> UNIT
%token <int_var> BYTE
%token <int_var> SHORT
%token <int_var> INT
%token <int_var> LONG
%token <int_var> FLOAT
%token <int_var> DOUBLE
%token <int_var> STR
%token <int_var> BOOL

%token <int_var> IN
%token <int_var> NOTIN

%token <int_var> IS
%token <int_var> NOTIS

%token <int_var> PLUS
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


%token <int_var> COMMA

%token <int_var> CURLY_OPEN
%token <int_var> CURLY_CLOSE

%token <int_var> NULLABLE
%token <int_var> COLON
%token <int_var> INCL

%token <int_var> OPEN
%token <int_var> CLOSE

%token <int_var> NUL
%token <int_var> EOL
%token <int_var> SEMI
%token <int_var> RANGE
%token <double_var> NUMBER
%token <str_var> ID

%token <str_var> STRING

// https://kotlinlang.org/docs/reference/basic-syntax.html
// https://github.com/Kotlin/kotlin-spec/blob/master/grammar/src/main/antlr/KotlinLexer.g4
// https://github.com/Kotlin/kotlin-spec/blob/master/grammar/src/main/antlr/KotlinParser.g4

%%
/* Rules */

file: codes { print_tree($1, 0);
             $$ = 0;}
    ;

codes: code codes { parse_node *parent = make_node("codes");
					add_child(parent, $1);
					$$ = add_child(parent, $2); }
	 | code { parse_node *parent = make_node("codes");
			  $$ = add_child(parent, $1);}
 	 ;

code: def_func { parse_node* parent = make_node("code");
                 $$ = add_child(parent, $1); }
	| expression { parse_node *parent = make_node("code");
					$$ = add_child(parent, $1); }
   	| states { parse_node *parent = make_node("code");
			   $$ = add_child(parent, $1); }
	| new_line {$$ = make_node("new_line"); }
    ;

/* component of code */

def_func : FUNCTION ID arg_block block { parse_node *parent = make_node("def_func");
		                                  add_string(parent, "FUNCTION");
					   					  add_string_ID(parent, $2,"ID");
		                                  add_child(parent, $3);
		                                  $$ = add_child(parent, $4); }
         | FUNCTION ID arg_block ASSIGNMENT state { parse_node *parent = make_node("def_func");
                                              add_string(parent, "FUNCTION");
											add_string_ID(parent, $2, "ID" );
                                              add_child(parent, $3);
                                              add_string(parent, "ASSIGNMENT");
                                              $$ = add_child(parent, $5); }
         ;
arg_block : arg_ex { parse_node *parent = make_node("arg_block");
					 $$ = add_child(parent, $1); }
		  | arg_ex COLON type_ex { parse_node *parent = make_node("arg_block");
								   add_child(parent, $1);
								   add_string(parent, "COLON");
								   $$ = add_child(parent, $3);}
		  ;

arg_ex : OPEN arg_state CLOSE { parse_node *parent = make_node("arg_ex");
                                add_string(parent, "OPEN");
                                add_child(parent, $2);
                                $$ = add_string(parent, "CLOSE"); }
       | OPEN CLOSE { parse_node *parent = make_node("arg_ex");
                      add_string(parent, "OPEN");
                      $$ = add_string(parent, "CLOSE"); }
       ;

arg_state : var_ex { parse_node* parent = make_node("arg_ex");
                  $$ = add_child(parent, $1); }
       | var_ex COMMA arg_state { parse_node* parent = make_node("arg_ex");
                               add_child(parent, $1);
                               add_string(parent, "COMMA");
                               $$ = add_child(parent, $3); }
       ;

/* block */

block : CURLY_OPEN states CURLY_CLOSE { parse_node *parent = make_node("block");
                                        add_string(parent, "CURLY_OPEN");
                                        add_child(parent, $2);
                                        $$ = add_string(parent, "CURLY_CLOSE"); }
      | CURLY_OPEN expression  CURLY_CLOSE { parse_node *parent = make_node("block");
											add_string(parent, "CURLY_OPEN");
											add_child(parent, $2);
											$$ = add_string(parent, "CURLY_OPEN"); }
	  ;

states : state new_line states { parse_node *parent = make_node("states");
                        		add_child(parent, $1);
                        		$$ = add_child(parent, $3); }
	   | states state { parse_node *parent = make_node("states");
								 add_child(parent, $1);
								 $$ = add_child(parent, $2); }
	   | state { parse_node *parent = make_node("states");
				 $$ = add_child(parent, $1); }
	   | state new_line { parse_node *parent = make_node("states");
						  $$ = add_child(parent, $1); }
       ;

state : expression  { parse_node *parent = make_node("state");
                              $$ = add_child(parent, $1);}
	  | new_line expression { parse_node *parent = make_node("state");
							  add_child(parent, $1);
							  $$ = add_child(parent, $2);}
	  ;

/* expression */

expression: assign_ex { parse_node *parent = make_node("expression");
                        $$ = add_child(parent, $1); }
          | declear_ex { parse_node *parent = make_node("expression");
                       $$ = add_child(parent, $1);}
		  | if_state { parse_node *parent = make_node("expression");
                    $$ = add_child(parent, $1); }
			| else_if_state { parse_node *parent = make_node("expression");
                    $$ = add_child(parent, $1); }
			| else_state { parse_node *parent = make_node("expression");
                    $$ = add_child(parent, $1); }
		  | new_line {$$ = make_node("new_line"); }
          | while_ex { parse_node *parent = make_node("expression");
                       $$ = add_child(parent, $1); }
          | for_ex { parse_node *parent = make_node("expression");
                     $$ = add_child(parent, $1); }
          | function_ex { parse_node *parent = make_node("expression");
                     $$ = add_child(parent, $1); }
		  | package_ex { parse_node *parent = make_node("expression");
                     $$ = add_child(parent, $1); }
  		  | import_ex { parse_node *parent = make_node("expression");
	                   $$ = add_child(parent, $1); }
		  | when_ex { parse_node *parent = make_node("expression");
	                    $$ = add_child(parent, $1); }
		  | return_ex { parse_node *parent = make_node("expression");
						$$ = add_child(parent, $1); }
		  | value { parse_node *parent = make_node("expression");
					$$ = add_child(parent, $1); }
		  | def_func { parse_node *parent = make_node("def_func");
					   $$ = add_child(parent, $1);}
          ;

return_ex: RET value { parse_node *parent = make_node("return_ex");
					   add_string(parent, "RET");
					   $$ = add_child(parent, $2); }
		 | RET {parse_node *parent = make_node("return_ex");
				$$ = add_string(parent, "RET");}
		 ;

package_ex : PACKAGE object_ex { parse_node *parent = make_node("package_ex");
								 add_string(parent, "PACKAGE");
								 $$ = add_child(parent, $2); }
					 ;

import_ex : IMPORT object_ex { parse_node *parent = make_node("import_ex");
																 add_string(parent, "IMPORT");
																 $$ = add_child(parent, $2); }
			| IMPORT object_ex FORALL { parse_node *parent = make_node("import_ex");
										add_string(parent, "IMPORT");
										add_child(parent, $2);
									 	 $$ = add_string(parent, "FORALL"); }
			;

function_ex : ID tuple { parse_node *parent = make_node("function_ex");
                         add_string_ID(parent, $1, "ID");
                         $$ = add_child(parent, $2);}
            ;

for_ex : FOR OPEN in_ex CLOSE block { parse_node* parent = make_node("for_ex");
                                      add_string(parent, "FOR");
                                      add_string(parent, "OPEN");
                                      add_child(parent, $3);
                                      add_string(parent, "CLOSE");
                                      $$ = add_child(parent, $5); }
        ;
when_ex: WHEN OPEN object_ex CLOSE when_block { parse_node *parent = make_node("when_ex");
											 add_string(parent, "WHEN");
											   add_string(parent, "OPEN");
											   add_child(parent, $3);
											   add_string(parent, "CLOSE");
											   $$ = add_child(parent, $5);}
			 ;

when_block : CURLY_OPEN when_states CURLY_CLOSE { parse_node *parent = make_node("when_block");
                                       add_string(parent, "CURLY_OPEN");
                                       add_child(parent, $2);
                                       $$ = add_string(parent, "CURLY_CLOSE"); }
     | CURLY_OPEN when_cond_ex  CURLY_CLOSE { parse_node *parent = make_node("when_block");
											add_string(parent, "CURLY_OPEN");
											add_child(parent, $2);
											$$ = add_string(parent, "CURLY_OPEN"); }
	  ;

when_states : when_state new_line when_states { parse_node *parent = make_node("when_states");
                       		add_child(parent, $1);
                       		$$ = add_child(parent, $3); }
	   | when_state { parse_node *parent = make_node("when_states");
				 $$ = add_child(parent, $1); }
	   | when_state new_line { parse_node *parent = make_node("when_states");
						  $$ = add_child(parent, $1); }
      ;

when_state : when_cond_ex  { parse_node *parent = make_node("when_state");
                             $$ = add_child(parent, $1);}
	  | new_line when_cond_ex { parse_node *parent = make_node("when_state");
							  add_child(parent, $1);
							  $$ = add_child(parent, $2);}
	  ;

when_cond_ex: value POINT expression { parse_node *parent = make_node("when_cond_ex");
																add_child(parent, $1);
																add_string(parent, "POINT");
																add_child(parent, $3); }
					| IS type POINT expression { parse_node *parent = make_node("when_cond_ex");
																	add_string(parent, "IS");
																  add_child(parent, $2);
																  add_string(parent, "POINT");
																	$$ = add_child(parent, $4); }
					| ELSE POINT expression { parse_node *parent = make_node("when_cond_ex");
															 add_string(parent, "ELSE");
														 	 add_string(parent, "POINT");
														 	 $$ = add_child(parent, $3); }
					;

if_state: IF cond_ex block { parse_node* parent = make_node("if_state");
                             add_string(parent, "IF");
                             add_child(parent, $2);
                             $$ = add_child(parent, $3); }
		| IF cond_ex expression { parse_node* parent = make_node("if_state");
                             add_string(parent, "IF");
                             add_child(parent, $2);
                             $$ = add_child(parent, $3); }
        ;

else_if_state: ELSEIF cond_ex block { parse_node* parent = make_node("else_if_state");
                                      add_string(parent, "ELSEIF");
                                      add_child(parent, $2);
                                      $$ = add_child(parent, $3); }
						 | ELSEIF cond_ex expression { parse_node* parent = make_node("else_if_state");
                                      add_string(parent, "ELSEIF");
						                          add_child(parent, $2);
						                          $$ = add_child(parent, $3); }
             ;

else_state: ELSE block { parse_node* parent = make_node("else_state");
                         add_string(parent, "ELSE");
                         $$ = add_child(parent, $2); }
					| ELSE expression { parse_node* parent = make_node("else_state");
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
        | cond_state bool_op cond_ex { parse_node* parent = make_node("cond_ex");
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
       | value is_op type_ex { parse_node* parent = make_node("cond_state");
                            add_child(parent, $1);
                            add_child(parent, $2);
                            $$ = add_child(parent, $3); }
       | OPEN cond_ex CLOSE { parse_node* parent = make_node("cond_state");
                              add_string(parent, "OPEN");
                              add_child(parent, $2);
                              $$ = add_string(parent, "CLOSE"); }
       | value { parse_node* parent = make_node("cond_state");
                 $$ = add_child(parent, $1); }
	   | in_ex { parse_node* parent = make_node("cond_state");
				 $$ = add_child(parent, $1); }
      ;

in_ex : value in_op iterable_value { parse_node* parent = make_node("in_ex");
                            				 add_child(parent, $1);
                            				 add_child(parent, $2);
                            				 $$ = add_child(parent, $3); }
     ;

declear_ex: var_op var_ex ASSIGNMENT value { parse_node* parent = make_node("declear_ex");
                                             add_child(parent, $1);
                                             add_child(parent, $2);
                                             add_string(parent, "ASSIGNMNET");
                                             $$ = add_child(parent, $4); }

           | var_op ID ASSIGNMENT value { parse_node* parent = make_node("declear_ex");
                                          add_child(parent, $1);
                                          add_string_ID(parent, $2, "ID");
                                          add_string(parent, "ASSIGNMNET");
                                          $$ = add_child(parent, $4);}

           | var_op var_ex { parse_node* parent = make_node("declear_ex");
                             add_child(parent, $1);
                             $$ = add_child(parent, $2); }
           ;

assign_ex: ID ass_op value{ parse_node* parent = make_node("assign_ex");
                            add_string_ID(parent, $1, "ID");
                            add_child(parent, $2);
                            $$ = add_child(parent, $3);}
          ;

var_ex : ID COLON type_ex {parse_node* parent = make_node("var_ex");
                        add_string_ID(parent, $1, "ID");
                        add_string(parent, "COLON");
                        $$ = add_child(parent, $3);}
       ;

/* values */

iterable_value: STRING { parse_node *parent = make_node("iterable_value");
 						 $$ = add_string_ID(parent,$1, "STRING"); }
							| range { parse_node *parent = make_node("iterable_value");
												$$ = add_child(parent, $1); }
							| enum_value { parse_node *parent = make_node("iterable_value");
														 $$ = add_child(parent, $1); }
							| object_ex { parse_node *parent = make_node("iterable_value");
												 $$ = add_child(parent, $1); }
							;

range: RANGE value { parse_node* parent = make_node("range");
				add_string(parent, "RANGE");
				$$ = add_child(parent, $2);}
     | RANGE value STEP value { parse_node* parent = make_node("range");
                                         add_string(parent, "RANGE");
										add_child(parent,$2);
                                         add_string(parent, "STEP");
                                         $$ = add_child(parent, $4);}
     ;

enum_value: enum_type tuple { parse_node* parent = make_node("enum_value");
                              add_child(parent, $1);
							  $$ = add_child(parent, $2); }
          ;

tuple: value COMMA tuple { parse_node *parent = make_node("tuple");
						   add_child(parent, $1);
						   add_string(parent, "COMMA");
                           $$ = add_child(parent, $3); }
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
	  | NUL {$$ = make_node("NUL"); }
	  | ANY OPEN CLOSE { parse_node *parent = make_node("value");
						 add_string(parent, "ANY");
						 add_string(parent, "OPEN");
						 $$ = add_string(parent, "CLOSE"); }
	  ;

mult_ex : factor mult_op factor { parse_node* parent = make_node("mult_ex");
                                  add_child(parent, $1);
                                  add_child(parent, $2);
                                  $$ = add_child(parent, $3); }
        | factor INCR { parse_node* parent = make_node("mult_ex");
                             add_child(parent, $1);
							 $$ = add_string(parent, "INCR"); }
			 | factor DECR { parse_node* parent = make_node("mult_ex");
                            add_child(parent, $1);
							 $$ = add_string(parent, "DECR"); }
		| STRING { parse_node *new_node = make_node("STRING");
					strcpy(new_node->data, $1);
				   $$ = new_node;  }
        | factor { $$ = $1; }
        ;

factor: NUMBER { $$ = make_number($1); }
 	  	| object_ex { parse_node *parent = make_node("factor");
		    						$$ = add_child(parent, $1); }
			| function_ex { parse_node *parent = make_node("factor");
											$$ = add_child(parent, $1); }
      | pre_uni_op factor { parse_node* parent = make_node("factor");
                            add_child(parent, $1);
                            $$ = add_child(parent, $2);}
      | OPEN value CLOSE { parse_node* parent = make_node("factor");
                           add_string(parent, "OPEN");
                           add_child(parent, $2);
                           $$ = add_string(parent, "CLOSE"); }
      ;

object_ex: members function_ex { parse_node *parent = make_node("object_ex");
							 add_child(parent, $1);
 							  $$ =  add_child(parent, $2); }
		 | member function_ex { parse_node *parent = make_node("object_ex");
								add_child(parent, $1);
								$$ = add_child(parent, $2); }
		 | members ID { parse_node *parent = make_node("object_ex");
	 					add_child(parent, $1);
						$$ = add_string_ID(parent, $2, "ID"); }
		 | member ID { parse_node *parent = make_node("object_ex");
					   add_child(parent, $1);
					   $$ = add_string_ID(parent, $2, "ID");}
		 | ID { parse_node *parent = make_node("object_ex");
				$$ = add_string_ID(parent, $1, "ID"); }
		 ;

members : member members { parse_node *parent = make_node("members");
						   add_child(parent, $1);
						   $$ = add_child(parent, $2);}
		| member { parse_node *parent = make_node("members");
                     $$ = add_child(parent, $1);}

		;

member: ID INCL { parse_node *parent = make_node("member");
				  add_string_ID(parent, $1, "ID");
                  $$ = add_string(parent, "INCL"); }
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
	   ;

bool_op : AND { $$ = make_node("AND"); }
        | OR { $$ = make_node("OR"); }
		;

var_op : VAR { $$ = make_node("VAR"); }
       | VAL { $$ = make_node("VAL"); }
       ;

new_line : EOL { $$ = make_node("new_line"); }
		 | EOL new_line {$$ = make_node("new_line"); }
		 ;

/* types */

type_ex: type { $$ = $1; }
	   | type NULLABLE { parse_node *parent = make_node("type_ex");
		 										 add_child(parent, $1);
											 	 $$ = add_string(parent, "NULLABLE");}

type: BYTE { $$ = make_node("BYTE"); }
 	| SHORT	{ $$ = make_node("SHORT"); }
	| INT	{ $$ = make_node("INT"); }
 	| LONG	{ $$ = make_node("LONG"); }
 	| FLOAT { $$ = make_node("FLOAT"); }
 	| DOUBLE { $$ = make_node("DOUBLE"); }
 	| STR { $$ = make_node("STR"); }
 	| BOOL { $$ = make_node("BOOL"); }
    | UNIT { $$ = make_node("UNIT"); }
	| ANY { $$ = make_node("ANY"); }
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


parse_node* make_dummy(){
	  parse_node *new_node = (parse_node *) malloc(sizeof(parse_node));
	strcpy(new_node->str, "DUMMY");
	new_node->parent = NULL;
    new_node->next = NULL;
    new_node->prev = NULL;
    new_node->child = NULL;
	  return new_node;
}

parse_node* make_node(char* new_data){
	  parse_node *new_node = (parse_node *) malloc(sizeof(parse_node));
	  strcpy(new_node->str, new_data);
		new_node->data = {0, };
		new_node->num = 0;
	  new_node->parent = NULL;
    new_node->next = NULL;
    new_node->prev = NULL;
    new_node->child = make_dummy();
	  return new_node;
}

parse_node* make_number(int num){
	  parse_node *new_node = (parse_node *) malloc(sizeof(parse_node));
	  strcpy(new_node->str, "NUMBER");
		new_node->data = {0, };
		new_node->num = num;
	  new_node->parent = NULL;
    new_node->next = NULL;
    new_node->prev = NULL;
    new_node->child = make_dummy();
	  return new_node;
}

parse_node* add_string(parse_node* parent, char* child){
    parse_node *child_node = make_node(child);
    return add_child(parent, child_node);
}

parse_node* add_string_ID(parse_node* parent, char* child, char *ID){
    parse_node *child_node = make_node(ID);
	strcpy(child_node->data, child);

	for (int i=0; i<1000; i++){
		if ((47<child_node->data[i]&&child_node->data[i]<58)||(64<child_node->data[i]&&child_node->data[i]<91)||(96<child_node->data[i]&&child_node->data[i]<123)||child_node->data[i]=='\"'){
			continue;
		}
		else{
			child_node->data[i] = 0;
			break;
		}
	}
    return add_child(parent, child_node);
}

parse_node* add_child(parse_node* parent, parse_node* child){
    last_add(parent->child, child);
    child->parent = parent;
    return parent;
}

void last_add(parse_node *temp, parse_node *new_node){
    parse_node *last_node = temp;
    while (last_node->next != NULL){
      last_node = last_node->next;
    }
    last_node -> next = new_node;
    new_node -> prev = last_node;
    return;
}

void print_tree(parse_node *parent, int layers){
	for (int i=0; i<layers; i++){
		printf(" ");
	}
	if (parent->str[0] == 'I' && parent->str[1] =='D'){
		printf("-%s <%s>\n",parent->str, parent->data);
	}
	else if (parent->str[0] == 'S' && parent->str[4]=='N'){
		printf("-%s <%s>\n", parent->str, parent->data);
	}
	else if (strcmp(parent->str, "NUMBER") == 0){
		printf("-%s <%lf>\n", parent->str, parent->num);
	}
	else{
			printf("-%s\n",parent->str);
	}
	parse_node *next_node = parent->child->next;

	while(next_node != NULL){
		print_tree(next_node, layers+1);
		next_node = next_node->next;
	}
	return;
}
