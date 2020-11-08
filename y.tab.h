/* A Bison parser, made by GNU Bison 3.7.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IF = 258,                      /* IF  */
    ELSE = 259,                    /* ELSE  */
    FOR = 260,                     /* FOR  */
    WHILE = 261,                   /* WHILE  */
    DOUBLE = 262,                  /* DOUBLE  */
    INT = 263,                     /* INT  */
    STRING = 264,                  /* STRING  */
    NEW = 265,                     /* NEW  */
    PUBLIC = 266,                  /* PUBLIC  */
    CLASS = 267,                   /* CLASS  */
    STATIC = 268,                  /* STATIC  */
    VOID = 269,                    /* VOID  */
    OP_MULT = 270,                 /* OP_MULT  */
    OP_SUM = 271,                  /* OP_SUM  */
    OP_SUST = 272,                 /* OP_SUST  */
    OP_DIV = 273,                  /* OP_DIV  */
    OP_ASIG = 274,                 /* OP_ASIG  */
    OP_MOD = 275,                  /* OP_MOD  */
    PLUSPLUS = 276,                /* PLUSPLUS  */
    MENMEN = 277,                  /* MENMEN  */
    MASIGUA = 278,                 /* MASIGUA  */
    MENOSIGUA = 279,               /* MENOSIGUA  */
    PORIGUA = 280,                 /* PORIGUA  */
    DIVIGUA = 281,                 /* DIVIGUA  */
    CORCHET_A = 282,               /* CORCHET_A  */
    CORCHET_C = 283,               /* CORCHET_C  */
    PUNTOYCOM = 284,               /* PUNTOYCOM  */
    COMA = 285,                    /* COMA  */
    PARENT_A = 286,                /* PARENT_A  */
    PARENT_C = 287,                /* PARENT_C  */
    LLAVE_A = 288,                 /* LLAVE_A  */
    LLAVE_C = 289,                 /* LLAVE_C  */
    CTE_ENT = 290,                 /* CTE_ENT  */
    CTE_REAL = 291,                /* CTE_REAL  */
    CTE_CAD = 292,                 /* CTE_CAD  */
    ID = 293,                      /* ID  */
    OP_IGUAL = 294,                /* OP_IGUAL  */
    OP_MENIGUA = 295,              /* OP_MENIGUA  */
    OP_MAYIGUA = 296,              /* OP_MAYIGUA  */
    DIFERENTE = 297,               /* DIFERENTE  */
    MAYOR = 298,                   /* MAYOR  */
    MENOR = 299,                   /* MENOR  */
    OP_Y = 300,                    /* OP_Y  */
    OP_O = 301,                    /* OP_O  */
    OP_NO = 302,                   /* OP_NO  */
    CHAR = 303,                    /* CHAR  */
    COMENTARIO = 304,              /* COMENTARIO  */
    ERROR = 305,                   /* ERROR  */
    NEWLINE = 306                  /* NEWLINE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
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
#define NEWLINE 306

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
