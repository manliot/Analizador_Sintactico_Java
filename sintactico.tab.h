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

#ifndef YY_YY_SINTACTICO_TAB_H_INCLUDED
# define YY_YY_SINTACTICO_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SINTACTICO_TAB_H_INCLUDED  */
