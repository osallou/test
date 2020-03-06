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

#ifndef YY_SPROT_SEQUENCE_SPROTY_H_INCLUDED
# define YY_SPROT_SEQUENCE_SPROTY_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int sprotdebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    EOL = 258,
    EQU = 259,
    ERR = 260,
    INT = 261,
    NUL = 262,
    QUO = 263,
    SEP = 264,
    SPC = 265,
    TER = 266,
    TER2 = 267,
    TER3 = 268,
    TXT = 269,
    CBR = 270,
    OBR = 271,
    ID = 272,
    IDNAM = 273,
    AC = 274,
    ACNUM = 275,
    DT = 276,
    DE = 277,
    DETXT = 278,
    GN = 279,
    OS = 280,
    OSTXT = 281,
    OSTX2 = 282,
    OG = 283,
    OC = 284,
    OCNOD = 285,
    OX = 286,
    OH = 287,
    RN = 288,
    RP = 289,
    RC = 290,
    RX = 291,
    RXKEY = 292,
    RXVAL = 293,
    RG = 294,
    RA = 295,
    RAAUT = 296,
    RT = 297,
    RL = 298,
    CC = 299,
    DR = 300,
    DRVAL = 301,
    PE = 302,
    KW = 303,
    KWORD = 304,
    KWOR2 = 305,
    FT = 306,
    SQ = 307,
    SEQ = 308,
    SEQBAS = 309,
    END = 310
  };
#endif
/* Tokens.  */
#define EOL 258
#define EQU 259
#define ERR 260
#define INT 261
#define NUL 262
#define QUO 263
#define SEP 264
#define SPC 265
#define TER 266
#define TER2 267
#define TER3 268
#define TXT 269
#define CBR 270
#define OBR 271
#define ID 272
#define IDNAM 273
#define AC 274
#define ACNUM 275
#define DT 276
#define DE 277
#define DETXT 278
#define GN 279
#define OS 280
#define OSTXT 281
#define OSTX2 282
#define OG 283
#define OC 284
#define OCNOD 285
#define OX 286
#define OH 287
#define RN 288
#define RP 289
#define RC 290
#define RX 291
#define RXKEY 292
#define RXVAL 293
#define RG 294
#define RA 295
#define RAAUT 296
#define RT 297
#define RL 298
#define CC 299
#define DR 300
#define DRVAL 301
#define PE 302
#define KW 303
#define KWORD 304
#define KWOR2 305
#define FT 306
#define SQ 307
#define SEQ 308
#define SEQBAS 309
#define END 310

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 28 "sequence/sproty.y" /* yacc.c:1909  */
 char *str; 

#line 167 "sequence/sproty.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int sprotparse (sequence_t *seq);

#endif /* !YY_SPROT_SEQUENCE_SPROTY_H_INCLUDED  */
