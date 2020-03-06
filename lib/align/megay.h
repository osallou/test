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

#ifndef YY_MEGA_ALIGN_MEGAY_H_INCLUDED
# define YY_MEGA_ALIGN_MEGAY_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int megadebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    COL = 258,
    EXC = 259,
    DIE = 260,
    END = 261,
    EOL = 262,
    EQU = 263,
    ERR = 264,
    SEM = 265,
    SPC = 266,
    TXT = 267,
    TAG = 268,
    KEY = 269,
    VAL = 270,
    TIT = 271,
    FMT = 272,
    NAM = 273,
    BAS = 274
  };
#endif
/* Tokens.  */
#define COL 258
#define EXC 259
#define DIE 260
#define END 261
#define EOL 262
#define EQU 263
#define ERR 264
#define SEM 265
#define SPC 266
#define TXT 267
#define TAG 268
#define KEY 269
#define VAL 270
#define TIT 271
#define FMT 272
#define NAM 273
#define BAS 274

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 27 "align/megay.y" /* yacc.c:1909  */
 char *str; 

#line 95 "align/megay.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int megaparse (align_t *ali);

#endif /* !YY_MEGA_ALIGN_MEGAY_H_INCLUDED  */
