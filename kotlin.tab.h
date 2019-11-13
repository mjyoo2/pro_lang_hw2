/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_KOTLIN_TAB_H_INCLUDED
# define YY_YY_KOTLIN_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    FUNCTION = 258,
    DOWN = 259,
    STEP = 260,
    WHEN = 261,
    RET = 262,
    UNIT = 263,
    BYTE = 264,
    SHORT = 265,
    INT = 266,
    LONG = 267,
    FLOAT = 268,
    DOUBLE = 269,
    IN = 270,
    NOTIN = 271,
    IS = 272,
    NOTIS = 273,
    PLUS = 274,
    MINUS = 275,
    MULT = 276,
    DIV = 277,
    MOD = 278,
    LANGLE = 279,
    RANGLE = 280,
    LE = 281,
    GE = 282,
    EQEQ = 283,
    EQEQEQ = 284,
    EXCL_EQ = 285,
    EXCL_EQEQ = 286,
    ASSIGNMENT = 287,
    PLUS_ASSIGNMENT = 288,
    MINUS_ASSIGNMENT = 289,
    DIV_ASSIGNMENT = 290,
    MULT_ASSIGNMENT = 291,
    MOD_ASSIGNMENT = 292,
    INCR = 293,
    DECR = 294,
    EXCL = 295,
    LISTOF = 296,
    SETOF = 297,
    VAR = 298,
    VAL = 299,
    FROMTO = 300,
    DOWNTO = 301,
    IF = 302,
    ELSEIF = 303,
    ELSE = 304,
    FOR = 305,
    WHILE = 306,
    AND = 307,
    OR = 308,
    COMMA = 309,
    CURLY_OPEN = 310,
    CURLY_CLOSE = 311,
    NULLABLE = 312,
    COLON = 313,
    INCL = 314,
    OPEN = 315,
    CLOSE = 316,
    EOL = 317,
    SEMI = 318,
    NUMBER = 319,
    ID = 320,
    STRING = 321
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 29 "kotlin.y" /* yacc.c:1909  */
struct parse_tree *node; char *str_var; int int_var; double double_var;

#line 124 "kotlin.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_KOTLIN_TAB_H_INCLUDED  */
