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
    COMMENT = 258,
    PACKAGE = 259,
    IMPORT = 260,
    FORALL = 261,
    POINT = 262,
    FUNCTION = 263,
    DOWN = 264,
    STEP = 265,
    WHEN = 266,
    RET = 267,
    ANY = 268,
    UNIT = 269,
    BYTE = 270,
    SHORT = 271,
    INT = 272,
    LONG = 273,
    FLOAT = 274,
    DOUBLE = 275,
    STR = 276,
    BOOL = 277,
    IN = 278,
    NOTIN = 279,
    IS = 280,
    NOTIS = 281,
    PLUS = 282,
    MINUS = 283,
    MULT = 284,
    DIV = 285,
    MOD = 286,
    LANGLE = 287,
    RANGLE = 288,
    LE = 289,
    GE = 290,
    EQEQ = 291,
    EQEQEQ = 292,
    EXCL_EQ = 293,
    EXCL_EQEQ = 294,
    ASSIGNMENT = 295,
    PLUS_ASSIGNMENT = 296,
    MINUS_ASSIGNMENT = 297,
    DIV_ASSIGNMENT = 298,
    MULT_ASSIGNMENT = 299,
    MOD_ASSIGNMENT = 300,
    INCR = 301,
    DECR = 302,
    EXCL = 303,
    LISTOF = 304,
    SETOF = 305,
    VAR = 306,
    VAL = 307,
    FROMTO = 308,
    DOWNTO = 309,
    IF = 310,
    ELSEIF = 311,
    ELSE = 312,
    FOR = 313,
    WHILE = 314,
    AND = 315,
    OR = 316,
    COMMA = 317,
    CURLY_OPEN = 318,
    CURLY_CLOSE = 319,
    NULLABLE = 320,
    COLON = 321,
    INCL = 322,
    OPEN = 323,
    CLOSE = 324,
    NUL = 325,
    EOL = 326,
    SEMI = 327,
    NUMBER = 328,
    ID = 329,
    STRING = 330
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 29 "kotlin.y" /* yacc.c:1909  */
struct parse_tree *node; char *str_var; int int_var; double double_var;

#line 133 "kotlin.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_KOTLIN_TAB_H_INCLUDED  */
