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

extern int yylex(void);
extern void yyterminate();
extern int yyerror(const char *s);

yydebug = 1;

typedef struct parse_tree{
		char str[20];
		struct parse_tree *child;
    struct parse_tree *next;
    struct parse_tree *prev;
		struct parse_tree *parent;
}parse_node;

parse_node* make_dummy();
parse_node* make_node(char* new_data);
parse_node* add_string(parse_node* parent, char* child);
parse_node* add_child(parse_node* parent, parse_node* child);
void last_add(parse_node *temp, parse_node *new_node);
void print_tree(parse_node *parent, int layers);


#line 94 "kotlin.tab.c" /* yacc.c:339  */

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
#line 29 "kotlin.y" /* yacc.c:355  */
struct parse_tree *node; char *str_var; int int_var; double double_var;

#line 204 "kotlin.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_KOTLIN_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 221 "kotlin.tab.c" /* yacc.c:358  */

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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   294

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  67
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  115
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  170

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
       0,   182,   182,   186,   189,   192,   194,   199,   204,   212,
     216,   221,   223,   231,   237,   239,   244,   246,   249,   256,
     258,   260,   262,   264,   266,   268,   272,   277,   285,   287,
     290,   293,   299,   305,   309,   316,   321,   327,   329,   335,
     339,   343,   347,   351,   355,   361,   362,   368,   372,   378,
     384,   389,   395,   403,   408,   412,   415,   419,   422,   426,
     427,   430,   434,   435,   438,   439,   440,   441,   444,   447,
     453,   457,   466,   467,   470,   471,   472,   473,   474,   477,
     478,   481,   482,   483,   484,   485,   486,   489,   490,   491,
     492,   495,   496,   499,   500,   503,   504,   507,   508,   509,
     512,   513,   514,   515,   518,   519,   522,   523,   528,   529,
     530,   531,   532,   533,   536,   537
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FUNCTION", "DOWN", "STEP", "WHEN",
  "RET", "UNIT", "BYTE", "SHORT", "INT", "LONG", "FLOAT", "DOUBLE", "IN",
  "NOTIN", "IS", "NOTIS", "PLUS", "MINUS", "MULT", "DIV", "MOD", "LANGLE",
  "RANGLE", "LE", "GE", "EQEQ", "EQEQEQ", "EXCL_EQ", "EXCL_EQEQ",
  "ASSIGNMENT", "PLUS_ASSIGNMENT", "MINUS_ASSIGNMENT", "DIV_ASSIGNMENT",
  "MULT_ASSIGNMENT", "MOD_ASSIGNMENT", "INCR", "DECR", "EXCL", "LISTOF",
  "SETOF", "VAR", "VAL", "FROMTO", "DOWNTO", "IF", "ELSEIF", "ELSE", "FOR",
  "WHILE", "AND", "OR", "COMMA", "CURLY_OPEN", "CURLY_CLOSE", "NULLABLE",
  "COLON", "INCL", "OPEN", "CLOSE", "EOL", "SEMI", "NUMBER", "ID",
  "STRING", "$accept", "file", "codes", "code", "def_func", "arg_ex",
  "arg_state", "block", "states", "state", "expression", "function_ex",
  "for_ex", "if_ex", "if_state", "else_if_state", "else_state", "while_ex",
  "cond_ex", "cond_state", "in_ex", "range", "declear_ex", "assign_ex",
  "var_ex", "enum_value", "tuple", "value", "mult_ex", "factor", "member",
  "range_op", "pre_uni_op", "post_uni_op", "ass_op", "com_op", "in_op",
  "is_op", "add_op", "mult_op", "equl_op", "bool_op", "var_op", "type",
  "enum_type", YY_NULLPTR
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

#define YYPACT_NINF -81

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-81)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       3,   -53,   -81,    14,   -81,     3,   -81,   -26,   -81,   -81,
     -39,   -22,   -81,   -19,    -9,     2,   160,    31,   -81,    34,
     -81,    -6,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   160,
     -81,     5,   -81,   -81,   -81,     0,    91,   -81,    -3,   177,
     -81,   -81,   189,    11,   189,   -81,    68,    20,    31,   -38,
     -81,   -81,   -81,   105,   -81,   -81,   -81,    21,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,    24,    25,   -81,   -81,
     -11,   -81,   -81,   -81,   -81,   -81,   -81,    -3,    -7,   117,
     -81,    35,   189,    36,    -2,   248,   160,    36,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   160,   -81,   -81,   -81,   -81,
     189,    36,    45,   -81,    47,   -17,    65,   -81,   177,   -81,
      -7,   -81,    50,   -43,   177,    55,   233,   -81,   -81,   -81,
     189,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   160,    34,   160,    57,    53,   -81,   -81,    36,   -81,
     -81,   147,   160,   160,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,    36,   -81,   -81,   160,   -81,    36,   -81,   -81,
     -81,   -81,    38,   -81,   -81,   -81,   160,    94,   160,   -81
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     6,     0,     2,     4,     5,     0,     1,     3,
       0,     0,    10,     0,     0,    11,     0,     0,     7,     0,
       9,     0,    77,    78,    74,    75,    76,   114,   115,     0,
      65,    64,    62,    60,     8,    59,    63,    66,     0,     0,
     106,   107,     0,     0,     0,    21,     0,     0,    14,    16,
      25,    24,    22,    28,    23,    20,    19,     0,   108,   109,
     110,   111,   112,   113,    52,    12,     0,     0,    95,    96,
       0,    98,    99,    97,    79,    80,    68,     0,    67,     0,
      53,    57,     0,     0,    37,    43,     0,     0,    86,    81,
      82,    84,    83,    85,    26,     0,    13,    15,    17,    18,
       0,     0,    30,    29,     0,     0,    50,    69,    70,    58,
      61,    55,     0,     0,     0,     0,    43,    32,   104,   105,
       0,    93,    94,    87,    88,    89,    90,   100,   101,   102,
     103,     0,     0,     0,     0,     0,    36,    51,     0,    35,
      31,     0,     0,     0,    71,    56,    54,    42,    38,    39,
      41,    40,     0,    91,    92,     0,    33,     0,    49,    48,
      27,    44,    47,    34,    72,    73,     0,    45,     0,    46
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -81,   -81,   114,   -81,   -81,   -81,    99,   -80,    73,   -81,
     -81,   -81,   -81,   -81,   -81,   -18,    29,   -81,   -40,   -81,
     -81,   -81,   -81,   -81,    78,   -81,   -41,   -16,    52,   -37,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,     6,   -81
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     6,    11,    14,    18,    47,    48,
      49,    50,    51,    52,    53,   102,   103,    54,   104,    84,
     134,   161,    55,    56,    15,    33,    80,    85,    35,    36,
      37,   166,    38,    76,    95,   131,   155,   132,    70,    77,
     133,   120,    57,    64,    39
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      34,    78,    83,   117,    87,    94,     1,   136,    22,    23,
      16,   114,     7,    66,     8,   142,    22,    23,   107,    68,
      69,   139,    12,    81,    98,    99,    13,    24,    25,    26,
      81,    74,    75,    17,    10,    24,    25,    26,   112,    19,
     110,    19,   115,    58,    59,    60,    61,    62,    63,    29,
     118,   119,    20,    30,    31,    32,    21,    29,   156,    13,
     138,    30,    31,   113,    67,     2,   116,   144,   153,   154,
     135,    86,   160,   146,    40,    41,    96,   163,    42,   137,
     148,    43,    44,   164,   165,   107,   105,    22,    23,   114,
     108,    17,    81,    45,   101,   141,    46,   143,    81,   168,
      88,    89,    90,    91,    92,    93,    24,    25,    26,    27,
      28,   145,    71,    72,    73,   149,   147,   151,   152,     9,
      65,    97,   109,   157,    22,    23,   158,   159,    79,    74,
      75,   140,    30,    31,    32,   106,    22,    23,   150,   162,
       0,     0,     0,    24,    25,    26,    27,    28,     0,     0,
     167,     0,   169,   100,   101,    24,    25,    26,    27,    28,
       0,     0,     0,     0,     0,    82,    22,    23,     0,    30,
      31,    32,     0,     0,     0,     0,     0,    79,   111,    22,
      23,    30,    31,    32,     0,    24,    25,    26,    27,    28,
       0,     0,     0,     0,     0,   100,    22,    23,    24,    25,
      26,    27,    28,     0,     0,     0,     0,    82,    22,    23,
       0,    30,    31,    32,     0,    24,    25,    26,    27,    28,
      29,     0,     0,     0,    30,    31,    32,    24,    25,    26,
      27,    28,     0,     0,     0,     0,     0,    79,     0,     0,
       0,    30,    31,    32,     0,     0,     0,     0,     0,    82,
     121,   122,     0,    30,    31,    32,     0,   123,   124,   125,
     126,   127,   128,   129,   130,   121,   122,     0,     0,     0,
       0,     0,   123,   124,   125,   126,   127,   128,   129,   130,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   107
};

static const yytype_int16 yycheck[] =
{
      16,    38,    42,    83,    44,    46,     3,    87,    19,    20,
      32,    54,    65,    29,     0,    32,    19,    20,    61,    19,
      20,   101,    61,    39,    62,    63,    65,    38,    39,    40,
      46,    38,    39,    55,    60,    38,    39,    40,    79,    58,
      77,    58,    82,     9,    10,    11,    12,    13,    14,    60,
      52,    53,    61,    64,    65,    66,    54,    60,   138,    65,
     100,    64,    65,    79,    59,    62,    82,   108,    15,    16,
      86,    60,   152,   114,    43,    44,    56,   157,    47,    95,
     120,    50,    51,    45,    46,    61,    65,    19,    20,    54,
      65,    55,   108,    62,    49,    48,    65,    32,   114,     5,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    61,    21,    22,    23,   131,    61,   133,    61,     5,
      21,    48,    70,   141,    19,    20,   142,   143,    60,    38,
      39,   102,    64,    65,    66,    57,    19,    20,   132,   155,
      -1,    -1,    -1,    38,    39,    40,    41,    42,    -1,    -1,
     166,    -1,   168,    48,    49,    38,    39,    40,    41,    42,
      -1,    -1,    -1,    -1,    -1,    60,    19,    20,    -1,    64,
      65,    66,    -1,    -1,    -1,    -1,    -1,    60,    61,    19,
      20,    64,    65,    66,    -1,    38,    39,    40,    41,    42,
      -1,    -1,    -1,    -1,    -1,    48,    19,    20,    38,    39,
      40,    41,    42,    -1,    -1,    -1,    -1,    60,    19,    20,
      -1,    64,    65,    66,    -1,    38,    39,    40,    41,    42,
      60,    -1,    -1,    -1,    64,    65,    66,    38,    39,    40,
      41,    42,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,
      -1,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,    60,
      17,    18,    -1,    64,    65,    66,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    17,    18,    -1,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    62,    68,    69,    70,    71,    65,     0,    69,
      60,    72,    61,    65,    73,    91,    32,    55,    74,    58,
      61,    54,    19,    20,    38,    39,    40,    41,    42,    60,
      64,    65,    66,    92,    94,    95,    96,    97,    99,   111,
      43,    44,    47,    50,    51,    62,    65,    75,    76,    77,
      78,    79,    80,    81,    84,    89,    90,   109,     9,    10,
      11,    12,    13,    14,   110,    73,    94,    59,    19,    20,
     105,    21,    22,    23,    38,    39,   100,   106,    96,    60,
      93,    94,    60,    85,    86,    94,    60,    85,    32,    33,
      34,    35,    36,    37,    93,   101,    56,    75,    62,    63,
      48,    49,    82,    83,    85,    65,    91,    61,    65,    95,
      96,    61,    93,    94,    54,    85,    94,    74,    52,    53,
     108,    17,    18,    24,    25,    26,    27,    28,    29,    30,
      31,   102,   104,   107,    87,    94,    74,    94,    85,    74,
      83,    48,    32,    32,    93,    61,    93,    61,    85,    94,
     110,    94,    61,    15,    16,   103,    74,    82,    94,    94,
      74,    88,    94,    74,    45,    46,    98,    94,     5,    94
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    67,    68,    69,    69,    70,    70,    71,    71,    72,
      72,    73,    73,    74,    75,    75,    76,    76,    76,    77,
      77,    77,    77,    77,    77,    77,    78,    79,    80,    80,
      80,    80,    81,    82,    82,    83,    84,    85,    85,    86,
      86,    86,    86,    86,    87,    88,    88,    88,    89,    89,
      89,    90,    91,    92,    93,    93,    93,    93,    94,    94,
      94,    95,    95,    95,    96,    96,    96,    96,    96,    96,
      97,    97,    98,    98,    99,    99,    99,    99,    99,   100,
     100,   101,   101,   101,   101,   101,   101,   102,   102,   102,
     102,   103,   103,   104,   104,   105,   105,   106,   106,   106,
     107,   107,   107,   107,   108,   108,   109,   109,   110,   110,
     110,   110,   110,   110,   111,   111
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     4,     5,     3,
       2,     1,     3,     3,     1,     2,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     2,     5,     1,     2,
       2,     3,     3,     3,     4,     2,     3,     1,     3,     3,
       3,     3,     3,     1,     3,     3,     5,     1,     4,     4,
       2,     3,     3,     2,     3,     2,     3,     1,     3,     1,
       1,     3,     1,     1,     1,     1,     1,     2,     2,     3,
       3,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1
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
#line 182 "kotlin.y" /* yacc.c:1646  */
    { print_tree((yyvsp[0].node), 0);
             (yyval.int_var) = 0;}
#line 1462 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 186 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("codes");
					add_child(parent, (yyvsp[-1].node));
					(yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1470 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 189 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1476 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 192 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("code");
                 (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1483 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 194 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("code");
			(yyval.node) = add_string(parent, "EOL"); }
#line 1490 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 199 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("def_func");
                                   add_string(parent, "FUNCTION");
								   add_string(parent, "ID");
                                   add_child(parent, (yyvsp[-1].node));
                                   (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1500 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 204 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("def_func");
                                              add_string(parent, "FUNCTION");
											  add_string(parent, "ID");
                                              add_child(parent, (yyvsp[-2].node));
                                              add_string(parent, "ASSIGNMENT");
                                              (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1511 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 212 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("arg_ex");
                                add_string(parent, "OPEN");
                                add_child(parent, (yyvsp[-1].node));
                                (yyval.node) = add_string(parent, "CLOSE"); }
#line 1520 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 216 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("arg_ex");
                      add_string(parent, "OPEN");
                      (yyval.node) = add_string(parent, "CLOSE"); }
#line 1528 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 221 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("arg_ex");
                  (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1535 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 223 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("arg_ex");
                               add_child(parent, (yyvsp[-2].node));
                               add_string(parent, "COMMA");
                               (yyval.node) = add_child(parent, (yyvsp[-2].node)); }
#line 1544 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 231 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("block");
                                        add_string(parent, "CURLY_OPEN");
                                        add_child(parent, (yyvsp[-1].node));
                                        (yyval.node) = add_string(parent, "CURLY_CLOSE"); }
#line 1553 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 237 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("states");
                 (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1560 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 239 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("states");
                        add_child(parent, (yyvsp[-1].node));
                        (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1568 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 244 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("state");
                     (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1575 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 246 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("state");
                         add_child(parent, (yyvsp[-1].node));
                         (yyval.node) = add_string(parent, "EOL"); }
#line 1583 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 249 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("state");
                          add_child(parent, (yyvsp[-1].node));
                          (yyval.node) = add_string(parent, "SEMI"); }
#line 1591 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 256 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("expression");
                        (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1598 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 258 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("expression");
                        (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1605 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 260 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("expression");
                  (yyval.node) = add_string(parent, "EOF"); }
#line 1612 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 262 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("expression");
                    (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1619 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 264 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("expression");
                       (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1626 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 266 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("expression");
                     (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1633 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 268 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("expression");
                     (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1640 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 272 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("function_ex");
                         add_string(parent, "ID");
                         (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 1648 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 277 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("for_ex");
                                      add_string(parent, "FOR");
                                      add_string(parent, "OPEN");
                                      add_child(parent, (yyvsp[-2].node));
                                      add_string(parent, "CLOSE");
                                      (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1659 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 285 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("if_ex");
                  (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 1666 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 287 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("if_ex");
                             add_child(parent, (yyvsp[-1].node));
                             (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1674 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 290 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("if_ex");
                                add_child(parent, (yyvsp[-1].node));
                                (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 1682 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 293 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("if_ex");
                                           add_child(parent, (yyvsp[-2].node));
                                           add_child(parent, (yyvsp[-1].node));
                                           (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 1691 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 299 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("if_state");
                             add_string(parent, "IF");
                             add_child(parent, (yyvsp[-1].node));
                             (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1700 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 305 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("else_if_state");
                                      add_string(parent, "ELSEIF");
                                      add_child(parent, (yyvsp[-1].node));
                                      (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1709 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 309 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("else_if_state");
                                                    add_child(parent, (yyvsp[-3].node));
                                                    add_string(parent, "ELSEIF");
                                                    add_child(parent, (yyvsp[-1].node));
                                                    (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 1719 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 316 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("else_state");
                         add_string(parent, "ELSE");
                         (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1727 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 321 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("while_ex");
                                add_string(parent, "WHILE");
                                add_child(parent, (yyvsp[-1].node));
                                (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 1736 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 327 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("cond_ex");
                       (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 1743 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 329 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("cond_ex");
                                       add_child(parent, (yyvsp[-2].node));
                                       add_child(parent, (yyvsp[-1].node));
                                       (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 1752 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 335 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("cond_state");
                                 add_child(parent, (yyvsp[-2].node));
                                 add_child(parent, (yyvsp[-1].node));
                                 (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1761 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 339 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("cond_state");
                               add_child(parent, (yyvsp[-2].node));
                               add_child(parent, (yyvsp[-1].node));
                               (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1770 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 343 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("cond_state");
                            add_child(parent, (yyvsp[-2].node));
                            add_child(parent, (yyvsp[-1].node));
                            (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1779 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 347 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("cond_state");
                              add_string(parent, "OPEN");
                              add_child(parent, (yyvsp[-1].node));
                              (yyval.node) = add_string(parent, "CLOSE"); }
#line 1788 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 351 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("in_ex");
                 (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1795 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 355 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("in_ex");
                            add_child(parent, (yyvsp[-2].node));
                            add_child(parent, (yyvsp[-1].node));
                            (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1804 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 361 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("range"); }
#line 1810 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 362 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("range");
                                         add_child(parent, (yyvsp[-4].node));
                                         add_child(parent, (yyvsp[-3].node));
                                         add_child(parent, (yyvsp[-2].node));
                                         add_string(parent, "STEP");
                                         (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 1821 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 368 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("range");
               (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1828 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 372 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("declear_ex");
                                             add_child(parent, (yyvsp[-3].node));
                                             add_child(parent, (yyvsp[-2].node));
                                             add_string(parent, "ASSIGNMNET");
                                             (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1838 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 378 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("declear_ex");
                                          add_child(parent, (yyvsp[-3].node));
                                          add_string(parent, "ID");
                                          add_string(parent, "ASSIGNMNET");
                                          (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 1848 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 384 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("declear_ex");
                             add_child(parent, (yyvsp[-1].node));
                             (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1856 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 389 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("assign_ex");
                            add_string(parent, "ID");
                            add_child(parent, (yyvsp[-1].node));
                            (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 1865 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 395 "kotlin.y" /* yacc.c:1646  */
    {parse_node* parent = make_node("var_ex");
                        add_string(parent, "ID");
                        add_string(parent, "COLON");
                        (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 1874 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 403 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("enum_value");
                              add_child(parent, (yyvsp[-1].node));
							  (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1882 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 408 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("tuple");
                           add_child(parent, (yyvsp[-2].node));
                           add_string(parent, "COMMA");
                           (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 1891 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 412 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("tuple");
                    add_string(parent, "OPEN");
                    (yyval.node) = add_string(parent, "CLOSE"); }
#line 1899 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 415 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("tuple");
                          add_string(parent, "OPEN");
                          add_child(parent, (yyvsp[-1].node));
                          (yyval.node) = add_string(parent, "CLOSE");}
#line 1908 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 419 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1914 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 422 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("value");
                                 add_child(parent, (yyvsp[-2].node));
                                 add_child(parent, (yyvsp[-1].node));
                                 (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1923 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 426 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1929 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 427 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1935 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 430 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("mult_ex");
                                  add_child(parent, (yyvsp[-2].node));
                                  add_child(parent, (yyvsp[-1].node));
                                  (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1944 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 434 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("STRING"); }
#line 1950 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 435 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1956 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 438 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("ID"); }
#line 1962 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 439 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("NUMBER"); }
#line 1968 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 440 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1974 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 441 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("factor");
                            add_child(parent, (yyvsp[-1].node));
                            (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 1982 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 444 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("factor");
                            add_child(parent, (yyvsp[-1].node));
                            (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 1990 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 447 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("factor");
                           add_string(parent, "OPEN");
                           add_child(parent, (yyvsp[-1].node));
                           (yyval.node) = add_string(parent, "CLOSE"); }
#line 1999 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 453 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("member");
                     add_string(parent, "ID");
                     add_string(parent, "INCL");
                     (yyval.node) = add_string(parent, "ID"); }
#line 2008 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 457 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("factor");
                           add_string(parent, "ID");
                           add_string(parent, "INCL");
                           add_string(parent, "ID");
                           (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 2018 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 466 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("FROMTO"); }
#line 2024 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 467 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("DOWNTO"); }
#line 2030 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 470 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("INCR"); }
#line 2036 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 471 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("DECR"); }
#line 2042 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 472 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("EXCL"); }
#line 2048 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 473 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("PLUS"); }
#line 2054 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 474 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("MINUS"); }
#line 2060 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 477 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("INCR"); }
#line 2066 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 478 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("DECR"); }
#line 2072 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 481 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("PLUS_ASSIGNMENT"); }
#line 2078 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 482 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("MINUS_ASSIGNMENT"); }
#line 2084 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 483 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("MULT_ASSIGNMENT"); }
#line 2090 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 484 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("DIV_ASSIGNMENT"); }
#line 2096 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 485 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("MOD_ASSIGNMENT"); }
#line 2102 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 486 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("ASSIGNMENT"); }
#line 2108 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 489 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("LANGLE"); }
#line 2114 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 490 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("RANGLE"); }
#line 2120 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 491 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("LE"); }
#line 2126 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 492 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("GE"); }
#line 2132 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 495 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("IN"); }
#line 2138 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 496 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("NOTIN"); }
#line 2144 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 499 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("IS"); }
#line 2150 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 500 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("NOTIS"); }
#line 2156 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 503 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("PLUS"); }
#line 2162 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 504 "kotlin.y" /* yacc.c:1646  */
    {(yyval.node) = make_node("MINUS"); }
#line 2168 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 507 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("MOD"); }
#line 2174 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 508 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("MULT"); }
#line 2180 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 509 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("DIV"); }
#line 2186 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 512 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("EQEQ"); }
#line 2192 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 513 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("EQEQEQ"); }
#line 2198 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 514 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("EXCL_EQ"); }
#line 2204 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 515 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("EXCL_EQEQ"); }
#line 2210 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 518 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("AND"); }
#line 2216 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 519 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("OR"); }
#line 2222 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 522 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("VAR"); }
#line 2228 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 523 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("VAL"); }
#line 2234 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 528 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("BYTE"); }
#line 2240 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 529 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("SHORT"); }
#line 2246 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 530 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("INT"); }
#line 2252 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 531 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("LONG"); }
#line 2258 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 532 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("FLOAT"); }
#line 2264 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 533 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("DOUBLE"); }
#line 2270 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 536 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("LISTOF"); }
#line 2276 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 537 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("SETOF"); }
#line 2282 "kotlin.tab.c" /* yacc.c:1646  */
    break;


#line 2286 "kotlin.tab.c" /* yacc.c:1646  */
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
#line 540 "kotlin.y" /* yacc.c:1906  */

/* User code */
int yyerror(const char *s)
{
	return printf("%s\n", s);
}


parse_node* make_dummy(){
	  parse_node *new_node = (parse_node *) malloc(sizeof(parse_node));
	strcmp(new_node->str, "DUMMY");
	new_node->parent = NULL;
    new_node->next = NULL;
    new_node->prev = NULL;
    new_node->child = NULL;
	  return new_node;
}

parse_node* make_node(char* new_data){
	  parse_node *new_node = (parse_node *) malloc(sizeof(parse_node));
	  strcpy(new_node->str, new_data);
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
	printf("-%s\n",parent->str);
	parse_node *next_node = parent->child->next;

	while(next_node != NULL){
		print_tree(next_node, layers+1);
		next_node = next_node->next;
	}
	return;
}
