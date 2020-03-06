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
#line 29 "sequence/genbanky.y" /* yacc.c:1909  */
 char *str; int num; 

#line 165 "sequence/genbanky.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int genbankparse (sequence_t *seq);

#endif /* !YY_GENBANK_SEQUENCE_GENBANKY_H_INCLUDED  */
