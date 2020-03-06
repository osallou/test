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

#ifndef YY_NEXUSI_ALIGN_NEXUSIY_H_INCLUDED
# define YY_NEXUSI_ALIGN_NEXUSIY_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int nexusidebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    EOL = 258,
    EQU = 259,
    ERR = 260,
    SEM = 261,
    SPC = 262,
    TAG = 263,
    BEG = 264,
    END = 265,
    KEY = 266,
    COM = 267,
    TOK = 268,
    VAL = 269,
    MAT = 270,
    SEP = 271,
    NAM = 272,
    BAS = 273
  };
#endif
/* Tokens.  */
#define EOL 258
#define EQU 259
#define ERR 260
#define SEM 261
#define SPC 262
#define TAG 263
#define BEG 264
#define END 265
#define KEY 266
#define COM 267
#define TOK 268
#define VAL 269
#define MAT 270
#define SEP 271
#define NAM 272
#define BAS 273

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 28 "align/nexusiy.y" /* yacc.c:1909  */
 char *str; 

#line 93 "align/nexusiy.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int nexusiparse (align_t *ali);

#endif /* !YY_NEXUSI_ALIGN_NEXUSIY_H_INCLUDED  */
