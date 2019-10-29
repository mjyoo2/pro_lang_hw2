%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylex(void);
extern void yyterminate();
extern int yyerror(const char *s);

union variable{
	char b_var;
	short int s_var;
	int i_var;
	long int l_var;
	float f_var;
	double f_var;
};

/*
type 1 char
type 2 short
type 3 int
type 4 long
type 5 float
type 6 double
*/

typedef struct typevar{
	union variable var;
	int type;
	int read_only;
}typevar;

void Save(char* name, double data, int type);
double Load(char *name);

typevar var_save[1000] = { 0 };
char *var_name[1000] = { 0 };
int var_num = 0;

%}
%union{char *str_var; int int_var; double double_var}

%type <double_var> eval
%type <double_var> expr
%type <double_var> term
%type <double_var> factor

%token <double_var> NUMBER
%token <int_var> EOL
%token <str_var> ID

%left  PLUS MINUS
%left  MULT DIV
%left  OPEN CLOSE
%left  EQUAL

%%
/* Rules */
goal:	eval goal	{}
    |	eval		{}
	;
eval:	expr EOL	{ printf("%lf\n", $1); 
    	}
    |   ID EQUAL expr EOL { printf("%lf\n",$3);
			    Save ($1, $3);
	}
	;
expr:	expr PLUS term	{ $$ = $1 + $3;
    	}
    |	expr MINUS term	{ $$ = $1 - $3;
	} 
    |	term		{ $$ = $1;
	} 
    ;
term:	term MULT factor { $$ = $1 * $3;
    	} 
    |	term DIV factor	{ $$ = $1 / $3;
	} 
    |	factor		{ $$ = $1;
	}
    ;
factor: NUMBER	{ $$ = $1;
        }
    |   OPEN expr CLOSE	{ $$ = $2;
	}
    |	ID	{ $$ = Load($1);
	}
    |   MINUS factor { $$ = -$2;
	}
    |   PLUS factor { $$ = $2;
	}
    ;

%%
/* User code */
int yyerror(const char *s)
{
	return printf("%s\n", s);
}


void Save(char *name, double data, int type, int read_only, int ){

	int data_index = -1;
	int new_save = 0;
	char *temp = (char *)malloc(100);
	
	//load string to temperal variable
	for (int i=0; i<100; i++){
		if (name[i] == ' ' || name[i] == '=' || name[i] == 0){
			temp[i] = 0;
			break;
		}
		temp[i] = name[i];
	}

	//find the variable already saved
	for (int i=0; i<var_num; i++){
		if (strcmp(temp, var_name[i]) == 0){
			data_index = i;
			break;
		}
	}

	//if the variable save first, increased the counting of variable
	if (data_index == -1){
		new_save = 1;
		data_index = var_num;
		var_num++;
	}
	
	//if the variable save first, save variable name
	if (new_save == 1){
		var_name[data_index] = temp;
	}
	else {
		free(temp);
	}

	//save the value
	var_save[data_index].var = data;
	return;
}

union variable LoadByType(typevar temp){
	switch(temp.type){
		case 1:
			return temp.var.c_var;
		case 2:
			return temp.var.s_var;
		case 3:
			return temp.var.i_var;
		case 4:
			return temp.var.l_var;
		case 5:
			return temp.var.f_var;
		case 6:
			return temp.var.d_var;
		default:
			printf("type save error\n");
			return;
	}
}


union variable Load(char *name){
	int data_index = -1;
	char *temp = (char *)malloc(100);

	//save the variable name to temperal space
	for (int i=0; i<100; i++){
		if (name[i] < 48 || (name[i] > 57 && name[i] <65) || (name[i] > 90 && name[i] < 97) || name[i] > 122){
			temp[i] = 0;
			break;
		}
		temp[i] = name[i];
	}

	//find the variable already saved
	for (int i=0; i<var_num; i++){
		if (strcmp(temp, var_name[i]) == 0){
			data_index = i;
			break;
		}
	}

	//if there are no saved variable, write error
	if (data_index == -1){
		printf("%s Undecleared variable\n", temp);
		return -1;
	}

	free(temp);
	return LoadByType(var_save[data_index]);
}


