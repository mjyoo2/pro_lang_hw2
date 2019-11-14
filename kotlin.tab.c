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
    RANGE = 328,
    NUMBER = 329,
    ID = 330,
    STRING = 331
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 29 "kotlin.y" /* yacc.c:355  */
struct parse_tree *node; char *str_var; int int_var; double double_var;

#line 214 "kotlin.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_KOTLIN_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 231 "kotlin.tab.c" /* yacc.c:358  */

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
#define YYFINAL  92
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   627

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  77
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  57
/* YYNRULES -- Number of rules.  */
#define YYNRULES  161
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  238

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   331

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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   208,   208,   212,   215,   219,   221,   223,   225,   230,
     235,   242,   244,   250,   254,   259,   261,   269,   273,   279,
     282,   285,   287,   291,   293,   300,   302,   304,   306,   308,
     310,   311,   313,   315,   317,   319,   321,   323,   325,   327,
     331,   334,   338,   343,   346,   352,   357,   364,   372,   376,
     382,   385,   387,   391,   393,   398,   402,   407,   427,   431,
     444,   448,   454,   457,   462,   468,   470,   476,   480,   484,
     488,   492,   494,   498,   504,   510,   516,   521,   527,   535,
     537,   539,   541,   545,   548,   555,   560,   564,   567,   571,
     574,   578,   579,   580,   581,   587,   591,   594,   595,   598,
     599,   601,   603,   606,   612,   615,   618,   621,   624,   628,
     631,   636,   648,   649,   650,   651,   652,   655,   656,   659,
     660,   661,   662,   663,   664,   667,   668,   669,   670,   673,
     674,   677,   678,   681,   682,   685,   686,   687,   690,   691,
     692,   693,   696,   697,   700,   701,   704,   705,   710,   711,
     715,   716,   717,   718,   719,   720,   721,   722,   723,   724,
     727,   728
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "COMMENT", "PACKAGE", "IMPORT", "FORALL",
  "POINT", "FUNCTION", "DOWN", "STEP", "WHEN", "RET", "ANY", "UNIT",
  "BYTE", "SHORT", "INT", "LONG", "FLOAT", "DOUBLE", "STR", "BOOL", "IN",
  "NOTIN", "IS", "NOTIS", "PLUS", "MINUS", "MULT", "DIV", "MOD", "LANGLE",
  "RANGLE", "LE", "GE", "EQEQ", "EQEQEQ", "EXCL_EQ", "EXCL_EQEQ",
  "ASSIGNMENT", "PLUS_ASSIGNMENT", "MINUS_ASSIGNMENT", "DIV_ASSIGNMENT",
  "MULT_ASSIGNMENT", "MOD_ASSIGNMENT", "INCR", "DECR", "EXCL", "LISTOF",
  "SETOF", "VAR", "VAL", "FROMTO", "DOWNTO", "IF", "ELSEIF", "ELSE", "FOR",
  "WHILE", "AND", "OR", "COMMA", "CURLY_OPEN", "CURLY_CLOSE", "NULLABLE",
  "COLON", "INCL", "OPEN", "CLOSE", "NUL", "EOL", "SEMI", "RANGE",
  "NUMBER", "ID", "STRING", "$accept", "file", "codes", "code", "def_func",
  "arg_block", "arg_ex", "arg_state", "block", "states", "state",
  "expression", "return_ex", "package_ex", "import_ex", "function_ex",
  "for_ex", "when_ex", "when_block", "when_states", "when_state",
  "when_cond_ex", "if_state", "else_if_state", "else_state", "while_ex",
  "cond_ex", "cond_state", "in_ex", "declear_ex", "assign_ex", "var_ex",
  "iterable_value", "range", "enum_value", "tuple", "value", "mult_ex",
  "factor", "object_ex", "members", "member", "pre_uni_op", "post_uni_op",
  "ass_op", "com_op", "in_op", "is_op", "add_op", "mult_op", "equl_op",
  "bool_op", "var_op", "new_line", "type_ex", "type", "enum_type", YY_NULLPTR
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331
};
# endif

#define YYPACT_NINF -191

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-191)))

#define YYTABLE_NINF -102

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     378,   -52,   -52,   -34,   -21,   506,   -12,  -191,  -191,  -191,
    -191,  -191,  -191,  -191,  -191,  -191,   538,   538,   232,   -10,
     538,   506,  -191,   -18,  -191,   428,  -191,    60,  -191,   378,
    -191,   378,   -18,  -191,  -191,  -191,  -191,    53,  -191,  -191,
    -191,  -191,  -191,  -191,  -191,  -191,  -191,  -191,    -7,    34,
    -191,    -5,    11,    41,    19,   378,   551,     9,  -191,    84,
      33,   -52,   116,  -191,  -191,    31,   538,   232,    32,  -191,
     375,   232,   378,  -191,  -191,  -191,  -191,   506,    40,    36,
    -191,  -191,  -191,  -191,  -191,  -191,  -191,  -191,   200,  -191,
      48,   506,  -191,  -191,  -191,  -191,   378,   378,  -191,  -191,
      80,  -191,  -191,  -191,  -191,  -191,  -191,    41,   551,  -191,
     116,  -191,  -191,    37,  -191,   -23,    71,  -191,  -191,  -191,
     -47,   -15,    52,    45,  -191,    50,   302,  -191,  -191,  -191,
    -191,   538,  -191,  -191,  -191,  -191,  -191,  -191,  -191,  -191,
    -191,  -191,  -191,  -191,   506,   102,   184,   506,  -191,  -191,
     305,    57,    55,    75,  -191,  -191,  -191,    56,   -29,   551,
    -191,   378,  -191,  -191,     9,   506,   184,   506,  -191,    64,
      62,    70,   378,  -191,   184,    72,  -191,  -191,  -191,   506,
    -191,  -191,  -191,  -191,  -191,  -191,  -191,  -191,  -191,  -191,
    -191,  -191,  -191,  -191,  -191,  -191,    68,  -191,  -191,  -191,
      40,  -191,  -191,  -191,  -191,  -191,  -191,    61,  -191,  -191,
     437,  -191,   130,  -191,  -191,  -191,   184,   134,    78,   -18,
      83,   142,   493,   506,   146,   378,  -191,   437,  -191,   378,
    -191,  -191,   378,  -191,  -191,  -191,  -191,  -191
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,    41,     0,   115,   116,   112,
     113,   114,   160,   161,   144,   145,     0,     0,     0,     0,
       0,     0,    93,   146,    99,   108,    97,     0,     2,     4,
       5,     7,    21,     6,    37,    34,    35,    33,    32,    36,
      27,    28,    29,    31,    26,    25,    92,    38,    91,    98,
     100,     0,     0,     0,     0,     8,     0,   108,    42,    43,
       0,     0,   108,   101,    40,     0,     0,     0,    65,    72,
      71,     0,     0,    39,    62,    63,    30,     0,     0,     0,
     147,   124,   119,   120,   122,   121,   123,   111,     0,    45,
      89,     0,     1,     3,    20,    23,    30,    22,   133,   134,
       0,   136,   137,   135,   117,   118,    96,     0,   106,   104,
     107,   105,   109,     0,   102,     0,    76,    24,    85,    44,
       0,     0,    11,     0,    94,     0,    71,    58,    59,   142,
     143,     0,   129,   130,   131,   132,   125,   126,   127,   128,
     138,   139,   140,   141,     0,     0,     0,     0,    60,    61,
       0,    23,     0,     0,    64,   103,    87,     0,     0,     0,
      77,    19,    90,    95,     0,     0,     0,     0,    14,     0,
       0,    15,     0,     9,     0,     0,    70,    66,    67,     0,
      79,    73,    80,    81,    82,   159,   158,   150,   151,   152,
     153,   154,   155,   156,   157,    69,   148,    68,    17,    18,
       0,    88,    86,    75,    78,    74,    13,     0,    10,    12,
       0,    47,    83,   149,    46,    16,     0,     0,     0,    51,
      53,     0,     0,     0,     0,     0,    48,    52,    49,     0,
      54,    84,     0,    57,    50,    53,    55,    56
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -191,  -191,   129,  -191,    15,  -191,  -191,   -48,   -62,   -71,
     -27,     6,  -191,  -191,  -191,     0,  -191,  -191,  -191,   -60,
    -191,  -190,  -191,  -191,  -191,  -191,    -9,  -191,    92,  -191,
    -191,   117,  -191,  -191,    25,   -46,    29,    74,   -41,     1,
     -39,   -38,  -191,  -191,  -191,  -191,  -191,  -191,  -191,  -191,
    -191,  -191,  -191,     7,  -147,   -36,  -191
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    27,    28,    29,    73,   121,   122,   170,    74,    31,
      32,    95,    34,    35,    36,    63,    38,    39,   211,   218,
     219,   220,    40,    41,    42,    43,    67,    68,    69,    44,
      45,   171,   181,   182,    46,    89,    47,    48,    49,    50,
      51,    52,    53,   106,    91,   144,   145,   146,   100,   107,
     147,   131,    54,    76,   195,   196,    56
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      37,   150,    58,    59,    94,   127,    33,    55,    71,   148,
     118,    78,   114,   112,   113,    30,   154,   165,    37,   204,
      98,    99,   168,    57,    75,   172,   161,   209,   169,    37,
      80,    37,   230,   159,    64,    33,    55,   235,    96,    97,
     155,    60,   157,   166,    30,    70,    70,    61,    72,    70,
      79,   109,   111,    23,    90,    37,    65,   125,    77,   173,
      92,   117,   123,   101,   102,   103,   163,    37,     7,     8,
     108,    37,    37,   128,   112,   113,    87,   149,   151,    96,
     104,   105,  -101,  -101,  -101,    90,   110,     9,    10,    11,
     119,    90,   129,   130,   115,   126,    37,    37,   132,   133,
     124,   120,   117,    72,    96,   155,   153,     7,     8,    21,
     159,   167,   164,   202,   175,    24,    62,   158,   174,   176,
     160,   199,   177,    94,   200,   201,     9,    10,    11,     6,
     166,   206,   207,   213,    94,   210,   169,    90,   214,    90,
     223,   225,   226,     7,     8,   208,   184,   228,    21,   229,
      37,    12,    13,   232,    24,    62,    26,    96,    93,   215,
      70,    37,     9,    10,    11,    12,    13,   234,    96,   152,
     183,   116,    37,   178,   162,   179,   197,    57,   180,    96,
     224,     0,     0,    87,    88,     0,    22,     0,    90,     0,
      24,    62,    26,     0,   203,     0,   205,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,     0,   212,     0,
       0,     0,     0,     6,     0,     0,     0,   222,     0,     0,
       0,     0,     0,     0,     0,    37,   227,     7,     8,    37,
       0,   233,    37,     0,   222,   236,     1,     2,   237,   221,
       3,     0,     0,     4,     5,     6,     9,    10,    11,    12,
      13,   221,   231,     0,     0,     0,   221,     0,     0,     7,
       8,     0,     0,     0,     0,     0,     0,     0,    88,   156,
      22,     0,     0,     0,    24,    62,    26,     0,     9,    10,
      11,    12,    13,    14,    15,     0,     0,    16,    17,    18,
      19,    20,     0,     0,     0,    72,     0,     0,     0,     0,
      21,     0,    22,    23,     0,     0,    24,    25,    26,     1,
       2,     0,     0,     3,     0,     0,     4,     5,     6,     0,
       0,     0,     0,     0,     0,   132,   133,   134,   135,     0,
       0,     0,     7,     8,   136,   137,   138,   139,   140,   141,
     142,   143,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     9,    10,    11,    12,    13,    14,    15,     0,     0,
      16,    17,    18,    19,    20,     0,     0,     0,     0,   198,
       0,   155,     0,    21,     0,    22,    23,     0,     0,    24,
      25,    26,     1,     2,     0,     0,     3,     0,     0,     4,
       5,     6,     0,     0,     0,     0,     0,     0,   132,   133,
     134,   135,     0,     0,     0,     7,     8,   136,   137,   138,
     139,   140,   141,   142,   143,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     9,    10,    11,    12,    13,    14,
      15,     0,     0,    16,    17,    18,    19,    20,     0,     0,
       0,     6,     0,     0,     0,     0,    21,     0,    22,    23,
       6,     0,    24,    25,    26,     7,     8,     0,     0,     0,
       0,     0,   216,     0,     7,     8,     0,     0,    81,    82,
      83,    84,    85,    86,     9,    10,    11,    12,    13,     0,
       0,     0,     0,     9,    10,    11,    12,    13,     0,     0,
       0,     0,     0,     0,   217,    87,    88,     0,    22,     0,
       0,     0,    24,    62,    26,    21,     6,    22,    23,     0,
       0,    24,    62,    26,     0,     0,     0,     0,   216,     6,
       7,     8,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     7,     8,     0,     0,     0,     0,     9,
      10,    11,    12,    13,     0,     0,     0,     0,     0,     0,
     217,     6,     9,    10,    11,    12,    13,     0,     0,     0,
       0,    21,     0,    22,     6,     7,     8,    24,    62,    26,
       0,     0,     0,     0,    21,     0,    22,     0,     7,     8,
      24,    62,    26,     0,     9,    10,    11,    12,    13,     0,
       0,     0,     0,     0,     0,     0,     0,     9,    10,    11,
      12,    13,     0,     0,     0,     0,    66,     0,    22,     0,
       0,     0,    24,    62,    26,     0,     0,     0,     0,    88,
       0,    22,     0,     0,     0,    24,    62,    26
};

static const yytype_int16 yycheck[] =
{
       0,    72,     1,     2,    31,    67,     0,     0,    17,    71,
      56,    20,    53,    52,    52,     0,    78,    40,    18,   166,
      27,    28,    69,    75,    18,    40,    97,   174,    75,    29,
      23,    31,   222,    62,     5,    29,    29,   227,    31,    32,
      69,    75,    88,    66,    29,    16,    17,    68,    63,    20,
      21,    51,    52,    71,    25,    55,    68,    66,    68,   121,
       0,    55,    61,    29,    30,    31,   107,    67,    27,    28,
      75,    71,    72,    67,   113,   113,    67,    71,    72,    72,
      46,    47,    29,    30,    31,    56,    75,    46,    47,    48,
       6,    62,    60,    61,    75,    66,    96,    97,    23,    24,
      69,    68,    96,    63,    97,    69,    77,    27,    28,    68,
      62,    40,    75,   159,    69,    74,    75,    88,    66,    69,
      91,    64,   131,   150,    69,    69,    46,    47,    48,    13,
      66,    69,    62,    65,   161,    63,    75,   108,   200,   110,
      10,     7,    64,    27,    28,   172,   145,    64,    68,     7,
     150,    49,    50,     7,    74,    75,    76,   150,    29,   207,
     131,   161,    46,    47,    48,    49,    50,   227,   161,    77,
     145,    54,   172,   144,   100,    73,   147,    75,    76,   172,
     216,    -1,    -1,    67,    68,    -1,    70,    -1,   159,    -1,
      74,    75,    76,    -1,   165,    -1,   167,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,   179,    -1,
      -1,    -1,    -1,    13,    -1,    -1,    -1,   210,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   225,   219,    27,    28,   229,
      -1,   225,   232,    -1,   227,   229,     4,     5,   232,   210,
       8,    -1,    -1,    11,    12,    13,    46,    47,    48,    49,
      50,   222,   223,    -1,    -1,    -1,   227,    -1,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    69,
      70,    -1,    -1,    -1,    74,    75,    76,    -1,    46,    47,
      48,    49,    50,    51,    52,    -1,    -1,    55,    56,    57,
      58,    59,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      68,    -1,    70,    71,    -1,    -1,    74,    75,    76,     4,
       5,    -1,    -1,     8,    -1,    -1,    11,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    -1,
      -1,    -1,    27,    28,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    47,    48,    49,    50,    51,    52,    -1,    -1,
      55,    56,    57,    58,    59,    -1,    -1,    -1,    -1,    64,
      -1,    69,    -1,    68,    -1,    70,    71,    -1,    -1,    74,
      75,    76,     4,     5,    -1,    -1,     8,    -1,    -1,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    -1,    -1,    -1,    27,    28,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,    51,
      52,    -1,    -1,    55,    56,    57,    58,    59,    -1,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    68,    -1,    70,    71,
      13,    -1,    74,    75,    76,    27,    28,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    27,    28,    -1,    -1,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      -1,    -1,    -1,    46,    47,    48,    49,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    67,    68,    -1,    70,    -1,
      -1,    -1,    74,    75,    76,    68,    13,    70,    71,    -1,
      -1,    74,    75,    76,    -1,    -1,    -1,    -1,    25,    13,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    -1,    -1,    -1,    -1,    46,
      47,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    13,    46,    47,    48,    49,    50,    -1,    -1,    -1,
      -1,    68,    -1,    70,    13,    27,    28,    74,    75,    76,
      -1,    -1,    -1,    -1,    68,    -1,    70,    -1,    27,    28,
      74,    75,    76,    -1,    46,    47,    48,    49,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
      49,    50,    -1,    -1,    -1,    -1,    68,    -1,    70,    -1,
      -1,    -1,    74,    75,    76,    -1,    -1,    -1,    -1,    68,
      -1,    70,    -1,    -1,    -1,    74,    75,    76
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     8,    11,    12,    13,    27,    28,    46,
      47,    48,    49,    50,    51,    52,    55,    56,    57,    58,
      59,    68,    70,    71,    74,    75,    76,    78,    79,    80,
      81,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      99,   100,   101,   102,   106,   107,   111,   113,   114,   115,
     116,   117,   118,   119,   129,   130,   133,    75,   116,   116,
      75,    68,    75,    92,   113,    68,    68,   103,   104,   105,
     113,   103,    63,    81,    85,    88,   130,    68,   103,   113,
     130,    40,    41,    42,    43,    44,    45,    67,    68,   112,
     113,   121,     0,    79,    87,    88,   130,   130,    27,    28,
     125,    29,    30,    31,    46,    47,   120,   126,    75,    92,
      75,    92,   117,   118,   115,    75,   108,    88,   112,     6,
      68,    82,    83,   116,    69,   103,   113,    85,    88,    60,
      61,   128,    23,    24,    25,    26,    32,    33,    34,    35,
      36,    37,    38,    39,   122,   123,   124,   127,    85,    88,
      86,    88,   105,   113,    85,    69,    69,   112,   113,    62,
     113,    86,   114,   115,    75,    40,    66,    40,    69,    75,
      84,   108,    40,    85,    66,    69,    69,   103,   113,    73,
      76,   109,   110,   111,   116,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,   131,   132,   113,    64,    64,
      69,    69,   112,   113,   131,   113,    69,    62,    87,   131,
      63,    95,   113,    65,    85,    84,    25,    57,    96,    97,
      98,   113,   130,    10,   132,     7,    64,   130,    64,     7,
      98,   113,     7,    88,    96,    98,    88,    88
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    77,    78,    79,    79,    80,    80,    80,    80,    81,
      81,    82,    82,    83,    83,    84,    84,    85,    85,    86,
      86,    86,    86,    87,    87,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      89,    89,    90,    91,    91,    92,    93,    94,    95,    95,
      96,    96,    96,    97,    97,    98,    98,    98,    99,    99,
     100,   100,   101,   101,   102,   103,   103,   104,   104,   104,
     104,   104,   104,   105,   106,   106,   106,   107,   108,   109,
     109,   109,   109,   110,   110,   111,   112,   112,   112,   112,
     113,   113,   113,   113,   113,   114,   114,   114,   114,   115,
     115,   115,   115,   115,   116,   116,   116,   116,   116,   117,
     117,   118,   119,   119,   119,   119,   119,   120,   120,   121,
     121,   121,   121,   121,   121,   122,   122,   122,   122,   123,
     123,   124,   124,   125,   125,   126,   126,   126,   127,   127,
     127,   127,   128,   128,   129,   129,   130,   130,   131,   131,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     133,   133
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     4,
       5,     1,     3,     3,     2,     1,     3,     3,     3,     3,
       2,     1,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     2,     2,     3,     2,     5,     5,     3,     3,
       3,     1,     2,     1,     2,     3,     4,     3,     3,     3,
       3,     3,     2,     2,     3,     1,     3,     3,     3,     3,
       3,     1,     1,     3,     4,     4,     2,     3,     3,     1,
       1,     1,     1,     2,     4,     2,     3,     2,     3,     1,
       3,     1,     1,     1,     3,     3,     2,     1,     1,     1,
       1,     1,     2,     3,     2,     2,     2,     2,     1,     2,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1
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
#line 208 "kotlin.y" /* yacc.c:1646  */
    { print_tree((yyvsp[0].node), 0);
             (yyval.int_var) = 0;}
#line 1581 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 212 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("codes");
					add_child(parent, (yyvsp[-1].node));
					(yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1589 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 215 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("codes");
			  (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 1596 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 219 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("code");
                 (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1603 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 221 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("code");
					(yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1610 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 223 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("code");
			   (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1617 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 225 "kotlin.y" /* yacc.c:1646  */
    {(yyval.node) = make_node("new_line"); }
#line 1623 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 230 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("def_func");
		                                  add_string(parent, "FUNCTION");
					   					  add_string(parent, "ID");
		                                  add_child(parent, (yyvsp[-1].node));
		                                  (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1633 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 235 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("def_func");
                                              add_string(parent, "FUNCTION");
											add_string(parent, "ID");
                                              add_child(parent, (yyvsp[-2].node));
                                              add_string(parent, "ASSIGNMENT");
                                              (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1644 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 242 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("arg_block");
					 (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1651 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 244 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("arg_block");
								   add_child(parent, (yyvsp[-2].node));
								   add_string(parent, "COLON");
								   (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 1660 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 250 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("arg_ex");
                                add_string(parent, "OPEN");
                                add_child(parent, (yyvsp[-1].node));
                                (yyval.node) = add_string(parent, "CLOSE"); }
#line 1669 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 254 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("arg_ex");
                      add_string(parent, "OPEN");
                      (yyval.node) = add_string(parent, "CLOSE"); }
#line 1677 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 259 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("arg_ex");
                  (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1684 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 261 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("arg_ex");
                               add_child(parent, (yyvsp[-2].node));
                               add_string(parent, "COMMA");
                               (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1693 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 269 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("block");
                                        add_string(parent, "CURLY_OPEN");
                                        add_child(parent, (yyvsp[-1].node));
                                        (yyval.node) = add_string(parent, "CURLY_CLOSE"); }
#line 1702 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 273 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("block");
											add_string(parent, "CURLY_OPEN");
											add_child(parent, (yyvsp[-1].node));
											(yyval.node) = add_string(parent, "CURLY_OPEN"); }
#line 1711 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 279 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("states");
                        		add_child(parent, (yyvsp[-2].node));
                        		(yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1719 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 282 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("states");
								 add_child(parent, (yyvsp[-1].node));
								 (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1727 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 285 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("states");
				 (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1734 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 287 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("states");
						  (yyval.node) = add_child(parent, (yyvsp[-1].node)); }
#line 1741 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 291 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("state");
                              (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 1748 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 293 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("state");
							  add_child(parent, (yyvsp[-1].node));
							  (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 1756 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 300 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("expression");
                        (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1763 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 302 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("expression");
                       (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 1770 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 304 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("expression");
                    (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1777 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 306 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("expression");
                    (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1784 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 308 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("expression");
                    (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1791 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 310 "kotlin.y" /* yacc.c:1646  */
    {(yyval.node) = make_node("new_line"); }
#line 1797 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 311 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("expression");
                       (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1804 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 313 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("expression");
                     (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1811 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 315 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("expression");
                     (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1818 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 317 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("expression");
                     (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1825 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 319 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("expression");
	                   (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1832 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 321 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("expression");
	                    (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1839 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 323 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("expression");
						(yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1846 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 325 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("expression");
					(yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1853 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 327 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("def_func");
					   (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 1860 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 331 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("return_ex");
					   add_string(parent, "RET");
					   (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1868 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 334 "kotlin.y" /* yacc.c:1646  */
    {parse_node *parent = make_node("return_ex");
				(yyval.node) = add_string(parent, "RET");}
#line 1875 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 338 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("package_ex");
								 add_string(parent, "PACKAGE");
								 (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1883 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 343 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("import_ex");
																 add_string(parent, "IMPORT");
																 (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1891 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 346 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("import_ex");
										add_string(parent, "IMPORT");
										add_child(parent, (yyvsp[-1].node));
									 	 (yyval.node) = add_string(parent, "FORALL"); }
#line 1900 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 352 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("function_ex");
                         add_string(parent, "ID");
                         (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 1908 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 357 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("for_ex");
                                      add_string(parent, "FOR");
                                      add_string(parent, "OPEN");
                                      add_child(parent, (yyvsp[-2].node));
                                      add_string(parent, "CLOSE");
                                      (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1919 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 364 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("when_ex");
											 add_string(parent, "WHEN");
											   add_string(parent, "OPEN");
											   add_child(parent, (yyvsp[-2].node));
											   add_string(parent, "CLOSE");
											   (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 1930 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 372 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("when_block");
                                       add_string(parent, "CURLY_OPEN");
                                       add_child(parent, (yyvsp[-1].node));
                                       (yyval.node) = add_string(parent, "CURLY_CLOSE"); }
#line 1939 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 376 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("when_block");
											add_string(parent, "CURLY_OPEN");
											add_child(parent, (yyvsp[-1].node));
											(yyval.node) = add_string(parent, "CURLY_OPEN"); }
#line 1948 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 382 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("when_states");
                       		add_child(parent, (yyvsp[-2].node));
                       		(yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1956 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 385 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("when_states");
				 (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 1963 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 387 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("when_states");
						  (yyval.node) = add_child(parent, (yyvsp[-1].node)); }
#line 1970 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 391 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("when_state");
                             (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 1977 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 393 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("when_state");
							  add_child(parent, (yyvsp[-1].node));
							  (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 1985 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 398 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("when_cond_ex");
																add_child(parent, (yyvsp[-2].node));
																add_string(parent, "POINT");
																add_child(parent, (yyvsp[0].node)); }
#line 1994 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 402 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("when_cond_ex");
																	add_string(parent, "IS");
																  add_child(parent, (yyvsp[-2].node));
																  add_string(parent, "POINT");
																	(yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 2004 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 407 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("when_cond_ex");
															 add_string(parent, "ELSE");
														 	 add_string(parent, "POINT");
														 	 (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 2013 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 427 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("if_state");
                             add_string(parent, "IF");
                             add_child(parent, (yyvsp[-1].node));
                             (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 2022 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 431 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("if_state");
                             add_string(parent, "IF");
                             add_child(parent, (yyvsp[-1].node));
                             (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 2031 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 444 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("else_if_state");
                                      add_string(parent, "ELSEIF");
                                      add_child(parent, (yyvsp[-1].node));
                                      (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 2040 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 448 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("else_if_state");
                                      add_string(parent, "ELSEIF");
						                          add_child(parent, (yyvsp[-1].node));
						                          (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 2049 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 454 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("else_state");
                         add_string(parent, "ELSE");
                         (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 2057 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 457 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("else_state");
					               add_string(parent, "ELSE");
					               (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 2065 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 462 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("while_ex");
                                add_string(parent, "WHILE");
                                add_child(parent, (yyvsp[-1].node));
                                (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 2074 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 468 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("cond_ex");
                       (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 2081 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 470 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("cond_ex");
                                       add_child(parent, (yyvsp[-2].node));
                                       add_child(parent, (yyvsp[-1].node));
                                       (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 2090 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 476 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("cond_state");
                                 add_child(parent, (yyvsp[-2].node));
                                 add_child(parent, (yyvsp[-1].node));
                                 (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 2099 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 480 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("cond_state");
                               add_child(parent, (yyvsp[-2].node));
                               add_child(parent, (yyvsp[-1].node));
                               (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 2108 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 484 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("cond_state");
                            add_child(parent, (yyvsp[-2].node));
                            add_child(parent, (yyvsp[-1].node));
                            (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 2117 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 488 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("cond_state");
                              add_string(parent, "OPEN");
                              add_child(parent, (yyvsp[-1].node));
                              (yyval.node) = add_string(parent, "CLOSE"); }
#line 2126 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 492 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("cond_state");
                 (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 2133 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 494 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("cond_state");
				 (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 2140 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 498 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("in_ex");
                            				 add_child(parent, (yyvsp[-2].node));
                            				 add_child(parent, (yyvsp[-1].node));
                            				 (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 2149 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 504 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("declear_ex");
                                             add_child(parent, (yyvsp[-3].node));
                                             add_child(parent, (yyvsp[-2].node));
                                             add_string(parent, "ASSIGNMNET");
                                             (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 2159 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 510 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("declear_ex");
                                          add_child(parent, (yyvsp[-3].node));
                                          add_string(parent, "ID");
                                          add_string(parent, "ASSIGNMNET");
                                          (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 2169 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 516 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("declear_ex");
                             add_child(parent, (yyvsp[-1].node));
                             (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 2177 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 521 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("assign_ex");
                            add_string(parent, "ID");
                            add_child(parent, (yyvsp[-1].node));
                            (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 2186 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 527 "kotlin.y" /* yacc.c:1646  */
    {parse_node* parent = make_node("var_ex");
                        add_string(parent, "ID");
                        add_string(parent, "COLON");
                        (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 2195 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 535 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("iterable_value");
 												 (yyval.node) = add_string(parent, "STRING"); }
#line 2202 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 537 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("iterable_value");
												(yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 2209 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 539 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("iterable_value");
														 (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 2216 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 541 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("iterable_value");
												 (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 2223 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 545 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("range");
				add_string(parent, "RANGE");
				(yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 2231 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 548 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("range");
                                         add_string(parent, "RANGE");
										add_child(parent,(yyvsp[-2].node));
                                         add_string(parent, "STEP");
                                         (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 2241 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 555 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("enum_value");
                              add_child(parent, (yyvsp[-1].node));
							  (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 2249 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 560 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("tuple");
						   add_child(parent, (yyvsp[-2].node));
						   add_string(parent, "COMMA");
                           (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 2258 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 564 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("tuple");
                    add_string(parent, "OPEN");
                    (yyval.node) = add_string(parent, "CLOSE"); }
#line 2266 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 567 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("tuple");
                          add_string(parent, "OPEN");
                          add_child(parent, (yyvsp[-1].node));
                          (yyval.node) = add_string(parent, "CLOSE");}
#line 2275 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 571 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2281 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 574 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("value");
                                 add_child(parent, (yyvsp[-2].node));
                                 add_child(parent, (yyvsp[-1].node));
                                 (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 2290 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 578 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2296 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 579 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2302 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 580 "kotlin.y" /* yacc.c:1646  */
    {(yyval.node) = make_node("NUL"); }
#line 2308 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 581 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("value");
						 add_string(parent, "ANY");
						 add_string(parent, "OPEN");
						 (yyval.node) = add_string(parent, "CLOSE"); }
#line 2317 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 587 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("mult_ex");
                                  add_child(parent, (yyvsp[-2].node));
                                  add_child(parent, (yyvsp[-1].node));
                                  (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 2326 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 591 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("mult_ex");
                             add_child(parent, (yyvsp[-1].node));
							 (yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 2334 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 594 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("STRING"); }
#line 2340 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 595 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2346 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 598 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("NUMBER"); }
#line 2352 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 599 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("factor");
		    						(yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 2359 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 601 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("factor");
											(yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 2366 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 603 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("factor");
                            add_child(parent, (yyvsp[-1].node));
                            (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 2374 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 606 "kotlin.y" /* yacc.c:1646  */
    { parse_node* parent = make_node("factor");
                           add_string(parent, "OPEN");
                           add_child(parent, (yyvsp[-1].node));
                           (yyval.node) = add_string(parent, "CLOSE"); }
#line 2383 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 612 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("object_ex");
							 add_child(parent, (yyvsp[-1].node));
 							  (yyval.node) =  add_child(parent, (yyvsp[0].node)); }
#line 2391 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 615 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("object_ex");
								add_child(parent, (yyvsp[-1].node));
								(yyval.node) = add_child(parent, (yyvsp[0].node)); }
#line 2399 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 618 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("object_ex");
	 					add_child(parent, (yyvsp[-1].node));
						(yyval.node) = add_string(parent, "ID"); }
#line 2407 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 621 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("object_ex");
					   add_child(parent, (yyvsp[-1].node));
					   (yyval.node) = add_string(parent, "ID");}
#line 2415 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 624 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("object_ex");
				(yyval.node) = add_string(parent, "ID"); }
#line 2422 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 628 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("members");
						   add_child(parent, (yyvsp[-1].node));
						   (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 2430 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 631 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("members");
                     (yyval.node) = add_child(parent, (yyvsp[0].node));}
#line 2437 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 636 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("member");
				  add_string(parent, "ID");
                  (yyval.node) = add_string(parent, "INCL"); }
#line 2445 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 648 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("INCR"); }
#line 2451 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 649 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("DECR"); }
#line 2457 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 650 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("EXCL"); }
#line 2463 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 651 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("PLUS"); }
#line 2469 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 652 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("MINUS"); }
#line 2475 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 655 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("INCR"); }
#line 2481 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 656 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("DECR"); }
#line 2487 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 659 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("PLUS_ASSIGNMENT"); }
#line 2493 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 660 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("MINUS_ASSIGNMENT"); }
#line 2499 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 661 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("MULT_ASSIGNMENT"); }
#line 2505 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 662 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("DIV_ASSIGNMENT"); }
#line 2511 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 663 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("MOD_ASSIGNMENT"); }
#line 2517 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 664 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("ASSIGNMENT"); }
#line 2523 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 667 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("LANGLE"); }
#line 2529 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 668 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("RANGLE"); }
#line 2535 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 669 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("LE"); }
#line 2541 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 670 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("GE"); }
#line 2547 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 673 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("IN"); }
#line 2553 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 674 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("NOTIN"); }
#line 2559 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 677 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("IS"); }
#line 2565 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 678 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("NOTIS"); }
#line 2571 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 681 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("PLUS"); }
#line 2577 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 682 "kotlin.y" /* yacc.c:1646  */
    {(yyval.node) = make_node("MINUS"); }
#line 2583 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 685 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("MOD"); }
#line 2589 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 686 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("MULT"); }
#line 2595 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 687 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("DIV"); }
#line 2601 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 690 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("EQEQ"); }
#line 2607 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 691 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("EQEQEQ"); }
#line 2613 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 692 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("EXCL_EQ"); }
#line 2619 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 693 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("EXCL_EQEQ"); }
#line 2625 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 696 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("AND"); }
#line 2631 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 697 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("OR"); }
#line 2637 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 700 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("VAR"); }
#line 2643 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 701 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("VAL"); }
#line 2649 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 704 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("new_line"); }
#line 2655 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 705 "kotlin.y" /* yacc.c:1646  */
    {(yyval.node) = make_node("new_line"); }
#line 2661 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 710 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2667 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 711 "kotlin.y" /* yacc.c:1646  */
    { parse_node *parent = make_node("type_ex");
		 										 add_child(parent, (yyvsp[-1].node));
											 	 (yyval.node) = add_string(parent, "NULLABLE");}
#line 2675 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 715 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("BYTE"); }
#line 2681 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 716 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("SHORT"); }
#line 2687 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 717 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("INT"); }
#line 2693 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 718 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("LONG"); }
#line 2699 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 719 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("FLOAT"); }
#line 2705 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 720 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("DOUBLE"); }
#line 2711 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 721 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("STR"); }
#line 2717 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 722 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("BOOL"); }
#line 2723 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 723 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("UNIT"); }
#line 2729 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 724 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("ANY"); }
#line 2735 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 727 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("LISTOF"); }
#line 2741 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 728 "kotlin.y" /* yacc.c:1646  */
    { (yyval.node) = make_node("SETOF"); }
#line 2747 "kotlin.tab.c" /* yacc.c:1646  */
    break;


#line 2751 "kotlin.tab.c" /* yacc.c:1646  */
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
#line 731 "kotlin.y" /* yacc.c:1906  */

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
