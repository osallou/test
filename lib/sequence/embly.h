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
#line 28 "sequence/embly.y" /* yacc.c:1909  */
 char *str; int num; 

#line 173 "sequence/embly.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int emblparse (sequence_t *seq);

#endif /* !YY_EMBL_SEQUENCE_EMBLY_H_INCLUDED  */
