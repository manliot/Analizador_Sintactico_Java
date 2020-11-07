/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IF = 258,
     ELSE = 259,
     FOR = 260,
     WHILE = 261,
     DOUBLE = 262,
     INT = 263,
     STRING = 264,
     NEW = 265,
     PUBLIC = 266,
     CLASS = 267,
     STATIC = 268,
     VOID = 269,
     OP_MULT = 270,
     OP_SUM = 271,
     OP_SUST = 272,
     OP_DIV = 273,
     OP_ASIG = 274,
     OP_MOD = 275,
     PLUSPLUS = 276,
     MENMEN = 277,
     MASIGUA = 278,
     MENOSIGUA = 279,
     PORIGUA = 280,
     DIVIGUA = 281,
     CORCHET_A = 282,
     CORCHET_C = 283,
     PUNTOYCOM = 284,
     COMA = 285,
     PARENT_A = 286,
     PARENT_C = 287,
     LLAVE_A = 288,
     LLAVE_C = 289,
     CTE_ENT = 290,
     CTE_REAL = 291,
     CTE_CAD = 292,
     ID = 293,
     OP_IGUAL = 294,
     OP_MENIGUA = 295,
     OP_MAYIGUA = 296,
     DIFERENTE = 297,
     MAYOR = 298,
     MENOR = 299,
     OP_Y = 300,
     OP_O = 301,
     OP_NO = 302,
     CHAR = 303,
     COMENTARIO = 304,
     ERROR = 305
   };
#endif
/* Tokens.  */
#define IF 258
#define ELSE 259
#define FOR 260
#define WHILE 261
#define DOUBLE 262
#define INT 263
#define STRING 264
#define NEW 265
#define PUBLIC 266
#define CLASS 267
#define STATIC 268
#define VOID 269
#define OP_MULT 270
#define OP_SUM 271
#define OP_SUST 272
#define OP_DIV 273
#define OP_ASIG 274
#define OP_MOD 275
#define PLUSPLUS 276
#define MENMEN 277
#define MASIGUA 278
#define MENOSIGUA 279
#define PORIGUA 280
#define DIVIGUA 281
#define CORCHET_A 282
#define CORCHET_C 283
#define PUNTOYCOM 284
#define COMA 285
#define PARENT_A 286
#define PARENT_C 287
#define LLAVE_A 288
#define LLAVE_C 289
#define CTE_ENT 290
#define CTE_REAL 291
#define CTE_CAD 292
#define ID 293
#define OP_IGUAL 294
#define OP_MENIGUA 295
#define OP_MAYIGUA 296
#define DIFERENTE 297
#define MAYOR 298
#define MENOR 299
#define OP_Y 300
#define OP_O 301
#define OP_NO 302
#define CHAR 303
#define COMENTARIO 304
#define ERROR 305




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

