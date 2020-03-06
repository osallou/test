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
#define yyparse         emblparse
#define yylex           embllex
#define yyerror         emblerror
#define yydebug         embldebug
#define yynerrs         emblnerrs


/* Copy the first part of user declarations.  */
#line 3 "sequence/embly.y" /* yacc.c:339  */

#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include <stdlib.h>

#include "sequence.h"
#include "sequence/parse.h"
#include "sequence/embly.h"

void emblset_in(FILE *);
int embllex(YYSTYPE *);
int embllex_destroy(void);

static void yyerror(sequence_t *, const char *);

int embly_check(FILE *);
sequence_t *embly_parse(FILE *);

#line 93 "sequence/embly.c" /* yacc.c:339  */

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
#ifndef YY_EMBL_SEQUENCE_EMBLY_H_INCLUDED
# define YY_EMBL_SEQUENCE_EMBLY_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int embldebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    EOL = 258,
    ERR = 259,
    INT = 260,
    MIN = 261,
    NUL = 262,
    NUM = 263,
    QUO = 264,
    SEP = 265,
    SPC = 266,
    TER = 267,
    TER2 = 268,
    TXT = 269,
    CBR = 270,
    OBR = 271,
    ID = 272,
    IDNAM = 273,
    AC = 274,
    ACNUM = 275,
    SV = 276,
    SVNUM = 277,
    PR = 278,
    PRDAT = 279,
    DT = 280,
    DE = 281,
    DETXT = 282,
    KW = 283,
    KWORD = 284,
    KWOR2 = 285,
    OS = 286,
    OSTXT = 287,
    OC = 288,
    OCNOD = 289,
    OCNO2 = 290,
    OG = 291,
    RN = 292,
    RC = 293,
    RP = 294,
    RX = 295,
    RXDB = 296,
    RXID = 297,
    RG = 298,
    RA = 299,
    RAAUT = 300,
    RT = 301,
    RL = 302,
    DR = 303,
    AH = 304,
    AS = 305,
    FH = 306,
    FT = 307,
    CC = 308,
    CO = 309,
    SQ = 310,
    SEQ = 311,
    SEQBAS = 312,
    END = 313
  };
#endif
/* Tokens.  */
#define EOL 258
#define ERR 259
#define INT 260
#define MIN 261
#define NUL 262
#define NUM 263
#define QUO 264
#define SEP 265
#define SPC 266
#define TER 267
#define TER2 268
#define TXT 269
#define CBR 270
#define OBR 271
#define ID 272
#define IDNAM 273
#define AC 274
#define ACNUM 275
#define SV 276
#define SVNUM 277
#define PR 278
#define PRDAT 279
#define DT 280
#define DE 281
#define DETXT 282
#define KW 283
#define KWORD 284
#define KWOR2 285
#define OS 286
#define OSTXT 287
#define OC 288
#define OCNOD 289
#define OCNO2 290
#define OG 291
#define RN 292
#define RC 293
#define RP 294
#define RX 295
#define RXDB 296
#define RXID 297
#define RG 298
#define RA 299
#define RAAUT 300
#define RT 301
#define RL 302
#define DR 303
#define AH 304
#define AS 305
#define FH 306
#define FT 307
#define CC 308
#define CO 309
#define SQ 310
#define SEQ 311
#define SEQBAS 312
#define END 313

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 28 "sequence/embly.y" /* yacc.c:355  */
 char *str; int num; 

#line 252 "sequence/embly.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int emblparse (sequence_t *seq);

#endif /* !YY_EMBL_SEQUENCE_EMBLY_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 268 "sequence/embly.c" /* yacc.c:358  */

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
#define YYLAST   181

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  104
/* YYNRULES -- Number of rules.  */
#define YYNRULES  170
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  270

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   313

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
      55,    56,    57,    58
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    74,    74,    75,    78,    80,    81,    83,    83,    85,
      85,    86,    87,    88,    91,    91,    92,    96,    96,    97,
      98,    98,   100,   100,   101,   102,   102,   104,   104,   105,
     106,   107,   110,   110,   111,   111,   111,   112,   113,   114,
     115,   116,   117,   118,   121,   121,   122,   124,   125,   126,
     128,   128,   129,   129,   130,   130,   131,   132,   132,   132,
     133,   133,   135,   135,   136,   137,   137,   139,   139,   140,
     142,   143,   145,   145,   146,   147,   147,   149,   149,   150,
     150,   151,   152,   153,   153,   154,   156,   156,   157,   159,
     159,   160,   161,   161,   163,   164,   164,   165,   166,   167,
     167,   167,   169,   169,   169,   170,   170,   171,   171,   172,
     173,   174,   174,   175,   175,   177,   177,   178,   179,   179,
     181,   181,   182,   183,   183,   185,   185,   186,   187,   187,
     189,   189,   190,   191,   191,   192,   192,   193,   194,   194,
     196,   196,   198,   199,   200,   200,   202,   202,   203,   204,
     204,   206,   206,   206,   208,   208,   209,   210,   210,   212,
     213,   214,   214,   216,   216,   217,   218,   219,   221,   221,
     223
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "EOL", "ERR", "INT", "MIN", "NUL", "NUM",
  "QUO", "SEP", "SPC", "TER", "TER2", "TXT", "CBR", "OBR", "ID", "IDNAM",
  "AC", "ACNUM", "SV", "SVNUM", "PR", "PRDAT", "DT", "DE", "DETXT", "KW",
  "KWORD", "KWOR2", "OS", "OSTXT", "OC", "OCNOD", "OCNO2", "OG", "RN",
  "RC", "RP", "RX", "RXDB", "RXID", "RG", "RA", "RAAUT", "RT", "RL", "DR",
  "AH", "AS", "FH", "FT", "CC", "CO", "SQ", "SEQ", "SEQBAS", "END",
  "$accept", "embl", "annots", "locus", "idline", "idtxt", "access",
  "acline", "aclist", "vers", "svline", "proj", "prline", "prlist", "date",
  "dtline", "dttxt", "desc", "deline", "detxt", "kwords", "kwlines",
  "kwline1", "kwline2", "kwline3", "kwlist", "orgas", "orgent", "orgspe",
  "osline", "ostxt", "orgcla", "oclines", "ocline1", "ocline2", "oclist",
  "ocnode", "orggan", "ogline", "ogtxt", "refs", "refent", "refnum",
  "rnline", "refcom", "rcline", "rctxt", "refpos", "rplines", "rpline1",
  "rpline2", "rplist", "rpval", "refxdb", "rxline", "refgrp", "rgline",
  "rgtxt", "refaut", "ralines", "raline1", "raline2", "ralist", "reftit",
  "rtlines", "rtline", "rtline1", "rtline2", "rtline3", "rttxt", "refloc",
  "rlline", "rltxt", "dbref", "drline", "drtxt", "comm", "ccline", "cctxt",
  "asmb", "ahline", "ahtxt", "aslines", "asline", "astxt", "feats",
  "feath", "fhline", "fhtxt", "featd", "ftline", "fttxt", "sequence",
  "seqcont", "coline", "cotxt", "seqhead", "sqline", "sqtxt", "seqdata",
  "seqline", "seqlist", "seqnum", "end", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313
};
# endif

#define YYPACT_NINF -88

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-88)))

#define YYTABLE_NINF -81

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      28,   -88,   -14,    58,   -22,   -88,   -88,   -88,   -88,    66,
      67,    12,   -22,   -88,    27,   -88,    29,    44,   -88,     2,
     -88,     3,    69,   -88,   -88,    27,    30,    27,   -88,    62,
      68,   -88,    63,   -88,   -88,    75,   -88,   -88,   -88,   -88,
     -88,    27,   -88,    64,   -88,   -88,    56,    80,    70,    71,
     -88,   -88,    34,    87,    90,    77,    92,    76,   -88,    57,
      85,   -88,    71,   -88,   -88,   -88,   -88,   -88,    97,    78,
      98,   -88,     4,    45,   -88,   -88,   -88,   -88,   -88,   -88,
      79,   -88,   -88,    81,   -88,    -3,    72,    49,   -88,   -88,
     -88,   -88,   -88,    73,   -88,    74,   -88,    82,   -88,   -88,
      31,   -88,   101,   -88,    83,    94,   -88,   -88,   -88,    60,
     -88,    84,   108,   109,   -88,    86,    42,   -88,   -88,   110,
      46,   100,   -88,    10,   -88,   -88,   -88,   103,   -88,   -88,
     -88,    39,   -88,   105,   104,   -88,   -88,    88,   -88,     7,
     107,   -88,   -88,    89,    91,   -88,     8,   -88,    42,   120,
     121,   122,   -88,     9,    93,   123,   -88,   -88,   -88,   -88,
     -88,    16,    17,   -88,   -88,    95,    89,   112,    91,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,    96,   -88,
      99,   124,    43,   -88,   -88,   -88,   -88,   -88,    22,   115,
      95,   -88,   -88,   -88,    23,   -88,   125,   117,   -88,   102,
     106,   127,   -88,   123,   131,   -88,   -88,   -88,    24,   -88,
     -88,   -88,   111,   -88,    25,    48,   113,   -88,   -88,   114,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   126,   -88,   -88,
     129,   133,   130,   113,   -88,   116,   -88,    52,   136,   -88,
      -1,   -88,   -88,    26,   -88,    47,   -88,   -88,   118,   142,
     143,   -88,   -88,   137,   -88,   -88,   -88,   139,     0,   -88,
     -88,   -88,   149,   151,   -88,   144,   -88,   -88,   152,   -88
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     3,     0,     0,     0,    10,     5,     8,     1,     0,
       0,     0,   152,   155,     0,   159,    15,     0,   158,     0,
     162,     0,     0,     2,   154,     0,     0,   153,   164,     0,
       0,     9,    18,    14,     6,     0,   156,   157,   160,   161,
     170,   151,   167,   169,   163,    13,     0,     0,     0,    23,
      17,     7,     0,     0,     0,     0,     0,     0,    21,     0,
       0,    28,     0,   166,   168,   165,    12,    11,     0,     0,
       0,    26,     0,    33,    22,    16,    20,    19,    24,    25,
       0,    27,    45,     0,    31,     0,    68,    43,    34,    32,
      35,    29,    30,     0,    44,    51,    47,   121,    41,    42,
       0,    49,     0,    63,     0,     0,    67,    73,    70,   126,
      39,     0,     0,     0,    48,    46,    59,    52,    50,     0,
      78,     0,   120,   131,    40,    38,    37,     0,    62,    60,
      61,     0,    58,     0,     0,    72,    87,     0,   124,     0,
       0,   129,   125,   141,     0,    66,     0,    55,     0,     0,
       0,     0,    76,     0,    90,     0,    79,    77,   122,   123,
     134,     0,     0,   145,     4,     0,     0,     0,   130,   136,
      64,    65,    57,    56,    54,    71,    74,    75,     0,    86,
      96,     0,     0,    84,   132,   133,   127,   128,     0,     0,
     140,   147,   142,   139,     0,   135,     0,     0,    89,   104,
       0,     0,    82,     0,     0,   143,   144,   150,     0,   146,
     137,   138,     0,    93,     0,     0,     0,   103,   106,   101,
      95,    94,    85,    83,    81,   148,   149,     0,    91,    92,
       0,     0,     0,    69,   116,     0,   100,     0,     0,   114,
       0,   108,   119,     0,   115,     0,   105,   102,     0,     0,
       0,    88,   109,     0,   113,   117,   118,     0,     0,    99,
      98,    97,     0,     0,   110,     0,   107,   112,     0,   111
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   119,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,    13,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -46,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -87,
     -88,   -69,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,    -2,   -88,   -88,   -88,     1,   -88,   -88,
     -25,   -88,   -88,   -88,   156,   -88,   157,   -88,   -88,   145,
     -26,   -88,   -88,   -88
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     6,    17,    16,    31,    46,    32,
      33,    49,    50,    59,    61,    62,    72,    73,    81,    85,
      82,    83,    88,    89,    90,   100,    86,    94,    95,    96,
     102,   103,   104,   117,   118,   131,   132,   115,   128,   146,
      97,   106,   107,   108,   120,   135,   153,   136,   137,   156,
     157,   182,   183,   154,   179,   180,   198,   214,   199,   200,
     220,   221,   237,   216,   235,   217,   218,   246,   247,   240,
     233,   234,   243,   109,   122,   139,   123,   142,   162,   143,
     144,   161,   168,   169,   194,   164,   165,   166,   188,   190,
     191,   208,    11,    12,    13,    19,    14,    15,    21,    27,
      28,    43,    54,    23
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      91,    44,   252,   264,     7,    36,    38,    78,   253,   265,
     158,   170,   176,   254,   254,    44,    37,    39,    79,   184,
     186,   159,   171,   177,    92,   205,   210,   225,   228,   255,
     185,   187,     9,    10,   110,     1,   206,   211,   226,   229,
     256,   111,   147,   112,   113,     2,   202,    34,    29,   148,
      30,   149,   150,   203,    35,   204,   257,   230,     8,   140,
     231,   239,   248,   141,   249,   250,    55,    69,    56,    70,
      22,    80,    40,   -36,    52,    53,   129,   130,    98,    99,
      18,    20,    45,    26,   134,   -80,    48,    42,    47,    51,
      57,    63,    64,    65,    58,    67,    60,    66,    68,    71,
      75,    77,    76,    93,   114,   101,    84,   -53,   121,    87,
     119,   125,   126,   124,   138,   133,   116,   145,   152,   105,
     151,   160,   127,   173,   174,   175,   193,   155,   181,   207,
     201,   213,   222,   178,   224,   212,   241,   196,   238,   251,
     163,   167,   197,   239,   242,   260,   261,   189,   215,   262,
     219,   263,   266,   227,   267,   269,   268,   223,   258,   236,
     232,   172,   245,   259,   244,   209,   195,   192,    24,    25,
      41,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    74
};

static const yytype_int16 yycheck[] =
{
       3,    27,     3,     3,    18,     3,     3,     3,     9,     9,
       3,     3,     3,    14,    14,    41,    14,    14,    14,     3,
       3,    14,    14,    14,    27,     3,     3,     3,     3,     3,
      14,    14,    54,    55,     3,     7,    14,    14,    14,    14,
      14,    10,     3,    12,    13,    17,     3,     3,    19,    10,
      21,    12,    13,    10,    10,    12,     9,     9,     0,    49,
      12,    14,    10,    53,    12,    13,    10,    10,    12,    12,
      58,    26,     3,    28,    10,    11,    34,    35,    29,    30,
      14,    14,    20,    56,    38,    39,    23,    57,    20,    14,
      10,    57,     5,     3,    24,     3,    25,    20,    22,    14,
       3,     3,    24,    31,     3,    32,    27,    33,    48,    28,
      16,     3,     3,    29,    14,     5,    33,    14,    14,    37,
      15,    14,    36,     3,     3,     3,    14,    39,     5,    14,
       6,    14,     5,    40,     3,    10,     3,    41,    12,     3,
      51,    50,    43,    14,    14,     3,     3,    52,    46,    12,
      44,    12,     3,    42,     3,     3,    12,   203,   245,    45,
      47,   148,    46,    45,   233,   190,   168,   166,    12,    12,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,    17,    60,    61,    62,    63,    18,     0,    54,
      55,   151,   152,   153,   155,   156,    65,    64,    14,   154,
      14,   157,    58,   162,   153,   155,    56,   158,   159,    19,
      21,    66,    68,    69,     3,    10,     3,    14,     3,    14,
       3,   158,    57,   160,   159,    20,    67,    20,    23,    70,
      71,    14,    10,    11,   161,    10,    12,    10,    24,    72,
      25,    73,    74,    57,     5,     3,    20,     3,    22,    10,
      12,    14,    75,    76,    74,     3,    24,     3,     3,    14,
      26,    77,    79,    80,    27,    78,    85,    28,    81,    82,
      83,     3,    27,    31,    86,    87,    88,    99,    29,    30,
      84,    32,    89,    90,    91,    37,   100,   101,   102,   132,
       3,    10,    12,    13,     3,    96,    33,    92,    93,    16,
     103,    48,   133,   135,    29,     3,     3,    36,    97,    34,
      35,    94,    95,     5,    38,   104,   106,   107,    14,   134,
      49,    53,   136,   138,   139,    14,    98,     3,    10,    12,
      13,    15,    14,   105,   112,    39,   108,   109,     3,    14,
      14,   140,   137,    51,   144,   145,   146,    50,   141,   142,
       3,    14,    95,     3,     3,     3,     3,    14,    40,   113,
     114,     5,   110,   111,     3,    14,     3,    14,   147,    52,
     148,   149,   146,    14,   143,   142,    41,    43,   115,   117,
     118,     6,     3,    10,    12,     3,    14,    14,   150,   149,
       3,    14,    10,    14,   116,    46,   122,   124,   125,    44,
     119,   120,     5,   111,     3,     3,    14,    42,     3,    14,
       9,    12,    47,   129,   130,   123,    45,   121,    12,    14,
     128,     3,    14,   131,   130,    46,   126,   127,    10,    12,
      13,     3,     3,     9,    14,     3,    14,     9,   128,    45,
       3,     3,    12,    12,     3,     9,     3,     3,    12,     3
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    59,    60,    60,    61,    62,    63,    64,    64,    65,
      65,    66,    67,    67,    68,    68,    69,    70,    70,    71,
      72,    72,    73,    73,    74,    75,    75,    76,    76,    77,
      78,    78,    79,    79,    80,    80,    80,    81,    82,    83,
      84,    84,    84,    84,    85,    85,    86,    87,    88,    89,
      90,    90,    91,    91,    92,    92,    93,    94,    94,    94,
      95,    95,    96,    96,    97,    98,    98,    99,    99,   100,
     101,   102,   103,   103,   104,   105,   105,   106,   106,   107,
     107,   108,   109,   110,   110,   111,   112,   112,   113,   114,
     114,   115,   116,   116,   117,   118,   118,   119,   120,   121,
     121,   121,   122,   122,   122,   123,   123,   124,   124,   125,
     126,   127,   127,   128,   128,   129,   129,   130,   131,   131,
     132,   132,   133,   134,   134,   135,   135,   136,   137,   137,
     138,   138,   139,   140,   140,   141,   141,   142,   143,   143,
     144,   144,   145,   146,   147,   147,   148,   148,   149,   150,
     150,   151,   151,   151,   152,   152,   153,   154,   154,   155,
     156,   157,   157,   158,   158,   159,   160,   160,   161,   161,
     162
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     1,    13,     1,     4,     3,     0,     2,
       0,     4,     3,     1,     1,     0,     5,     1,     0,     4,
       3,     1,     2,     0,     3,     2,     1,     2,     0,     3,
       2,     1,     2,     0,     2,     2,     0,     4,     4,     3,
       3,     1,     1,     0,     2,     0,     3,     1,     3,     1,
       2,     0,     2,     0,     4,     3,     4,     3,     1,     0,
       1,     1,     2,     0,     3,     2,     1,     2,     0,     8,
       1,     5,     2,     0,     3,     2,     1,     2,     0,     2,
       0,     4,     3,     3,     1,     3,     2,     0,     6,     2,
       0,     3,     2,     1,     2,     2,     0,     4,     4,     3,
       1,     0,     3,     1,     0,     2,     0,     6,     3,     4,
       3,     5,     4,     2,     1,     2,     1,     3,     2,     1,
       2,     0,     3,     2,     1,     2,     0,     3,     2,     0,
       2,     0,     3,     2,     1,     2,     1,     3,     2,     1,
       2,     0,     2,     3,     2,     0,     2,     1,     3,     2,
       1,     3,     1,     2,     2,     1,     3,     2,     1,     1,
       3,     2,     1,     2,     1,     4,     3,     1,     2,     0,
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
          case 18: /* IDNAM  */
#line 30 "sequence/embly.y" /* yacc.c:1257  */
      { free(((*yyvaluep).str)); }
#line 1297 "sequence/embly.c" /* yacc.c:1257  */
        break;

    case 20: /* ACNUM  */
#line 30 "sequence/embly.y" /* yacc.c:1257  */
      { free(((*yyvaluep).str)); }
#line 1303 "sequence/embly.c" /* yacc.c:1257  */
        break;

    case 22: /* SVNUM  */
#line 29 "sequence/embly.y" /* yacc.c:1257  */
      {}
#line 1309 "sequence/embly.c" /* yacc.c:1257  */
        break;

    case 27: /* DETXT  */
#line 30 "sequence/embly.y" /* yacc.c:1257  */
      { free(((*yyvaluep).str)); }
#line 1315 "sequence/embly.c" /* yacc.c:1257  */
        break;

    case 29: /* KWORD  */
#line 30 "sequence/embly.y" /* yacc.c:1257  */
      { free(((*yyvaluep).str)); }
#line 1321 "sequence/embly.c" /* yacc.c:1257  */
        break;

    case 30: /* KWOR2  */
#line 30 "sequence/embly.y" /* yacc.c:1257  */
      { free(((*yyvaluep).str)); }
#line 1327 "sequence/embly.c" /* yacc.c:1257  */
        break;

    case 32: /* OSTXT  */
#line 30 "sequence/embly.y" /* yacc.c:1257  */
      { free(((*yyvaluep).str)); }
#line 1333 "sequence/embly.c" /* yacc.c:1257  */
        break;

    case 34: /* OCNOD  */
#line 30 "sequence/embly.y" /* yacc.c:1257  */
      { free(((*yyvaluep).str)); }
#line 1339 "sequence/embly.c" /* yacc.c:1257  */
        break;

    case 35: /* OCNO2  */
#line 30 "sequence/embly.y" /* yacc.c:1257  */
      { free(((*yyvaluep).str)); }
#line 1345 "sequence/embly.c" /* yacc.c:1257  */
        break;

    case 57: /* SEQBAS  */
#line 30 "sequence/embly.y" /* yacc.c:1257  */
      { free(((*yyvaluep).str)); }
#line 1351 "sequence/embly.c" /* yacc.c:1257  */
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
#line 74 "sequence/embly.y" /* yacc.c:1646  */
    { return 0;  /*NOTREACHED*/ }
#line 1619 "sequence/embly.c" /* yacc.c:1646  */
    break;

  case 3:
#line 75 "sequence/embly.y" /* yacc.c:1646  */
    { return -1; /*NOTREACHED*/ }
#line 1625 "sequence/embly.c" /* yacc.c:1646  */
    break;

  case 6:
#line 81 "sequence/embly.y" /* yacc.c:1646  */
    { parse_namadd(seq, (yyvsp[-2].str)); }
#line 1631 "sequence/embly.c" /* yacc.c:1646  */
    break;

  case 12:
#line 87 "sequence/embly.y" /* yacc.c:1646  */
    { parse_accadd(seq, (yyvsp[0].str)); }
#line 1637 "sequence/embly.c" /* yacc.c:1646  */
    break;

  case 13:
#line 88 "sequence/embly.y" /* yacc.c:1646  */
    { parse_accadd(seq, (yyvsp[0].str)); }
#line 1643 "sequence/embly.c" /* yacc.c:1646  */
    break;

  case 16:
#line 92 "sequence/embly.y" /* yacc.c:1646  */
    { parse_nuladd(seq, (yyvsp[-3].str));
                                                       parse_veradd(seq, (yyvsp[-1].num)); }
#line 1650 "sequence/embly.c" /* yacc.c:1646  */
    break;

  case 30:
#line 106 "sequence/embly.y" /* yacc.c:1646  */
    { parse_dscadd2(seq, (yyvsp[0].str)); }
#line 1656 "sequence/embly.c" /* yacc.c:1646  */
    break;

  case 31:
#line 107 "sequence/embly.y" /* yacc.c:1646  */
    { parse_dscadd1(seq, (yyvsp[0].str)); }
#line 1662 "sequence/embly.c" /* yacc.c:1646  */
    break;

  case 40:
#line 115 "sequence/embly.y" /* yacc.c:1646  */
    { parse_kwdadd(seq, (yyvsp[0].str)); }
#line 1668 "sequence/embly.c" /* yacc.c:1646  */
    break;

  case 41:
#line 116 "sequence/embly.y" /* yacc.c:1646  */
    { parse_kwdadd(seq, (yyvsp[0].str)); }
#line 1674 "sequence/embly.c" /* yacc.c:1646  */
    break;

  case 42:
#line 117 "sequence/embly.y" /* yacc.c:1646  */
    { parse_kwdupd(seq, (yyvsp[0].str)); }
#line 1680 "sequence/embly.c" /* yacc.c:1646  */
    break;

  case 166:
#line 218 "sequence/embly.y" /* yacc.c:1646  */
    { parse_stradd(seq, (yyvsp[0].str)); }
#line 1686 "sequence/embly.c" /* yacc.c:1646  */
    break;

  case 167:
#line 219 "sequence/embly.y" /* yacc.c:1646  */
    { parse_stradd(seq, (yyvsp[0].str)); }
#line 1692 "sequence/embly.c" /* yacc.c:1646  */
    break;


#line 1696 "sequence/embly.c" /* yacc.c:1646  */
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
#line 225 "sequence/embly.y" /* yacc.c:1906  */



/* Checks EMBL sequence */
int embly_check(FILE *f) {
  int i;

  emblset_in(f);

  i = yyparse(NULL);
  if (i == 0) { return i; }

  embllex_destroy();

  return i; }


/* Parse EMBL sequence */
sequence_t *embly_parse(FILE *f) {
  int i;
  sequence_t *seq;


  seq = sequence_new();
  if (seq == NULL) { return seq; }
  emblset_in(f);

  i = yyparse((void *)seq);
  if (i == 0) {
    return seq; }

  embllex_destroy();
  sequence_free(seq);

  return NULL; }


/* Helpers ... */

/*ARGSUSED*/
static void yyerror(sequence_t *seq, const char *s) { return; }
