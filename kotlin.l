%{
#include <stdlib.h>
#include <string.h>

#include "expr.tab.h"

extern int yyerror(const char*);
%}

INTNUMBER [0-9]+
NUMBER [0-9]+[.]?[0-9]*
ID [a-zA-Z][a-zA-Z0-9]*
SPACE [ \t\r\n]+

%%

{NUMBER} { yylval.double_var = atof(yytext);
	return NUMBER;
}

{SPACE} { /* ignore */
}

"var" { return VAR
}

"val" { return VAL;
}

"?" { return NULLABLE;
}

"Int" { return Int;
}

"+"	{ return PLUS; 
}

"("	{ return OPEN;
}

")"	{ return CLOSE;
}

"-"	{ return MINUS;
}

"*"	{ return MULT; 
}

"/"	{ return DIV;
}

"="	{ return EQUAL;
}

";"	{ return EOL;
}

{ID}    { yylval.str_var = yytext;
        return ID;}

.	{  printf("%d\n", yytext[0]);
           yyerror("unexpected input"); 
}


%%
/* User code */


