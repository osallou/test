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
#define yyparse         genbankparse
#define yylex           genbanklex
#define yyerror         genbankerror
#define yydebug         genbankdebug
#define yynerrs         genbanknerrs


/* Copy the first part of user declarations.  */
#line 3 "sequence/genbanky.y" /* yacc.c:339  */

#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include <stdlib.h>
#include <string.h>

#include "sequence.h"
#include "sequence/parse.h"
#include "sequence/genbanky.h"

void genbankset_in(FILE *);
int genbanklex(YYSTYPE *);
int genbanklex_destroy(void);

static void yyerror(sequence_t *, const char *);

int genbanky_check(FILE *);
sequence_t *genbanky_parse(FILE *);

#line 94 "sequence/genbanky.c" /* yacc.c:339  */

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
#ifndef YY_GENBANK_SEQUENCE_GENBANKY_H_INCLUDED
# define YY_GENBANK_SEQUENCE_GENBANKY_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int genbankdebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    EOL = 258,
    ERR = 259,
    INT = 260,
    NUL = 261,
    NUM = 262,
    SPC = 263,
    TXT = 264,
    NXT = 265,
    SEP = 266,
    SEP2 = 267,
    TER = 268,
    LO = 269,
    LONAM = 270,
    DE = 271,
    DETXT = 272,
    DA = 273,
    AC = 274,
    ACNUM = 275,
    VE = 276,
    GI = 277,
    VENUM = 278,
    GINUM = 279,
    PJ = 280,
    LN = 281,
    DB = 282,
    KE = 283,
    KWORD = 284,
    SE = 285,
    SO = 286,
    OG = 287,
    RE = 288,
    RA = 289,
    RC = 290,
    RT = 291,
    RJ = 292,
    RM = 293,
    RP = 294,
    RR = 295,
    CO = 296,
    PR = 297,
    FE = 298,
    BC = 299,
    WE = 300,
    PI = 301,
    LE = 302,
    OR = 303,
    WGS = 304,
    SCA = 305,
    CON = 306,
    SEQ = 307,
    SEQBAS = 308,
    END = 309
  };
#endif
/* Tokens.  */
#define EOL 258
#define ERR 259
#define INT 260
#define NUL 261
#define NUM 262
#define SPC 263
#define TXT 264
#define NXT 265
#define SEP 266
#define SEP2 267
#define TER 268
#define LO 269
#define LONAM 270
#define DE 271
#define DETXT 272
#define DA 273
#define AC 274
#define ACNUM 275
#define VE 276
#define GI 277
#define VENUM 278
#define GINUM 279
#define PJ 280
#define LN 281
#define DB 282
#define KE 283
#define KWORD 284
#define SE 285
#define SO 286
#define OG 287
#define RE 288
#define RA 289
#define RC 290
#define RT 291
#define RJ 292
#define RM 293
#define RP 294
#define RR 295
#define CO 296
#define PR 297
#define FE 298
#define BC 299
#define WE 300
#define PI 301
#define LE 302
#define OR 303
#define WGS 304
#define SCA 305
#define CON 306
#define SEQ 307
#define SEQBAS 308
#define END 309

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 29 "sequence/genbanky.y" /* yacc.c:355  */
 char *str; int num; 

#line 245 "sequence/genbanky.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int genbankparse (sequence_t *seq);

#endif /* !YY_GENBANK_SEQUENCE_GENBANKY_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 261 "sequence/genbanky.c" /* yacc.c:358  */

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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   292

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  149
/* YYNRULES -- Number of rules.  */
#define YYNRULES  240
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  378

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   309

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    74,    74,    75,    76,    77,    80,    81,    82,    84,
      84,    85,    86,    86,    86,    86,    88,    89,    91,    91,
      91,    93,    93,    93,    94,    94,    95,    95,    96,    97,
      98,    99,   100,   103,   104,   105,   105,   107,   107,   108,
     108,   109,   110,   111,   112,   115,   115,   116,   117,   119,
     121,   122,   125,   125,   125,   125,   125,   127,   128,   129,
     129,   131,   132,   132,   133,   134,   135,   135,   137,   138,
     138,   139,   140,   141,   141,   143,   143,   143,   144,   144,
     145,   145,   146,   147,   149,   150,   152,   153,   154,   155,
     158,   158,   159,   160,   160,   162,   162,   163,   163,   163,
     165,   166,   166,   167,   168,   169,   169,   171,   172,   172,
     173,   174,   175,   175,   177,   177,   178,   180,   181,   181,
     182,   183,   184,   184,   186,   186,   187,   187,   188,   189,
     190,   190,   192,   192,   193,   193,   194,   195,   196,   196,
     198,   198,   199,   199,   200,   201,   202,   202,   204,   204,
     205,   205,   206,   207,   208,   208,   210,   210,   211,   212,
     212,   214,   214,   215,   216,   216,   218,   218,   219,   219,
     220,   221,   222,   222,   224,   224,   225,   225,   226,   227,
     228,   228,   230,   230,   231,   231,   232,   233,   234,   234,
     236,   236,   237,   237,   238,   239,   240,   240,   242,   242,
     243,   244,   244,   246,   247,   249,   249,   250,   252,   253,
     255,   256,   257,   257,   259,   260,   261,   261,   263,   263,
     264,   265,   266,   269,   270,   270,   271,   272,   273,   273,
     275,   275,   276,   277,   277,   279,   279,   280,   281,   281,
     283
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "EOL", "ERR", "INT", "NUL", "NUM", "SPC",
  "TXT", "NXT", "SEP", "SEP2", "TER", "LO", "LONAM", "DE", "DETXT", "DA",
  "AC", "ACNUM", "VE", "GI", "VENUM", "GINUM", "PJ", "LN", "DB", "KE",
  "KWORD", "SE", "SO", "OG", "RE", "RA", "RC", "RT", "RJ", "RM", "RP",
  "RR", "CO", "PR", "FE", "BC", "WE", "PI", "LE", "OR", "WGS", "SCA",
  "CON", "SEQ", "SEQBAS", "END", "$accept", "genbank", "gbannots",
  "gpannots", "rfannots", "gbsequence", "gpsequence", "rfsequence",
  "locus", "loline", "lotxt", "defs", "delines", "deline", "deline1",
  "deline2", "deline3", "detxt", "date", "daline", "datxt", "access",
  "aclines", "acline1", "acline2", "aclist", "vers", "veline", "vetxt",
  "gitxt", "rfsrc", "proj", "pjline", "pjtxt", "dblnk", "lnlines",
  "lnline1", "lnline2", "lntxt", "dbsrc", "dblines", "dbline1", "dbline2",
  "dbtxt", "kwrds", "kelines", "keline", "keline1", "keline2", "keline3",
  "kwlist", "segmt", "seline", "setxt", "orga", "orgent", "orgsou",
  "solines", "soline1", "soline2", "sotxt", "orggan", "oglines", "ogline1",
  "ogline2", "ogtxt", "refs", "refent", "refnum", "relines", "reline1",
  "reline2", "retxt", "refaut", "ralines", "raline1", "raline2", "ratxt",
  "refcon", "rclines", "rcline1", "rcline2", "rctxt", "reftit", "rtlines",
  "rtline1", "rtline2", "rttxt", "refjou", "rjlines", "rjline1", "rjline2",
  "rjtxt", "refmed", "rmline", "rmtxt", "refpub", "rpline", "rptxt",
  "refrem", "rrlines", "rrline1", "rrline2", "rrtxt", "comm", "colines",
  "coline1", "coline2", "cotxt", "prim", "prlines", "prline1", "prline2",
  "prtxt", "feats", "felines", "feline1", "feline2", "fetxt", "bcount",
  "bcline", "bctxt", "weight", "weline", "piso", "piline", "length",
  "leline", "sequence", "contig", "shotgun", "seqhead", "orline", "ortxt",
  "seqdata", "seqline", "seqlist", "seqcont", "conlines", "conline1",
  "conline2", "contxt", "seqwgs", "wgsline", "wgstxt", "seqsca", "scaline",
  "scatxt", "end", YY_NULLPTR
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
     305,   306,   307,   308,   309
};
# endif

#define YYPACT_NINF -197

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-197)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -1,  -197,    -3,    28,    84,    70,    82,   118,  -197,    35,
    -197,  -197,   131,    89,  -197,  -197,   136,  -197,  -197,  -197,
      89,  -197,   133,    89,  -197,    70,  -197,   -39,  -197,   106,
     119,  -197,  -197,  -197,    22,    39,  -197,    42,   141,  -197,
     137,   136,  -197,   138,  -197,  -197,    43,  -197,  -197,   140,
    -197,    96,  -197,   144,  -197,     1,   142,   130,   134,  -197,
     135,  -197,   145,  -197,  -197,  -197,  -197,  -197,  -197,  -197,
     105,  -197,   131,  -197,  -197,  -197,  -197,    44,  -197,  -197,
    -197,   149,  -197,  -197,    47,  -197,     4,   135,   139,   101,
    -197,   147,   143,  -197,  -197,  -197,   114,    51,  -197,  -197,
    -197,  -197,  -197,  -197,   146,   126,   150,   154,   155,   156,
     158,   -10,   126,   148,  -197,   151,  -197,  -197,  -197,   152,
    -197,  -197,   130,  -197,     3,  -197,   110,  -197,  -197,  -197,
     153,   157,   165,  -197,    52,  -197,    54,  -197,    55,   166,
    -197,    21,   152,  -197,  -197,   160,   161,   163,  -197,  -197,
     167,     6,  -197,   170,  -197,    -5,  -197,   159,  -197,  -197,
    -197,  -197,  -197,  -197,  -197,  -197,  -197,   162,   164,   172,
     177,  -197,   156,  -197,   158,  -197,  -197,    56,    93,   168,
    -197,  -197,  -197,  -197,   175,   176,  -197,  -197,   169,  -197,
    -197,  -197,   171,  -197,  -197,  -197,  -197,  -197,  -197,    93,
      59,    63,  -197,  -197,     8,    27,  -197,    64,  -197,    66,
      67,  -197,   178,   179,   174,   173,  -197,   180,     8,  -197,
    -197,   183,  -197,   181,  -197,   182,  -197,   184,   191,  -197,
    -197,  -197,  -197,  -197,  -197,   175,  -197,   176,  -197,   192,
     189,   185,  -197,  -197,  -197,   182,  -197,    68,   190,   186,
    -197,   188,   193,   187,  -197,  -197,  -197,    71,    75,  -197,
     197,   198,  -197,  -197,    76,   187,  -197,  -197,  -197,    78,
     195,   199,  -197,   196,   183,  -197,  -197,    79,   200,   194,
    -197,   201,  -197,  -197,  -197,   202,  -197,  -197,  -197,  -197,
    -197,    80,   203,   204,  -197,   207,   190,  -197,    83,  -197,
    -197,  -197,    87,   205,  -197,  -197,   208,   193,  -197,  -197,
    -197,  -197,  -197,    88,   211,   206,  -197,   212,   195,  -197,
      90,  -197,  -197,  -197,  -197,    91,   200,  -197,    92,  -197,
    -197,  -197,    95,   214,   209,  -197,   215,   203,  -197,    99,
    -197,  -197,  -197,   100,  -197,  -197,  -197,  -197,   102,   217,
     210,  -197,   211,  -197,   103,  -197,  -197,  -197,  -197,  -197,
     104,   218,  -197,  -197,   107,  -197,  -197,  -197,  -197,   111,
     219,  -197,  -197,  -197,   218,  -197,   112,  -197
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     5,     0,     0,     0,     0,     0,    23,    16,    20,
       1,   217,     0,     0,     9,    10,     0,   214,   211,   225,
       0,    11,     0,     0,    13,    14,    15,   213,   231,     0,
      38,    22,    25,    19,     0,     0,   229,     0,     0,     2,
       0,   210,   219,   223,     3,   234,     0,     4,    12,     0,
     230,   212,   236,     0,    32,     0,     0,     0,    38,    33,
      46,    40,     0,    17,    18,   215,   216,   226,   228,   240,
       0,   218,     0,   224,   232,   233,   239,     0,   235,    27,
      28,     0,    31,    36,     0,    44,     0,    46,     0,    77,
      45,    37,     0,    24,    21,   222,     0,     0,   237,   238,
      26,    34,    35,    41,     0,    77,    49,    51,     0,     0,
       0,     0,    77,    53,    57,    55,    63,    56,    70,    91,
      76,    79,     0,    39,     0,   220,     0,   227,    43,    96,
       0,     0,     0,    60,     0,    67,     0,    74,     0,     0,
      89,     0,    91,    52,    54,    61,    68,     0,    96,    90,
       0,     0,    29,     0,   221,   175,    48,     0,    47,    58,
      59,    64,    66,    71,    73,    81,    83,     0,     0,     0,
       0,    96,     0,    62,     0,    69,    94,     0,   115,     0,
      78,    75,    42,    30,     0,     0,   181,    95,    98,   102,
      99,   109,     0,   177,    50,    88,    87,    82,    80,   115,
       0,     0,    92,    93,   175,     0,   106,     0,   113,     0,
       0,    97,   100,   107,     0,   206,   203,   174,   175,    65,
      72,     0,   114,   125,   119,   183,    85,     0,     0,   103,
     105,   110,   112,   178,   180,     0,   101,     0,   108,     0,
       0,     0,   205,   181,   176,   183,   123,     0,     0,   133,
     127,   117,     0,   191,   185,    84,    86,     0,     0,   204,
       0,     0,     7,   208,     0,   191,   120,   122,   131,     0,
       0,   141,   135,   124,     0,   118,   189,     0,     0,   199,
     193,   182,   104,   111,   207,     0,   179,     8,   128,   130,
     139,     0,     0,   149,   143,   132,     0,   126,     0,   186,
     188,   197,     0,     0,     6,   198,   190,     0,   184,   209,
     136,   138,   147,     0,     0,   157,   151,   140,     0,   134,
       0,   121,   194,   196,   202,     0,     0,   192,     0,   144,
     146,   155,     0,     0,   162,   156,   148,     0,   142,     0,
     129,   200,   201,     0,   187,   152,   154,   160,     0,     0,
     167,   161,     0,   150,     0,   137,   195,   158,   159,   165,
       0,     0,   116,   169,     0,   145,   163,   164,   173,     0,
     166,   153,   170,   172,     0,   168,     0,   171
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -197,  -197,  -197,  -197,  -197,  -197,  -197,  -197,  -197,  -197,
    -197,  -197,  -197,  -197,  -197,  -197,  -197,    94,  -197,  -197,
    -197,   213,  -197,  -197,  -197,    85,   121,  -197,  -197,  -197,
    -197,  -197,  -197,  -197,    97,  -197,  -197,  -197,    41,   113,
    -197,  -197,  -197,    57,   -68,  -197,  -197,  -197,  -197,  -197,
      58,    98,  -197,  -197,  -148,  -197,  -197,  -197,  -197,  -197,
      -2,    46,  -197,  -197,  -197,     2,    37,  -197,  -197,  -197,
    -197,  -197,   -32,  -197,  -197,  -197,  -197,   -53,  -197,  -197,
    -197,  -197,   -73,  -197,  -197,  -197,  -197,   -91,  -197,  -197,
    -197,  -197,  -105,  -197,  -197,  -197,  -197,  -197,  -197,  -197,
    -197,  -197,  -197,  -125,  -196,  -197,  -197,  -197,     9,    10,
    -197,  -197,  -197,   -56,   -12,  -197,  -197,  -197,   -72,  -197,
    -197,  -197,  -197,  -197,  -197,  -197,  -197,  -197,    -4,   250,
    -197,  -197,  -197,  -197,  -197,   216,  -197,  -197,  -197,  -197,
    -197,   220,  -197,   231,  -197,  -197,   221,  -197,   116
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     6,    13,    20,    23,     7,     8,
      34,    30,    62,    31,    32,    93,    94,    55,    58,    59,
      84,    60,    91,    61,   123,    86,    89,    90,   107,   132,
     112,   113,   114,   134,   115,   145,   116,   173,   136,   117,
     146,   118,   175,   138,   119,   150,   120,   121,   180,   181,
     141,   148,   149,   177,   155,   187,   188,   212,   189,   236,
     207,   190,   213,   191,   238,   209,   204,   222,   223,   251,
     224,   275,   247,   249,   273,   250,   297,   269,   271,   295,
     272,   319,   291,   293,   317,   294,   338,   313,   315,   336,
     316,   353,   332,   334,   335,   348,   350,   351,   360,   362,
     370,   363,   375,   369,   192,   217,   193,   244,   210,   253,
     281,   254,   308,   277,   279,   306,   280,   327,   302,   304,
     305,   325,   215,   216,   241,   242,   262,   263,    14,    15,
      26,    16,    17,    35,    41,    42,    96,    18,    43,    19,
      73,    37,    27,    28,    46,    51,    52,    77,    39
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
     178,    21,    24,   139,    80,     1,   152,   103,   225,   182,
      22,    49,     9,     2,    81,   104,   153,   104,    82,   140,
      82,    48,   245,   199,   166,    63,   184,   185,    10,   167,
     226,    64,   168,   169,   170,   167,   186,   129,   168,   227,
     228,   221,    65,    33,   142,    67,    74,    98,    66,   186,
     101,    68,    75,    99,   127,   159,   102,   161,   163,   202,
      68,   160,   219,   162,   164,   203,   220,   229,   162,   231,
     233,   266,   164,   230,   282,   232,   234,   267,   283,   286,
     230,   288,   299,   310,   232,   234,   321,   289,   300,   311,
     322,   329,   267,   340,   341,   344,   323,   330,   345,   289,
     342,   300,   355,   356,   346,   357,   365,   366,   311,   323,
     371,   358,   330,   367,   372,   377,   346,   125,    11,    53,
     373,   373,   126,    54,   184,   185,   108,   109,   110,   111,
      11,    22,    11,    12,    29,    12,    44,    56,    57,    47,
      36,    40,    45,    38,    69,    70,    49,    79,    72,    76,
      85,    83,   100,    57,   111,    92,    88,   122,    95,   106,
      54,   130,   131,   154,   133,   135,   128,   137,   158,   165,
     172,   174,   176,   183,   109,   197,   156,   179,   110,   157,
     198,   239,   147,   194,   206,   208,   124,   255,   235,   237,
     243,   195,   246,   196,   256,   259,   260,   140,   274,   268,
     284,   185,   276,   285,   290,   309,   296,   151,   105,   301,
     143,   307,   312,   200,   324,   248,   214,   318,   326,   240,
     331,   270,   337,   347,   252,   352,   359,   368,   144,   374,
     278,   201,   261,   257,   211,   292,   218,   205,   303,   258,
     171,   314,   298,   320,   333,   339,   354,   364,   349,   376,
     361,   328,   264,   287,   343,   265,    25,    71,    50,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    87,    78,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    97
};

static const yytype_int16 yycheck[] =
{
     148,     5,     6,    13,     3,     6,     3,     3,   204,     3,
      49,    50,    15,    14,    13,    11,    13,    11,    17,    29,
      17,    25,   218,   171,     3,     3,    31,    32,     0,     8,
       3,     9,    11,    12,    13,     8,    41,   105,    11,    12,
      13,    33,     3,     8,   112,     3,     3,     3,     9,    41,
       3,     9,     9,     9,     3,     3,     9,     3,     3,     3,
       9,     9,     3,     9,     9,     9,     3,     3,     9,     3,
       3,     3,     9,     9,     3,     9,     9,     9,     3,     3,
       9,     3,     3,     3,     9,     9,     3,     9,     9,     9,
       3,     3,     9,     3,     3,     3,     9,     9,     3,     9,
       9,     9,     3,     3,     9,     3,     3,     3,     9,     9,
       3,     9,     9,     9,     3,     3,     9,     3,    48,    13,
       9,     9,     8,    17,    31,    32,    25,    26,    27,    28,
      48,    49,    48,    51,    16,    51,    20,    18,    19,    23,
       9,     5,     9,    54,     3,     8,    50,     3,    10,     9,
      20,     9,     3,    19,    28,    10,    21,    10,    53,    20,
      17,    11,     8,    53,     9,     9,    20,     9,     3,     3,
      10,    10,     9,     3,    26,     3,    23,    10,    27,    22,
       3,     7,    30,    24,     9,     9,    92,     3,    10,    10,
      10,    29,     9,    29,     3,     3,     7,    29,    10,     9,
       3,    32,     9,     5,     9,     3,    10,   122,    87,     9,
     113,    10,     9,   172,     9,    34,    45,    10,    10,    46,
       9,    35,    10,     9,    42,    10,     9,     9,   115,    10,
      43,   174,    47,   235,   188,    36,   199,   179,    44,   237,
     142,    37,   274,   296,    38,   318,   337,   352,    39,   374,
      40,   307,   243,   265,   326,   245,     6,    41,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    14,    56,    57,    58,    59,    63,    64,    15,
       0,    48,    51,    60,   183,   184,   186,   187,   192,   194,
      61,   183,    49,    62,   183,   184,   185,   197,   198,    16,
      66,    68,    69,     8,    65,   188,     9,   196,    54,   203,
       5,   189,   190,   193,   203,     9,   199,   203,   183,    50,
     198,   200,   201,    13,    17,    72,    18,    19,    73,    74,
      76,    78,    67,     3,     9,     3,     9,     3,     9,     3,
       8,   190,    10,   195,     3,     9,     9,   202,   201,     3,
       3,    13,    17,     9,    75,    20,    80,    76,    21,    81,
      82,    77,    10,    70,    71,    53,   191,   196,     3,     9,
       3,     3,     9,     3,    11,    81,    20,    83,    25,    26,
      27,    28,    85,    86,    87,    89,    91,    94,    96,    99,
     101,   102,    10,    79,    72,     3,     8,     3,    20,    99,
      11,     8,    84,     9,    88,     9,    93,     9,    98,    13,
      29,   105,    99,    89,    94,    90,    95,    30,   106,   107,
     100,    80,     3,    13,    53,   109,    23,    22,     3,     3,
       9,     3,     9,     3,     9,     3,     3,     8,    11,    12,
      13,   106,    10,    92,    10,    97,     9,   108,   109,    10,
     103,   104,     3,     3,    31,    32,    41,   110,   111,   113,
     116,   118,   159,   161,    24,    29,    29,     3,     3,   109,
      93,    98,     3,     9,   121,   105,     9,   115,     9,   120,
     163,   116,   112,   117,    45,   177,   178,   160,   121,     3,
       3,    33,   122,   123,   125,   159,     3,    12,    13,     3,
       9,     3,     9,     3,     9,    10,   114,    10,   119,     7,
      46,   179,   180,    10,   162,   159,     9,   127,    34,   128,
     130,   124,    42,   164,   166,     3,     3,   115,   120,     3,
       7,    47,   181,   182,   163,   164,     3,     9,     9,   132,
      35,   133,   135,   129,    10,   126,     9,   168,    43,   169,
     171,   165,     3,     3,     3,     5,     3,   169,     3,     9,
       9,   137,    36,   138,   140,   134,    10,   131,   127,     3,
       9,     9,   173,    44,   174,   175,   170,    10,   167,     3,
       3,     9,     9,   142,    37,   143,   145,   139,    10,   136,
     132,     3,     3,     9,     9,   176,    10,   172,   168,     3,
       9,     9,   147,    38,   148,   149,   144,    10,   141,   137,
       3,     3,     9,   173,     3,     3,     9,     9,   150,    39,
     151,   152,    10,   146,   142,     3,     3,     3,     9,     9,
     153,    40,   154,   156,   147,     3,     3,     9,     9,   158,
     155,     3,     3,     9,    10,   157,   158,     3
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    56,    56,    56,    57,    58,    59,    60,
      60,    61,    62,    62,    62,    62,    63,    64,    65,    65,
      65,    66,    66,    66,    67,    67,    68,    68,    69,    70,
      71,    72,    72,    73,    74,    75,    75,    76,    76,    77,
      77,    78,    79,    80,    80,    81,    81,    82,    83,    83,
      84,    84,    85,    85,    85,    85,    85,    86,    87,    88,
      88,    89,    90,    90,    91,    92,    93,    93,    94,    95,
      95,    96,    97,    98,    98,    99,    99,    99,   100,   100,
     101,   101,   102,   102,   103,   103,   104,   105,   105,   105,
     106,   106,   107,   108,   108,   109,   109,   110,   110,   110,
     111,   112,   112,   113,   114,   115,   115,   116,   117,   117,
     118,   119,   120,   120,   121,   121,   122,   123,   124,   124,
     125,   126,   127,   127,   128,   128,   129,   129,   130,   131,
     132,   132,   133,   133,   134,   134,   135,   136,   137,   137,
     138,   138,   139,   139,   140,   141,   142,   142,   143,   143,
     144,   144,   145,   146,   147,   147,   148,   148,   149,   150,
     150,   151,   151,   152,   153,   153,   154,   154,   155,   155,
     156,   157,   158,   158,   159,   159,   160,   160,   161,   162,
     163,   163,   164,   164,   165,   165,   166,   167,   168,   168,
     169,   169,   170,   170,   171,   172,   173,   173,   174,   174,
     175,   176,   176,   177,   178,   179,   179,   180,   181,   182,
     183,   184,   185,   185,   186,   187,   188,   188,   189,   189,
     190,   191,   191,   192,   193,   193,   194,   195,   196,   196,
     197,   197,   198,   199,   199,   200,   200,   201,   202,   202,
     203
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     3,     3,     1,    12,    11,    12,     1,
       1,     1,     2,     1,     1,     1,     1,     4,     2,     1,
       0,     3,     1,     0,     2,     0,     4,     3,     3,     3,
       4,     2,     1,     1,     3,     2,     1,     2,     0,     2,
       0,     3,     3,     3,     1,     1,     0,     4,     3,     1,
       3,     0,     2,     1,     2,     1,     1,     1,     3,     2,
       1,     2,     2,     0,     3,     3,     2,     1,     2,     2,
       0,     3,     3,     2,     1,     3,     1,     0,     2,     0,
       4,     3,     4,     3,     4,     3,     4,     3,     3,     1,
       1,     0,     3,     2,     1,     2,     0,     2,     1,     1,
       2,     2,     0,     3,     3,     2,     1,     2,     2,     0,
       3,     3,     2,     1,     2,     0,     8,     2,     2,     0,
       3,     3,     2,     1,     2,     0,     2,     0,     3,     3,
       2,     1,     2,     0,     2,     0,     3,     3,     2,     1,
       2,     0,     2,     0,     3,     3,     2,     1,     2,     0,
       2,     0,     3,     3,     2,     1,     1,     0,     3,     2,
       1,     1,     0,     3,     2,     1,     2,     0,     2,     0,
       3,     3,     2,     1,     2,     0,     2,     0,     3,     3,
       2,     0,     2,     0,     2,     0,     3,     3,     2,     1,
       2,     0,     2,     0,     3,     3,     2,     1,     1,     0,
       3,     2,     1,     1,     3,     1,     0,     3,     1,     3,
       2,     1,     2,     1,     1,     3,     2,     0,     2,     1,
       4,     3,     1,     2,     2,     0,     3,     3,     2,     1,
       2,     1,     3,     2,     1,     2,     1,     3,     2,     1,
       2
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
          case 15: /* LONAM  */
#line 31 "sequence/genbanky.y" /* yacc.c:1257  */
      { free(((*yyvaluep).str)); }
#line 1380 "sequence/genbanky.c" /* yacc.c:1257  */
        break;

    case 17: /* DETXT  */
#line 31 "sequence/genbanky.y" /* yacc.c:1257  */
      { free(((*yyvaluep).str)); }
#line 1386 "sequence/genbanky.c" /* yacc.c:1257  */
        break;

    case 20: /* ACNUM  */
#line 31 "sequence/genbanky.y" /* yacc.c:1257  */
      { free(((*yyvaluep).str)); }
#line 1392 "sequence/genbanky.c" /* yacc.c:1257  */
        break;

    case 23: /* VENUM  */
#line 30 "sequence/genbanky.y" /* yacc.c:1257  */
      {}
#line 1398 "sequence/genbanky.c" /* yacc.c:1257  */
        break;

    case 24: /* GINUM  */
#line 30 "sequence/genbanky.y" /* yacc.c:1257  */
      {}
#line 1404 "sequence/genbanky.c" /* yacc.c:1257  */
        break;

    case 29: /* KWORD  */
#line 31 "sequence/genbanky.y" /* yacc.c:1257  */
      { free(((*yyvaluep).str)); }
#line 1410 "sequence/genbanky.c" /* yacc.c:1257  */
        break;

    case 53: /* SEQBAS  */
#line 31 "sequence/genbanky.y" /* yacc.c:1257  */
      { free(((*yyvaluep).str)); }
#line 1416 "sequence/genbanky.c" /* yacc.c:1257  */
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
#line 74 "sequence/genbanky.y" /* yacc.c:1646  */
    { return 0;  /*NOTREACHED*/ }
#line 1684 "sequence/genbanky.c" /* yacc.c:1646  */
    break;

  case 3:
#line 75 "sequence/genbanky.y" /* yacc.c:1646  */
    { return 0;  /*NOTREACHED*/ }
#line 1690 "sequence/genbanky.c" /* yacc.c:1646  */
    break;

  case 4:
#line 76 "sequence/genbanky.y" /* yacc.c:1646  */
    { return 0;  /*NOTREACHED*/ }
#line 1696 "sequence/genbanky.c" /* yacc.c:1646  */
    break;

  case 5:
#line 77 "sequence/genbanky.y" /* yacc.c:1646  */
    { return -1; /*NOTREACHED*/ }
#line 1702 "sequence/genbanky.c" /* yacc.c:1646  */
    break;

  case 17:
#line 89 "sequence/genbanky.y" /* yacc.c:1646  */
    { parse_namadd(seq, (yyvsp[-2].str)); }
#line 1708 "sequence/genbanky.c" /* yacc.c:1646  */
    break;

  case 31:
#line 99 "sequence/genbanky.y" /* yacc.c:1646  */
    { parse_dscadd2(seq, (yyvsp[0].str)); }
#line 1714 "sequence/genbanky.c" /* yacc.c:1646  */
    break;

  case 32:
#line 100 "sequence/genbanky.y" /* yacc.c:1646  */
    { parse_dscadd1(seq, (yyvsp[0].str)); }
#line 1720 "sequence/genbanky.c" /* yacc.c:1646  */
    break;

  case 43:
#line 111 "sequence/genbanky.y" /* yacc.c:1646  */
    { parse_accadd(seq, (yyvsp[0].str)); }
#line 1726 "sequence/genbanky.c" /* yacc.c:1646  */
    break;

  case 44:
#line 112 "sequence/genbanky.y" /* yacc.c:1646  */
    { parse_accadd(seq, (yyvsp[0].str)); }
#line 1732 "sequence/genbanky.c" /* yacc.c:1646  */
    break;

  case 48:
#line 117 "sequence/genbanky.y" /* yacc.c:1646  */
    { parse_nuladd(seq, (yyvsp[-2].str));
                                                       parse_veradd(seq, (yyvsp[0].num)); }
#line 1739 "sequence/genbanky.c" /* yacc.c:1646  */
    break;

  case 50:
#line 121 "sequence/genbanky.y" /* yacc.c:1646  */
    { parse_giadd(seq, (yyvsp[0].num)); }
#line 1745 "sequence/genbanky.c" /* yacc.c:1646  */
    break;

  case 82:
#line 146 "sequence/genbanky.y" /* yacc.c:1646  */
    { parse_kwdadd2(seq, strdup("")); }
#line 1751 "sequence/genbanky.c" /* yacc.c:1646  */
    break;

  case 84:
#line 149 "sequence/genbanky.y" /* yacc.c:1646  */
    { parse_kwdadd2(seq, strdup("")); }
#line 1757 "sequence/genbanky.c" /* yacc.c:1646  */
    break;

  case 87:
#line 153 "sequence/genbanky.y" /* yacc.c:1646  */
    { parse_kwdadd2(seq, (yyvsp[0].str)); }
#line 1763 "sequence/genbanky.c" /* yacc.c:1646  */
    break;

  case 88:
#line 154 "sequence/genbanky.y" /* yacc.c:1646  */
    { parse_kwdupd2(seq, (yyvsp[0].str)); }
#line 1769 "sequence/genbanky.c" /* yacc.c:1646  */
    break;

  case 89:
#line 155 "sequence/genbanky.y" /* yacc.c:1646  */
    { parse_kwdupd2(seq, (yyvsp[0].str)); }
#line 1775 "sequence/genbanky.c" /* yacc.c:1646  */
    break;

  case 221:
#line 265 "sequence/genbanky.y" /* yacc.c:1646  */
    { parse_stradd(seq, (yyvsp[0].str)); }
#line 1781 "sequence/genbanky.c" /* yacc.c:1646  */
    break;

  case 222:
#line 266 "sequence/genbanky.y" /* yacc.c:1646  */
    { parse_stradd(seq, (yyvsp[0].str)); }
#line 1787 "sequence/genbanky.c" /* yacc.c:1646  */
    break;


#line 1791 "sequence/genbanky.c" /* yacc.c:1646  */
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
#line 287 "sequence/genbanky.y" /* yacc.c:1906  */



/* Check GENBANK sequence */
int genbanky_check(FILE *f) {
  int i;

  genbankset_in(f);

  i = yyparse(NULL);
  if (i == 0) { return i; }

  genbanklex_destroy();

  return i; }


/* Parse GENBANK sequence */
sequence_t *genbanky_parse(FILE *f) {
  int i;
  sequence_t *seq;

  seq = sequence_new();
  if (seq == NULL) { return seq; }
  genbankset_in(f);

  i = yyparse((void *)seq);
  if (i == 0) {
    return seq; }

  genbanklex_destroy();
  sequence_free(seq);

  return NULL; }


/* Helpers ... */

/*ARGSUSED*/
static void yyerror(sequence_t *seq, const char *s) { return; }
