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
    NUMBER = 258,
    ID = 259,
    STRING = 260,
    FUNCTION = 261,
    DOWN = 262,
    STEP = 263,
    WHEN = 264,
    RET = 265,
    UNIT = 266,
    BYTE = 267,
    SHORT = 268,
    INT = 269,
    LONG = 270,
    FLOAT = 271,
    DOUBLE = 272,
    IN = 273,
    NOTIN = 274,
    IS = 275,
    NOTIS = 276,
    PLUS = 277,
    MINUS = 278,
    MULT = 279,
    DIV = 280,
    MOD = 281,
    LANGLE = 282,
    RANGLE = 283,
    LE = 284,
    GE = 285,
    EQEQ = 286,
    EQEQEQ = 287,
    EXCL_EQ = 288,
    EXCL_EQEQ = 289,
    ASSIGNMENT = 290,
    PLUS_ASSIGNMENT = 291,
    MINUS_ASSIGNMENT = 292,
    DIV_ASSIGNMENT = 293,
    MULT_ASSIGNMENT = 294,
    MOD_ASSIGNMENT = 295,
    INCR = 296,
    DECR = 297,
    EXCL = 298,
    LISTOF = 299,
    SETOF = 300,
    VAR = 301,
    VAL = 302,
    FROMTO = 303,
    DOWNTO = 304,
    IF = 305,
    ELSEIF = 306,
    ELSE = 307,
    FOR = 308,
    WHILE = 309,
    AND = 310,
    OR = 311,
    COMMA = 312,
    CURLY_OPEN = 313,
    CURLY_CLOSE = 314,
    NULLABLE = 315,
    COLON = 316,
    INCL = 317,
    OPEN = 318,
    CLOSE = 319,
    EOL = 320,
    SEMI = 321
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 27 "kotlin.y" /* yacc.c:1909  */
struct parse_tree *node; char *str_var; int int_var; double double_var

#line 124 "kotlin.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_KOTLIN_TAB_H_INCLUDED  */
