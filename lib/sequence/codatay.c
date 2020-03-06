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
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         codataparse
#define yylex           codatalex
#define yyerror         codataerror
#define yydebug         codatadebug
#define yynerrs         codatanerrs


/* Copy the first part of user declarations.  */
#line 3 "sequence/codatay.y" /* yacc.c:339  */

#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include <stdlib.h>

#include "sequence.h"
#include "sequence/parse.h"
#include "sequence/codatay.h"

void codataset_in(FILE *);
int codatalex(YYSTYPE *);
int codatalex_destroy(void);

static void yyerror(sequence_t *, const char *);

sequence_t *codatay_parse(FILE *);
int codatay_check(FILE *);

#line 93 "sequence/codatay.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
#ifndef YY_CODATA_SEQUENCE_CODATAY_H_INCLUDED
# define YY_CODATA_SEQUENCE_CODATAY_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int codatadebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    CNT = 258,
    EOL = 259,
    ERR = 260,
    INT = 261,
    NUL = 262,
    NXT = 263,
    SEP = 264,
    SPC = 265,
    TXT = 266,
    EN = 267,
    ENTXT = 268,
    ENNAM = 269,
    TI = 270,
    TITXT = 271,
    AL = 272,
    CT = 273,
    OR = 274,
    DA = 275,
    AC = 276,
    ACNUM = 277,
    RE = 278,
    CO = 279,
    GE = 280,
    FU = 281,
    CX = 282,
    CL = 283,
    KE = 284,
    FE = 285,
    SU = 286,
    SE = 287,
    SN = 288,
    SEQ = 289,
    BAS = 290,
    END = 291
  };
#endif
/* Tokens.  */
#define CNT 258
#define EOL 259
#define ERR 260
#define INT 261
#define NUL 262
#define NXT 263
#define SEP 264
#define SPC 265
#define TXT 266
#define EN 267
#define ENTXT 268
#define ENNAM 269
#define TI 270
#define TITXT 271
#define AL 272
#define CT 273
#define OR 274
#define DA 275
#define AC 276
#define ACNUM 277
#define RE 278
#define CO 279
#define GE 280
#define FU 281
#define CX 282
#define CL 283
#define KE 284
#define FE 285
#define SU 286
#define SE 287
#define SN 288
#define SEQ 289
#define BAS 290
#define END 291

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 28 "sequence/codatay.y" /* yacc.c:355  */
 char *str; 

#line 208 "sequence/codatay.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int codataparse (sequence_t *seq);

#endif /* !YY_CODATA_SEQUENCE_CODATAY_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 224 "sequence/codatay.c" /* yacc.c:358  */

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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   160

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  96
/* YYNRULES -- Number of rules.  */
#define YYNRULES  149
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  231

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   291

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
      35,    36
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    60,    60,    61,    64,    67,    68,    69,    71,    71,
      73,    73,    74,    74,    75,    76,    77,    78,    81,    81,
      82,    82,    83,    84,    85,    85,    87,    87,    88,    88,
      89,    90,    91,    91,    93,    93,    94,    94,    95,    96,
      97,    97,    99,    99,   100,   100,   101,   102,   103,   103,
     105,   105,   105,   106,   106,   107,   108,   109,   110,   111,
     112,   115,   115,   116,   117,   117,   118,   119,   120,   120,
     122,   122,   123,   124,   124,   125,   126,   127,   127,   129,
     129,   130,   131,   131,   132,   132,   133,   134,   134,   136,
     136,   137,   138,   138,   139,   140,   141,   141,   143,   143,
     144,   145,   145,   146,   146,   147,   148,   148,   150,   150,
     151,   151,   152,   153,   154,   154,   156,   156,   157,   157,
     158,   159,   160,   160,   162,   162,   163,   163,   164,   165,
     166,   166,   168,   170,   172,   172,   173,   173,   175,   177,
     178,   178,   180,   180,   181,   182,   183,   185,   185,   187
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CNT", "EOL", "ERR", "INT", "NUL", "NXT",
  "SEP", "SPC", "TXT", "EN", "ENTXT", "ENNAM", "TI", "TITXT", "AL", "CT",
  "OR", "DA", "AC", "ACNUM", "RE", "CO", "GE", "FU", "CX", "CL", "KE",
  "FE", "SU", "SE", "SN", "SEQ", "BAS", "END", "$accept", "codata",
  "annots", "entry", "enline", "ennam", "entxt", "title", "tilines",
  "tiline1", "tiline2", "titxt", "altnam", "allines", "alline1", "alline2",
  "altxt", "contain", "ctlines", "ctline1", "ctline2", "cttxt", "organi",
  "orlines", "orline1", "orline2", "ortxt", "date", "dalines", "daline1",
  "daline2", "datxt", "access", "aclines", "acline", "acline1", "acline2",
  "acline3", "aclist", "refs", "refent", "relines", "reline1", "reline2",
  "retxt", "comms", "coment", "colines", "coline1", "coline2", "cotxt",
  "genetic", "genent", "gelines", "geline1", "geline2", "getxt", "complex",
  "cmpent", "cxlines", "cxline1", "cxline2", "cxtxt", "function", "funent",
  "fulines", "fuline1", "fuline2", "futxt", "classif", "cllines",
  "clline1", "clline2", "cltxt", "kwords", "kelines", "keline1", "keline2",
  "ketxt", "feats", "felines", "feline1", "feline2", "fetxt", "sequence",
  "seqhead", "suline", "sutxt", "seline", "snline", "snlist", "seqdata",
  "seqline", "seqlist", "seqsep", "end", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291
};
# endif

#define YYPACT_NINF -74

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-74)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      63,   -74,    -9,    68,    48,    57,   -74,   -74,   -74,   -74,
      49,    37,    40,    50,    62,    59,   -74,    -2,   -74,    -1,
      73,   -74,    74,    40,   -74,    77,    51,   -74,    -4,    72,
      67,   -74,    78,   -74,   -74,   -74,   -74,   -74,    79,   -74,
     -74,    81,   -74,   -74,   -74,   -74,     3,    80,    70,   -74,
      82,    62,   -74,    64,    83,   -74,    61,   -74,   -74,   -74,
       4,    84,    76,   -74,    85,    72,   -74,    -3,   -74,    65,
      90,   -74,    91,   -74,   -74,   -74,     5,    87,    86,    93,
      94,    80,   -74,    13,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,    14,    88,   -74,   -74,   -74,    87,    93,   -74,    84,
     -74,    15,   -74,   -74,   -74,   -74,    58,    89,    95,    16,
     -74,    17,   -74,   100,   -74,    92,    97,   -74,    98,    96,
      88,   -74,   -74,   -74,   -74,   -74,   -74,   -74,    18,    97,
      98,   -74,   102,   -74,   -74,    99,    60,   -74,   -74,    19,
     -74,   -74,    27,   101,    28,   -74,   103,   104,   111,   -74,
     -74,   -74,   -74,   102,   -74,   -74,   -74,    29,   105,   103,
     -74,   106,   -74,   -74,   -22,   -74,    30,   -74,   -74,    31,
     -74,   -74,    32,   110,    33,   108,   -74,   -74,   107,   -74,
     -74,   -74,   -74,   -74,   106,   -74,   -74,   -74,    41,   -74,
      42,   113,   112,    75,   -74,   114,    43,   -74,   -74,   -74,
     -74,   115,   -74,   -74,    44,   121,   -74,   119,   120,   108,
     -74,   -74,    45,   -74,   -74,   -74,   118,   119,   -74,   112,
     -74,    46,   -74,   -74,    47,   -74,    55,   -74,   -74,   -74,
     -74
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     3,     0,     0,   135,    11,     5,     7,     9,     1,
       0,     0,     0,     0,     0,    19,    13,     0,   137,     0,
       0,     2,     0,   132,   143,     0,     0,    17,     0,     0,
      27,    21,    10,     6,     8,   134,   136,   149,     0,   142,
     138,     0,   133,    14,    16,    25,     0,     0,    35,    29,
      18,     0,    12,     0,   148,   141,     0,    22,    24,    33,
       0,     0,    43,    37,    26,     0,    20,     0,   146,   147,
       0,   139,     0,    30,    32,    41,     0,     0,    52,     0,
      34,     0,    28,     0,    15,   145,   144,   140,    38,    40,
      49,     0,     0,    62,    51,    54,     0,    42,    45,     0,
      36,     0,    23,    46,    48,    60,     0,    71,     0,     0,
      44,     0,    31,     0,    55,     0,     0,    61,     0,    80,
       0,    53,    50,    47,    39,    56,    59,    69,     0,     0,
      63,    65,     0,    70,    74,    90,     0,    66,    68,     0,
      64,    78,     0,    72,     0,    79,     0,    99,     0,    58,
      67,    75,    77,     0,    73,    85,    88,     0,     0,    81,
      83,     0,    89,    93,   109,    57,     0,    84,    87,     0,
      82,    97,     0,    91,     0,     0,    98,   102,   117,   111,
      76,    86,    94,    96,     0,    92,   104,   107,     0,   115,
       0,   100,     0,   125,   119,   108,     0,   103,   106,   112,
     114,     0,   101,   123,     0,     0,     4,     0,   116,     0,
     110,    95,     0,   120,   122,   128,     0,   124,   127,     0,
     118,     0,   105,   131,     0,   126,     0,   113,   129,   130,
     121
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   109,   -74,   -74,   -74,   -74,    69,   -74,   -74,   -74,
     -74,    52,   -74,   -74,   -74,   -74,    36,   -74,   -74,   -74,
      35,    34,   -74,   -74,   -74,   -74,   -74,   -74,    20,   -74,
     -74,   -74,   -74,     7,     9,   -74,   -74,   -74,   -74,   -74,
     -14,   -74,   -74,   -74,   -74,   -18,   -16,   -74,   -74,   -74,
     -74,   -74,   -41,   -74,   -74,   -74,   -74,   -74,   -57,   -74,
     -74,   -74,   -74,   -64,   -74,   -74,   -74,   -74,   -73,   -74,
     -74,   -74,   -70,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   125,   -74,   -74,   -74
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     6,     8,    17,    15,    32,    16,
      52,    28,    30,    50,    31,    66,    46,    48,    64,    49,
      82,    60,    62,    80,    63,   100,    76,    78,    97,    79,
      98,    91,    93,   108,    94,    95,   121,   122,   106,   107,
     117,   130,   118,   131,   128,   119,   133,   143,   134,   154,
     142,   135,   145,   159,   146,   160,   157,   147,   162,   173,
     163,   185,   172,   164,   176,   191,   177,   202,   188,   178,
     195,   179,   210,   190,   193,   208,   194,   220,   204,   206,
     217,   207,   218,   224,    11,    12,    13,    19,    26,    42,
      56,    23,    24,    54,    70,    21
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      43,    84,    33,    35,   174,     7,   175,    57,    73,    88,
      36,    34,    44,    44,    58,    74,    89,   102,   103,   112,
     123,   124,   137,   150,    58,   104,    74,   104,    89,   138,
     138,   151,   155,   167,   180,   181,   182,   186,   152,   156,
     168,   152,   168,   183,   187,   197,   199,   211,   213,   222,
     227,   228,   198,   200,   183,   214,   198,   200,   229,   230,
      18,   113,   114,   148,   149,    71,   214,   115,     9,   115,
       1,    72,    14,    20,    22,     2,    29,    37,    27,    10,
      38,    40,    25,    45,    41,    47,    51,    55,    53,    61,
      65,    59,    69,    81,    86,    75,    77,    87,    90,    68,
      85,    96,    99,   120,   125,   205,   129,    92,   127,   153,
     105,   158,   116,   141,   126,   165,   156,   171,   184,   189,
     132,   201,   209,   203,   144,   215,   187,   216,   219,   223,
     109,   161,   110,   101,    83,   111,   192,   140,   139,   166,
     136,   170,   169,   196,   212,   221,   226,   225,    39,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      67
};

static const yytype_int16 yycheck[] =
{
       4,     4,     4,     4,    26,    14,    28,     4,     4,     4,
      11,    13,    16,    16,    11,    11,    11,     4,     4,     4,
       4,     4,     4,     4,    11,    11,    11,    11,    11,    11,
      11,     4,     4,     4,     4,     4,     4,     4,    11,    11,
      11,    11,    11,    11,    11,     4,     4,     4,     4,     4,
       4,     4,    11,    11,    11,    11,    11,    11,    11,     4,
      11,     3,     4,     3,     4,     4,    11,     9,     0,     9,
       7,    10,    15,    36,    34,    12,    17,     4,    16,    31,
       6,     4,    32,    11,    33,    18,     8,     6,     9,    19,
       8,    11,     9,     8,     4,    11,    20,     6,    11,    35,
      35,     8,     8,     8,     4,    30,     8,    21,    11,     8,
      22,     8,    23,    11,    22,     4,    11,    11,     8,    11,
      24,     8,     8,    11,    25,     4,    11,     8,     8,    11,
      96,    27,    97,    81,    65,    99,    29,   130,   129,   153,
     120,   159,   158,   184,   201,   209,   219,   217,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,    12,    38,    39,    40,    41,    14,    42,     0,
      31,   121,   122,   123,    15,    44,    46,    43,    11,   124,
      36,   132,    34,   128,   129,    32,   125,    16,    48,    17,
      49,    51,    45,     4,    13,     4,    11,     4,     6,   129,
       4,    33,   126,     4,    16,    11,    53,    18,    54,    56,
      50,     8,    47,     9,   130,     6,   127,     4,    11,    11,
      58,    19,    59,    61,    55,     8,    52,    48,    35,     9,
     131,     4,    10,     4,    11,    11,    63,    20,    64,    66,
      60,     8,    57,    53,     4,    35,     4,     6,     4,    11,
      11,    68,    21,    69,    71,    72,     8,    65,    67,     8,
      62,    58,     4,     4,    11,    22,    75,    76,    70,    68,
      67,    63,     4,     3,     4,     9,    23,    77,    79,    82,
       8,    73,    74,     4,     4,     4,    22,    11,    81,     8,
      78,    80,    24,    83,    85,    88,    75,     4,    11,    81,
      80,    11,    87,    84,    25,    89,    91,    94,     3,     4,
       4,     4,    11,     8,    86,     4,    11,    93,     8,    90,
      92,    27,    95,    97,   100,     4,    87,     4,    11,    93,
      92,    11,    99,    96,    26,    28,   101,   103,   106,   108,
       4,     4,     4,    11,     8,    98,     4,    11,   105,    11,
     110,   102,    29,   111,   113,   107,    99,     4,    11,     4,
      11,     8,   104,    11,   115,    30,   116,   118,   112,     8,
     109,     4,   105,     4,    11,     4,     8,   117,   119,     8,
     114,   110,     4,    11,   120,   119,   115,     4,     4,    11,
       4
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    37,    38,    38,    39,    40,    41,    42,    43,    43,
      44,    44,    45,    45,    46,    47,    48,    48,    49,    49,
      50,    50,    51,    52,    53,    53,    54,    54,    55,    55,
      56,    57,    58,    58,    59,    59,    60,    60,    61,    62,
      63,    63,    64,    64,    65,    65,    66,    67,    68,    68,
      69,    69,    69,    70,    70,    71,    72,    73,    74,    75,
      75,    76,    76,    77,    78,    78,    79,    80,    81,    81,
      82,    82,    83,    84,    84,    85,    86,    87,    87,    88,
      88,    89,    90,    90,    91,    91,    92,    93,    93,    94,
      94,    95,    96,    96,    97,    98,    99,    99,   100,   100,
     101,   102,   102,   103,   103,   104,   105,   105,   106,   106,
     107,   107,   108,   109,   110,   110,   111,   111,   112,   112,
     113,   114,   115,   115,   116,   116,   117,   117,   118,   119,
     120,   120,   121,   122,   123,   123,   124,   124,   125,   126,
     127,   127,   128,   128,   129,   130,   130,   131,   131,   132
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     1,    15,     1,     4,     1,     2,     0,
       2,     0,     2,     0,     3,     3,     2,     1,     2,     0,
       2,     0,     3,     3,     2,     1,     2,     0,     2,     0,
       3,     3,     2,     1,     2,     0,     2,     0,     3,     3,
       2,     1,     2,     0,     2,     1,     3,     3,     2,     1,
       3,     1,     0,     2,     0,     3,     4,     4,     3,     3,
       1,     2,     0,     2,     2,     1,     3,     3,     2,     1,
       2,     0,     2,     2,     0,     3,     3,     2,     1,     2,
       0,     2,     2,     1,     3,     2,     3,     2,     1,     2,
       0,     2,     2,     0,     3,     3,     2,     1,     2,     0,
       2,     2,     0,     3,     2,     3,     2,     1,     2,     0,
       2,     0,     3,     3,     2,     1,     2,     0,     2,     0,
       3,     3,     2,     1,     2,     0,     2,     1,     2,     3,
       2,     1,     2,     3,     3,     0,     2,     1,     2,     3,
       3,     1,     2,     1,     5,     3,     2,     1,     0,     2
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
      yyerror (seq, YY_("syntax error: cannot back up")); \
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
                  Type, Value, seq); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, sequence_t *seq)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (seq);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, sequence_t *seq)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, seq);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule, sequence_t *seq)
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
                                              , seq);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, seq); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, sequence_t *seq)
{
  YYUSE (yyvaluep);
  YYUSE (seq);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
          case 14: /* ENNAM  */
#line 29 "sequence/codatay.y" /* yacc.c:1257  */
      { free(((*yyvaluep).str)); }
#line 1222 "sequence/codatay.c" /* yacc.c:1257  */
        break;

    case 16: /* TITXT  */
#line 29 "sequence/codatay.y" /* yacc.c:1257  */
      { free(((*yyvaluep).str)); }
#line 1228 "sequence/codatay.c" /* yacc.c:1257  */
        break;

    case 22: /* ACNUM  */
#line 29 "sequence/codatay.y" /* yacc.c:1257  */
      { free(((*yyvaluep).str)); }
#line 1234 "sequence/codatay.c" /* yacc.c:1257  */
        break;

    case 35: /* BAS  */
#line 29 "sequence/codatay.y" /* yacc.c:1257  */
      { free(((*yyvaluep).str)); }
#line 1240 "sequence/codatay.c" /* yacc.c:1257  */
        break;


      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (sequence_t *seq)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs;

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
      yychar = yylex (&yylval);
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
#line 60 "sequence/codatay.y" /* yacc.c:1646  */
    { return 0;  /*NOTREACHED*/ }
#line 1508 "sequence/codatay.c" /* yacc.c:1646  */
    break;

  case 3:
#line 61 "sequence/codatay.y" /* yacc.c:1646  */
    { return -1; /*NOTREACHED*/ }
#line 1514 "sequence/codatay.c" /* yacc.c:1646  */
    break;

  case 7:
#line 69 "sequence/codatay.y" /* yacc.c:1646  */
    { parse_namadd(seq, (yyvsp[0].str)); }
#line 1520 "sequence/codatay.c" /* yacc.c:1646  */
    break;

  case 16:
#line 77 "sequence/codatay.y" /* yacc.c:1646  */
    { parse_dscadd2(seq, (yyvsp[0].str)); }
#line 1526 "sequence/codatay.c" /* yacc.c:1646  */
    break;

  case 17:
#line 78 "sequence/codatay.y" /* yacc.c:1646  */
    { parse_dscadd1(seq, (yyvsp[0].str)); }
#line 1532 "sequence/codatay.c" /* yacc.c:1646  */
    break;

  case 59:
#line 111 "sequence/codatay.y" /* yacc.c:1646  */
    { parse_accadd(seq, (yyvsp[0].str)); }
#line 1538 "sequence/codatay.c" /* yacc.c:1646  */
    break;

  case 60:
#line 112 "sequence/codatay.y" /* yacc.c:1646  */
    { parse_accadd(seq, (yyvsp[0].str)); }
#line 1544 "sequence/codatay.c" /* yacc.c:1646  */
    break;

  case 145:
#line 182 "sequence/codatay.y" /* yacc.c:1646  */
    { parse_stradd(seq, (yyvsp[0].str)); }
#line 1550 "sequence/codatay.c" /* yacc.c:1646  */
    break;

  case 146:
#line 183 "sequence/codatay.y" /* yacc.c:1646  */
    { parse_stradd(seq, (yyvsp[0].str)); }
#line 1556 "sequence/codatay.c" /* yacc.c:1646  */
    break;


#line 1560 "sequence/codatay.c" /* yacc.c:1646  */
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
      yyerror (seq, YY_("syntax error"));
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
        yyerror (seq, yymsgp);
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
                      yytoken, &yylval, seq);
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
                  yystos[yystate], yyvsp, seq);
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
  yyerror (seq, YY_("memory exhausted"));
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
                  yytoken, &yylval, seq);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, seq);
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
#line 189 "sequence/codatay.y" /* yacc.c:1906  */



/* Checks CODATA sequence */
int codatay_check(FILE *f) {
  int i;

  codataset_in(f);

  i = yyparse(NULL);
  if (i == 0) { return i; }

  codatalex_destroy();

  return i; }


/* Parse CODATA sequence */
sequence_t *codatay_parse(FILE *f) {
  int i;
  sequence_t *seq;

  seq = sequence_new();
  if (seq == NULL) { return seq; }
  codataset_in(f);

  i = yyparse((void *)seq);
  if (i == 0) { return seq; }

  codatalex_destroy();
  sequence_free(seq);

  return NULL; }


/* Helpers ... */

/*ARGSUSED*/
static void yyerror(sequence_t *seq, const char *s) { return; }
