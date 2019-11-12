/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "kotlin.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "parser_tree.h"

extern int yylex(void);
extern void yyterminate();
extern int yyerror(const char *s);


#line 78 "kotlin.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "kotlin.tab.h".  */
#ifndef YY_YY_KOTLIN_TAB_H_INCLUDED
# define YY_YY_KOTLIN_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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
#line 13 "kotlin.y" /* yacc.c:355  */
parse_node *node, char *str_var; int int_var; double double_var

#line 188 "kotlin.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_KOTLIN_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 205 "kotlin.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   250

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  67
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  113
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  167

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   321

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   166,   166,   170,   172,   178,   182,   189,   193,   198,
     200,   208,   214,   216,   221,   223,   226,   233,   235,   237,
     239,   241,   243,   245,   249,   254,   262,   264,   267,   270,
     276,   282,   286,   293,   298,   304,   306,   312,   316,   320,
     324,   328,   332,   338,   339,   345,   349,   355,   361,   366,
     372,   380,   385,   389,   392,   396,   399,   403,   404,   407,
     411,   412,   415,   416,   417,   418,   421,   424,   430,   434,
     443,   444,   447,   448,   449,   450,   451,   454,   455,   458,
     459,   460,   461,   462,   463,   466,   467,   468,   469,   472,
     473,   476,   477,   480,   481,   484,   485,   486,   489,   490,
     491,   492,   495,   496,   499,   500,   505,   506,   507,   508,
     509,   510,   513,   514
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "ID", "STRING", "FUNCTION",
  "DOWN", "STEP", "WHEN", "RET", "UNIT", "BYTE", "SHORT", "INT", "LONG",
  "FLOAT", "DOUBLE", "IN", "NOTIN", "IS", "NOTIS", "PLUS", "MINUS", "MULT",
  "DIV", "MOD", "LANGLE", "RANGLE", "LE", "GE", "EQEQ", "EQEQEQ",
  "EXCL_EQ", "EXCL_EQEQ", "ASSIGNMENT", "PLUS_ASSIGNMENT",
  "MINUS_ASSIGNMENT", "DIV_ASSIGNMENT", "MULT_ASSIGNMENT",
  "MOD_ASSIGNMENT", "INCR", "DECR", "EXCL", "LISTOF", "SETOF", "VAR",
  "VAL", "FROMTO", "DOWNTO", "IF", "ELSEIF", "ELSE", "FOR", "WHILE", "AND",
  "OR", "COMMA", "CURLY_OPEN", "CURLY_CLOSE", "NULLABLE", "COLON", "INCL",
  "OPEN", "CLOSE", "EOL", "SEMI", "$accept", "file", "code", "def_func",
  "arg_ex", "arg_state", "block", "states", "state", "expression",
  "function_ex", "for_ex", "if_ex", "if_state", "else_if_state",
  "else_state", "while_ex", "cond_ex", "cond_state", "in_ex", "range",
  "declear_ex", "assign_ex", "var_ex", "enum_value", "tuple", "value",
  "mult_ex", "factor", "member", "range_op", "pre_uni_op", "post_uni_op",
  "ass_op", "com_op", "in_op", "is_op", "add_op", "mult_op", "equl_op",
  "bool_op", "var_op", "type", "enum_type", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321
};
# endif

#define YYPACT_NINF -86

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-86)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       3,   -23,    25,     3,   -86,     7,   -25,   -86,   -86,   -27,
     -86,   -12,   -15,   -86,   124,     1,   -86,   233,    58,   -86,
     -86,    15,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     124,   -86,   -86,     5,    11,   -86,   181,   167,   117,   -86,
     -86,   172,     2,   172,   -86,    39,   -86,    10,   -86,   -86,
     -86,   -21,   -86,   -86,   -86,    63,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,    68,    27,   -86,   -86,   178,   -86,
     -86,   -86,   -86,   -86,   -86,   181,    40,    16,    37,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,    37,   124,   172,   -43,
     -86,   103,   124,   -43,   -86,   -86,   -86,   -86,   172,    38,
      32,   -86,   -29,    70,   167,   -86,   -86,    40,   -86,   -35,
      27,   124,   -86,   -38,    79,   -86,   -86,   -86,   172,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   124,
     233,   124,    50,    69,   -86,   -43,   -86,   172,   -86,   124,
     124,    37,   -86,   -86,   -86,   -86,   -86,   -86,   -86,    38,
     -86,   -86,   124,   -86,   -43,   -86,   -86,   -86,   -86,    53,
     -86,   -86,   -86,   124,    95,   124,   -86
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     3,     0,     0,     1,     4,     0,
       8,     0,     0,     9,     0,     0,     5,     0,     0,     7,
      63,    62,    60,    75,    76,    72,    73,    74,   112,   113,
       0,    58,     6,    57,    61,    64,     0,     0,     0,   104,
     105,     0,     0,     0,    19,     0,    12,    14,    23,    22,
      20,    26,    21,    18,    17,     0,   106,   107,   108,   109,
     110,   111,    50,    10,     0,     0,    93,    94,     0,    96,
      97,    95,    77,    78,    66,     0,    65,     0,    51,    55,
      84,    79,    80,    82,    81,    83,    24,     0,     0,     0,
      35,    41,     0,     0,    11,    13,    15,    16,     0,     0,
      28,    27,     0,    48,    68,    67,    56,    59,    53,     0,
      55,     0,    49,     0,    41,   102,   103,    30,     0,    91,
      92,    85,    86,    87,    88,    98,    99,   100,   101,     0,
       0,     0,     0,     0,    34,     0,    33,     0,    29,     0,
       0,    69,    54,    52,    40,    36,    37,    39,    38,     0,
      89,    90,     0,    31,     0,    47,    46,    25,    42,    45,
      32,    70,    71,     0,    43,     0,    44
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -86,   -86,   -86,   113,   114,   -86,   -85,   -86,    73,   -86,
     -86,   -86,   -86,   -86,   -86,    41,   -86,   -42,    24,   -86,
     -86,   -86,   -86,   -11,   -86,   -36,   -14,    76,   -33,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,    18,   -86
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     6,    12,    16,    45,    46,    47,
      48,    49,    50,    51,   100,   101,    52,    89,    90,   132,
     158,    53,    54,    13,    31,    78,    91,    33,    34,    35,
     163,    36,    74,    87,   129,   152,   130,    68,    75,   131,
     118,    55,    62,    37
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      32,    93,    86,    76,   117,    38,   139,    63,   134,     1,
      14,     9,   115,   116,   136,    15,    65,   115,   116,    20,
      21,    22,   111,    79,    79,     7,   144,    66,    67,   142,
      98,    99,    17,    15,    17,    69,    70,    71,    23,    24,
       5,   109,   107,    38,   103,    18,   113,    39,    40,    19,
     153,    41,    72,    73,    42,    43,   135,    25,    26,    27,
      28,    29,     9,   110,   157,    92,    44,   102,   141,   160,
       5,    10,   104,   112,   114,    96,    97,    64,   133,    77,
     108,    72,    73,   137,    99,    39,    40,   150,   151,    41,
      79,   105,    42,    43,   111,   154,    15,   143,    94,   119,
     120,   161,   162,   165,    44,   140,   121,   122,   123,   124,
     125,   126,   127,   128,   149,   146,     8,   148,    95,    11,
      20,    21,    22,   119,   120,   155,   156,    20,    21,    22,
     121,   122,   123,   124,   125,   126,   127,   128,   159,    23,
      24,   138,   145,   105,   106,     0,    23,    24,   147,   164,
       0,   166,    80,    81,    82,    83,    84,    85,    25,    26,
      27,    28,    29,     0,     0,    25,    26,    27,    28,    29,
      20,    21,    22,     0,     0,    20,    21,    22,     0,     0,
      77,    20,    21,    22,    20,    21,     0,    30,     0,    23,
      24,     0,     0,     0,    23,    24,     0,     0,     0,     0,
      23,    24,     0,    23,    24,     0,     0,     0,    25,    26,
      27,    28,    29,    25,    26,    27,    28,    29,     0,    25,
      26,    27,    25,    26,    27,     0,     0,     0,     0,     0,
      77,     0,     0,     0,     0,    88,     0,     0,     0,     0,
       0,    30,     0,     0,    30,    56,    57,    58,    59,    60,
      61
};

static const yytype_int16 yycheck[] =
{
      14,    43,    38,    36,    89,     4,    35,    18,    93,     6,
      35,     4,    55,    56,    99,    58,    30,    55,    56,     3,
       4,     5,    57,    37,    38,     0,    64,    22,    23,    64,
      51,    52,    61,    58,    61,    24,    25,    26,    22,    23,
      63,    77,    75,     4,    55,    57,    88,    46,    47,    64,
     135,    50,    41,    42,    53,    54,    98,    41,    42,    43,
      44,    45,     4,    77,   149,    63,    65,     4,   104,   154,
      63,    64,     4,    87,    88,    65,    66,    62,    92,    63,
      64,    41,    42,    51,    52,    46,    47,    18,    19,    50,
     104,    64,    53,    54,    57,   137,    58,   111,    59,    20,
      21,    48,    49,     8,    65,    35,    27,    28,    29,    30,
      31,    32,    33,    34,    64,   129,     3,   131,    45,     5,
       3,     4,     5,    20,    21,   139,   140,     3,     4,     5,
      27,    28,    29,    30,    31,    32,    33,    34,   152,    22,
      23,   100,   118,    64,    68,    -1,    22,    23,   130,   163,
      -1,   165,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    -1,    -1,    41,    42,    43,    44,    45,
       3,     4,     5,    -1,    -1,     3,     4,     5,    -1,    -1,
      63,     3,     4,     5,     3,     4,    -1,    63,    -1,    22,
      23,    -1,    -1,    -1,    22,    23,    -1,    -1,    -1,    -1,
      22,    23,    -1,    22,    23,    -1,    -1,    -1,    41,    42,
      43,    44,    45,    41,    42,    43,    44,    45,    -1,    41,
      42,    43,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    63,    12,    13,    14,    15,    16,
      17
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    68,    69,    70,    63,    71,     0,    70,     4,
      64,    71,    72,    90,    35,    58,    73,    61,    57,    64,
       3,     4,     5,    22,    23,    41,    42,    43,    44,    45,
      63,    91,    93,    94,    95,    96,    98,   110,     4,    46,
      47,    50,    53,    54,    65,    74,    75,    76,    77,    78,
      79,    80,    83,    88,    89,   108,    12,    13,    14,    15,
      16,    17,   109,    90,    62,    93,    22,    23,   104,    24,
      25,    26,    41,    42,    99,   105,    95,    63,    92,    93,
      35,    36,    37,    38,    39,    40,    92,   100,    63,    84,
      85,    93,    63,    84,    59,    75,    65,    66,    51,    52,
      81,    82,     4,    90,     4,    64,    94,    95,    64,    92,
      93,    57,    93,    84,    93,    55,    56,    73,   107,    20,
      21,    27,    28,    29,    30,    31,    32,    33,    34,   101,
     103,   106,    86,    93,    73,    84,    73,    51,    82,    35,
      35,    92,    64,    93,    64,    85,    93,   109,    93,    64,
      18,    19,   102,    73,    84,    93,    93,    73,    87,    93,
      73,    48,    49,    97,    93,     8,    93
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    67,    68,    69,    69,    70,    70,    71,    71,    72,
      72,    73,    74,    74,    75,    75,    75,    76,    76,    76,
      76,    76,    76,    76,    77,    78,    79,    79,    79,    79,
      80,    81,    81,    82,    83,    84,    84,    85,    85,    85,
      85,    85,    86,    87,    87,    87,    88,    88,    88,    89,
      90,    91,    92,    92,    92,    92,    93,    93,    93,    94,
      94,    94,    95,    95,    95,    95,    95,    95,    96,    96,
      97,    97,    98,    98,    98,    98,    98,    99,    99,   100,
     100,   100,   100,   100,   100,   101,   101,   101,   101,   102,
     102,   103,   103,   104,   104,   105,   105,   105,   106,   106,
     106,   106,   107,   107,   108,   108,   109,   109,   109,   109,
     109,   109,   110,   110
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     3,     4,     3,     2,     1,
       3,     3,     1,     2,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     2,     5,     1,     2,     2,     3,
       3,     3,     4,     2,     3,     1,     3,     3,     3,     3,
       3,     1,     3,     3,     5,     1,     4,     4,     2,     3,
       3,     2,     3,     2,     3,     1,     3,     1,     1,     3,
       1,     1,     1,     1,     1,     2,     2,     3,     3,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 166 "kotlin.y" /* yacc.c:1646  */
    { print_tree((yyvsp[0].node));
             (yyval.int_var) = 0;}
#line 1438 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 170 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("code");
                 (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 1445 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 172 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("code");
                      add_child(parent, (yyvsp[-1].node));
                      (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 1453 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 178 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("def_func");
                                   add_string(parent, "FUNCTION");
                                   add_child(parent, (yyvsp[-1].node));
                                   (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1462 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 182 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("def_func");
                                              add_string(parent, "FUNCTION");
                                              add_child(parent, (yyvsp[-2].node));
                                              add_string(parent, "ASSIGNMENT")
                                              (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1472 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 189 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("arg_ex");
                                add_string(parent, "OPEN");
                                add_child(parent, (yyvsp[-1].node));
                                (yyval.node) = add_string(parent, "CLOSE"); }
#line 1481 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 193 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("arg_ex");
                      add_string(parent, "OPEN");
                      (yyval.node) = add_string(parent, "CLOSE"); }
#line 1489 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 198 "kotlin.y" /* yacc.c:1646  */
    { parent_node* parent = make_node("arg_ex");
                  (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1496 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 200 "kotlin.y" /* yacc.c:1646  */
    { parent_node* parent = make_node("arg_ex");
                               add_child(parent, (yyvsp[-2].node));
                               add_string(parent, "COMMA");
                               (yyval.node) = add_child(parent, (yyvsp[-2].node)); }
#line 1505 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 208 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("block");
                                        add_string(parent, "CURLY_OPEN");
                                        add_child(parent, (yyvsp[-1].node));
                                        (yyval.node) = add_string(parent, "CURLY_CLOSE"); }
#line 1514 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 214 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("states");
                 (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1521 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 216 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("states");
                        add_child(parent, (yyvsp[-1].node));
                        (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1529 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 221 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("state");
                     (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1536 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 223 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("state");
                         add_child(parent, (yyvsp[-1].node));
                         (yyval.node) = add_string(parent, "EOL"); }
#line 1544 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 226 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("state");
                          add_child(parent, (yyvsp[-1].node));
                          (yyval.node) = add_string(parent, "SEMI"); }
#line 1552 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 233 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("expression");
                        (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1559 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 235 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("expression");
                        (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1566 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 237 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("expression");
                  (yyval.node) = add_string(parent, "EOF"); }
#line 1573 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 239 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("expression");
                    (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1580 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 241 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("expression");
                       (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1587 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 243 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("expression");
                     (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1594 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 245 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("expression");
                     (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1601 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 249 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("function_ex");
                         add_string(parent, "ID");
                         (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 1609 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 254 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("for_ex");
                                      add_string(parent, "FOR");
                                      add_string(parent, "OPEN");
                                      add_child(parent, (yyvsp[-2].node));
                                      add_string(parnet, "CLOSE");
                                      (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1620 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 262 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("if_ex");
                  (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 1627 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 264 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("if_ex");
                             add_child(parent, (yyvsp[-1].node));
                             (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1635 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 267 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("if_ex");
                                add_child(parent, (yyvsp[-1].node));
                                (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 1643 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 270 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("if_ex");
                                           add_child(parent, (yyvsp[-2].node));
                                           add_child(parent, (yyvsp[-1].node));
                                           (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 1652 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 276 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("if_state");
                             add_string(parent, "IF");
                             add_child(parent, (yyvsp[-1].node));
                             (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1661 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 282 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("else_if_state");
                                      add_string(parent, "ELSEIF");
                                      add_child(parent, (yyvsp[-1].node));
                                      (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1670 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 286 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("else_if_state");
                                                    add_child(parent, (yyvsp[-3].node));
                                                    add_string(parent, "ELSEIF");
                                                    add_child(parent, (yyvsp[-1].node));
                                                    (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 1680 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 293 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("else_state");
                         add_string(parent, "ELSE");
                         (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1688 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 298 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("while_ex");
                                add_string(parent, "WHILE");
                                add_child(parent, (yyvsp[-1].node));
                                (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 1697 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 304 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("cond_ex");
                       (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 1704 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 306 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("cond_ex");
                                       add_child(parent, (yyvsp[-2].node));
                                       add_child(parent, (yyvsp[-1].node));
                                       (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 1713 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 312 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("cond_state");
                                 add_child(parent, (yyvsp[-2].node));
                                 add_child(parent, (yyvsp[-1].node));
                                 (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1722 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 316 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("cond_state");
                               add_child(parent, (yyvsp[-2].node));
                               add_child(parent, (yyvsp[-1].node));
                               (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1731 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 320 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("cond_state");
                            add_child(parent, (yyvsp[-2].node));
                            add_child(parent, (yyvsp[-1].node));
                            (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1740 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 324 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("cond_state");
                              add_string(parent, "OPEN");
                              add_child(parent, (yyvsp[-1].node));
                              (yyval.node) = add_string(parent, "CLOSE"); }
#line 1749 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 328 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("in_ex");
                 (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1756 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 332 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("in_ex");
                            add_child(parent, (yyvsp[-2].node));
                            add_child(parent, (yyvsp[-1].node));
                            (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1765 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 338 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("range"); }
#line 1771 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 339 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("range");
                                         add_child(parent, (yyvsp[-4].node));
                                         add_child(parent, (yyvsp[-3].node));
                                         add_child(parent, (yyvsp[-2].node));
                                         add_string(parent, "STEP");
                                         (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 1782 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 345 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("range");
               (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1789 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 349 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("declear_ex");
                                             add_child(parent, (yyvsp[-3].node));
                                             add_child(parent, (yyvsp[-2].node));
                                             add_string(parent, ASSIGNMNET);
                                             (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1799 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 355 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("declear_ex");
                                          add_child(parent, (yyvsp[-3].node))
                                          add_string(parent, "ID");
                                          add_string(parent, "ASSIGNMNET");
                                          (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 1809 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 361 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("declear_ex");
                             add_child(parent, (yyvsp[-1].node));
                             (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1817 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 366 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("assign_ex");
                            add_string(parent, "ID");
                            add_child(parent, (yyvsp[-1].node));
                            (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 1826 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 372 "kotlin.y" /* yacc.c:1646  */
    {parse_node* parent = make_node("var_ex");
                        add_string(parent, "ID");
                        add_string(parent, "COLON");
                        (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 1835 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 380 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("enum_value");
                              add_child(parent, (yyvsp[-1].node));
							  (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1843 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 385 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("tuple");
                           add_child(parent, (yyvsp[-2].node));
                           add_string(parent, "COMMA");
                           (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 1852 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 389 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("tuple");
                    add_string(parent, "OPEN");
                    (yyval.node) = add_string(parent, "CLOSE"); }
#line 1860 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 392 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("tuple");
                          add_string(parent, "OPEN");
                          add_child(parent, (yyvsp[-1].node));
                          (yyval.node) = add_string(parent, "CLOSE");}
#line 1869 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 396 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1875 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 399 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("value");
                                 add_child(parent, (yyvsp[-2].node));
                                 add_child(parent, (yyvsp[-1].node));
                                 (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1884 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 403 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1890 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 404 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1896 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 407 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("mult_ex");
                                  add_child(parent, (yyvsp[-2].node));
                                  add_child(parent, (yyvsp[-1].node));
                                  (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1905 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 411 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("STRING"); }
#line 1911 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 412 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1917 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 415 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("ID"); }
#line 1923 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 416 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("NUMBER"); }
#line 1929 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 417 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1935 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 418 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("factor");
                            add_child(parent, (yyvsp[-1].node));
                            (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 1943 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 421 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("factor");
                            add_child(parent, (yyvsp[-1].node));
                            (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 1951 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 424 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("factor");
                           add_string(parent, "OPEN");
                           add_child(parent, (yyvsp[-1].node));
                           (yyval.node) = add_string(parent, "CLOSE"); }
#line 1960 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 430 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("member");
                     add_string(parent, "ID");
                     add_string(parent, "INCL");
                     (yyval.node) = add_string(parent, "ID"); }
#line 1969 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 434 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("factor");
                           add_string(parent, "ID");
                           add_string(parent, "INCL");
                           add_string(parent, "ID");
                           (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1979 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 443 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("FROMTO"); }
#line 1985 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 444 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("DOWNTO"); }
#line 1991 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 447 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("INCR"); }
#line 1997 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 448 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("DECR"); }
#line 2003 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 449 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("EXCL"); }
#line 2009 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 450 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("PLUS"); }
#line 2015 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 451 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("MINUS"); }
#line 2021 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 454 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("INCR"); }
#line 2027 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 455 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("DECR"); }
#line 2033 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 458 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("PLUS_ASSIGNMENT"); }
#line 2039 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 459 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("MINUS_ASSIGNMENT"); }
#line 2045 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 460 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("MULT_ASSIGNMENT"); }
#line 2051 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 461 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("DIV_ASSIGNMENT"); }
#line 2057 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 462 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("MOD_ASSIGNMENT"); }
#line 2063 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 463 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("ASSIGNMENT"); }
#line 2069 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 466 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("LANGLE"); }
#line 2075 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 467 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("RANGLE"); }
#line 2081 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 468 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("LE"); }
#line 2087 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 469 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("GE"); }
#line 2093 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 472 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("IN"); }
#line 2099 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 473 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("NOTIN"); }
#line 2105 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 476 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("IS"); }
#line 2111 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 477 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("NOTIS"); }
#line 2117 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 480 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("PLUS"); }
#line 2123 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 481 "kotlin.y" /* yacc.c:1646  */
    {(yyval.node) = make_node("MINUS"); }
#line 2129 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 484 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("MOD"); }
#line 2135 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 485 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("MULT"); }
#line 2141 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 486 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("DIV"); }
#line 2147 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 489 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("EQEQ"); }
#line 2153 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 490 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("EQEQEQ"); }
#line 2159 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 491 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("EXCL_EQ"); }
#line 2165 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 492 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("EXCL_EQEQ"); }
#line 2171 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 495 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("AND"); }
#line 2177 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 496 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("OR"); }
#line 2183 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 499 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("VAR"); }
#line 2189 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 500 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("VAL"); }
#line 2195 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 505 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("BYTE"); }
#line 2201 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 506 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("SHORT"); }
#line 2207 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 507 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("INT"); }
#line 2213 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 508 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("LONG"); }
#line 2219 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 509 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("FLOAT"); }
#line 2225 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 510 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("DOUBLE"); }
#line 2231 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 513 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("LISTOF"); }
#line 2237 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 514 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("SETOF"); }
#line 2243 "kotlin.tab.c" /* yacc.c:1646  */
    break;


#line 2247 "kotlin.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 517 "kotlin.y" /* yacc.c:1906  */

/* User code */
int yyerror(const char *s)
{
	return printf("%s\n", s);
}
