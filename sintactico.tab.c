/* A Bison parser, made by GNU Bison 3.7.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "sintactico.y"


/********************** 
 * Declaraciones en C *
 **********************/


  #include <stdio.h>
  #include <stdlib.h>
  extern int yylex(void);
  extern char *yytext;
  extern int yylineno;
  void yyerror(char *s);
  int linerr [1000];
  int cont_errores=0;
  int check;
  FILE* fichero;
  void yyerror(char *s);
  
  

#line 93 "sintactico.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "sintactico.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IF = 3,                         /* IF  */
  YYSYMBOL_ELSE = 4,                       /* ELSE  */
  YYSYMBOL_FOR = 5,                        /* FOR  */
  YYSYMBOL_WHILE = 6,                      /* WHILE  */
  YYSYMBOL_DOUBLE = 7,                     /* DOUBLE  */
  YYSYMBOL_INT = 8,                        /* INT  */
  YYSYMBOL_STRING = 9,                     /* STRING  */
  YYSYMBOL_NEW = 10,                       /* NEW  */
  YYSYMBOL_PUBLIC = 11,                    /* PUBLIC  */
  YYSYMBOL_CLASS = 12,                     /* CLASS  */
  YYSYMBOL_STATIC = 13,                    /* STATIC  */
  YYSYMBOL_VOID = 14,                      /* VOID  */
  YYSYMBOL_OP_MULT = 15,                   /* OP_MULT  */
  YYSYMBOL_OP_SUM = 16,                    /* OP_SUM  */
  YYSYMBOL_OP_SUST = 17,                   /* OP_SUST  */
  YYSYMBOL_OP_DIV = 18,                    /* OP_DIV  */
  YYSYMBOL_OP_ASIG = 19,                   /* OP_ASIG  */
  YYSYMBOL_OP_MOD = 20,                    /* OP_MOD  */
  YYSYMBOL_PLUSPLUS = 21,                  /* PLUSPLUS  */
  YYSYMBOL_MENMEN = 22,                    /* MENMEN  */
  YYSYMBOL_MASIGUA = 23,                   /* MASIGUA  */
  YYSYMBOL_MENOSIGUA = 24,                 /* MENOSIGUA  */
  YYSYMBOL_PORIGUA = 25,                   /* PORIGUA  */
  YYSYMBOL_DIVIGUA = 26,                   /* DIVIGUA  */
  YYSYMBOL_CORCHET_A = 27,                 /* CORCHET_A  */
  YYSYMBOL_CORCHET_C = 28,                 /* CORCHET_C  */
  YYSYMBOL_PUNTOYCOM = 29,                 /* PUNTOYCOM  */
  YYSYMBOL_COMA = 30,                      /* COMA  */
  YYSYMBOL_PARENT_A = 31,                  /* PARENT_A  */
  YYSYMBOL_PARENT_C = 32,                  /* PARENT_C  */
  YYSYMBOL_LLAVE_A = 33,                   /* LLAVE_A  */
  YYSYMBOL_LLAVE_C = 34,                   /* LLAVE_C  */
  YYSYMBOL_CTE_ENT = 35,                   /* CTE_ENT  */
  YYSYMBOL_CTE_REAL = 36,                  /* CTE_REAL  */
  YYSYMBOL_CTE_CAD = 37,                   /* CTE_CAD  */
  YYSYMBOL_ID = 38,                        /* ID  */
  YYSYMBOL_OP_IGUAL = 39,                  /* OP_IGUAL  */
  YYSYMBOL_OP_MENIGUA = 40,                /* OP_MENIGUA  */
  YYSYMBOL_OP_MAYIGUA = 41,                /* OP_MAYIGUA  */
  YYSYMBOL_DIFERENTE = 42,                 /* DIFERENTE  */
  YYSYMBOL_MAYOR = 43,                     /* MAYOR  */
  YYSYMBOL_MENOR = 44,                     /* MENOR  */
  YYSYMBOL_OP_Y = 45,                      /* OP_Y  */
  YYSYMBOL_OP_O = 46,                      /* OP_O  */
  YYSYMBOL_OP_NO = 47,                     /* OP_NO  */
  YYSYMBOL_CHAR = 48,                      /* CHAR  */
  YYSYMBOL_COMENTARIO = 49,                /* COMENTARIO  */
  YYSYMBOL_ERROR = 50,                     /* ERROR  */
  YYSYMBOL_NEWLINE = 51,                   /* NEWLINE  */
  YYSYMBOL_YYACCEPT = 52,                  /* $accept  */
  YYSYMBOL_INICIO = 53,                    /* INICIO  */
  YYSYMBOL_F_MAIN = 54,                    /* F_MAIN  */
  YYSYMBOL_CYCL_FOR = 55,                  /* CYCL_FOR  */
  YYSYMBOL_CYCL_WHILE = 56,                /* CYCL_WHILE  */
  YYSYMBOL_COND_IF = 57,                   /* COND_IF  */
  YYSYMBOL_IF_SOLO = 58,                   /* IF_SOLO  */
  YYSYMBOL_C_ELSE = 59,                    /* C_ELSE  */
  YYSYMBOL_NOM_ARRAY = 60,                 /* NOM_ARRAY  */
  YYSYMBOL_COLUMNAS = 61,                  /* COLUMNAS  */
  YYSYMBOL_COLUMNA = 62,                   /* COLUMNA  */
  YYSYMBOL_FILA = 63,                      /* FILA  */
  YYSYMBOL_CONDICIONALES = 64,             /* CONDICIONALES  */
  YYSYMBOL_CONDICIONAL = 65,               /* CONDICIONAL  */
  YYSYMBOL_DECLARACION = 66,               /* DECLARACION  */
  YYSYMBOL_DECL_VARIABLES = 67,            /* DECL_VARIABLES  */
  YYSYMBOL_DECL_VARIABLE = 68,             /* DECL_VARIABLE  */
  YYSYMBOL_ASIGNACION = 69,                /* ASIGNACION  */
  YYSYMBOL_ASIGNACION_ARRAY = 70,          /* ASIGNACION_ARRAY  */
  YYSYMBOL_ASIGNACION_ARRAY_RIGHT = 71,    /* ASIGNACION_ARRAY_RIGHT  */
  YYSYMBOL_INSTRUCCIONES = 72,             /* INSTRUCCIONES  */
  YYSYMBOL_INS = 73,                       /* INS  */
  YYSYMBOL_INS_SIN_PUNTOCOMA = 74,         /* INS_SIN_PUNTOCOMA  */
  YYSYMBOL_OPERACION_MATH_PAREN = 75,      /* OPERACION_MATH_PAREN  */
  YYSYMBOL_DIMENSION = 76,                 /* DIMENSION  */
  YYSYMBOL_CONSTANTES_NUM_ID = 77,         /* CONSTANTES_NUM_ID  */
  YYSYMBOL_CONSTANTES_NUM = 78,            /* CONSTANTES_NUM  */
  YYSYMBOL_CONSTANTES = 79,                /* CONSTANTES  */
  YYSYMBOL_TIPO_VAR = 80,                  /* TIPO_VAR  */
  YYSYMBOL_OPERADORES_MATH = 81,           /* OPERADORES_MATH  */
  YYSYMBOL_ASIG_SYMBOLS = 82,              /* ASIG_SYMBOLS  */
  YYSYMBOL_INCREMENTO_SYMBOLS = 83,        /* INCREMENTO_SYMBOLS  */
  YYSYMBOL_OPERADORES_REL = 84,            /* OPERADORES_REL  */
  YYSYMBOL_OPERADORES_LOGICOS = 85         /* OPERADORES_LOGICOS  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   403

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  99
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  208

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   306


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    89,    89,    90,    91,    92,    94,    95,    97,    98,
      99,   102,   103,   106,   107,   109,   111,   114,   115,   117,
     118,   119,   120,   122,   123,   125,   127,   128,   129,   130,
     131,   133,   134,   136,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   148,   150,   151,   152,   153,   154,   157,
     158,   161,   162,   163,   164,   165,   166,   167,   172,   173,
     175,   175,   181,   182,   183,   184,   188,   188,   189,   190,
     191,   191,   192,   192,   192,   193,   193,   193,   193,   195,
     195,   195,   195,   195,   196,   196,   196,   196,   196,   197,
     197,   198,   198,   198,   198,   198,   198,   199,   199,   199
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IF", "ELSE", "FOR",
  "WHILE", "DOUBLE", "INT", "STRING", "NEW", "PUBLIC", "CLASS", "STATIC",
  "VOID", "OP_MULT", "OP_SUM", "OP_SUST", "OP_DIV", "OP_ASIG", "OP_MOD",
  "PLUSPLUS", "MENMEN", "MASIGUA", "MENOSIGUA", "PORIGUA", "DIVIGUA",
  "CORCHET_A", "CORCHET_C", "PUNTOYCOM", "COMA", "PARENT_A", "PARENT_C",
  "LLAVE_A", "LLAVE_C", "CTE_ENT", "CTE_REAL", "CTE_CAD", "ID", "OP_IGUAL",
  "OP_MENIGUA", "OP_MAYIGUA", "DIFERENTE", "MAYOR", "MENOR", "OP_Y",
  "OP_O", "OP_NO", "CHAR", "COMENTARIO", "ERROR", "NEWLINE", "$accept",
  "INICIO", "F_MAIN", "CYCL_FOR", "CYCL_WHILE", "COND_IF", "IF_SOLO",
  "C_ELSE", "NOM_ARRAY", "COLUMNAS", "COLUMNA", "FILA", "CONDICIONALES",
  "CONDICIONAL", "DECLARACION", "DECL_VARIABLES", "DECL_VARIABLE",
  "ASIGNACION", "ASIGNACION_ARRAY", "ASIGNACION_ARRAY_RIGHT",
  "INSTRUCCIONES", "INS", "INS_SIN_PUNTOCOMA", "OPERACION_MATH_PAREN",
  "DIMENSION", "CONSTANTES_NUM_ID", "CONSTANTES_NUM", "CONSTANTES",
  "TIPO_VAR", "OPERADORES_MATH", "ASIG_SYMBOLS", "INCREMENTO_SYMBOLS",
  "OPERADORES_REL", "OPERADORES_LOGICOS", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306
};
#endif

#define YYPACT_NINF (-121)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-33)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      86,     9,    -8,     5,    -3,    43,    89,    -9,    -6,  -121,
     354,    29,    37,  -121,    39,    28,    32,    61,    67,  -121,
    -121,  -121,   345,  -121,  -121,  -121,  -121,  -121,    97,    84,
      95,     6,  -121,   354,    68,    90,  -121,    89,  -121,   354,
    -121,   112,   145,    58,   101,  -121,  -121,  -121,  -121,  -121,
    -121,   154,  -121,    77,  -121,  -121,  -121,  -121,  -121,  -121,
     108,   120,  -121,   114,  -121,  -121,   133,   139,   111,    73,
    -121,  -121,   -24,   110,    76,   173,   233,  -121,   143,   178,
     152,   155,   163,  -121,   154,  -121,  -121,   354,  -121,    30,
      42,  -121,    68,   175,  -121,  -121,   166,   167,   153,  -121,
    -121,  -121,   112,  -121,  -121,  -121,  -121,  -121,  -121,   154,
    -121,  -121,  -121,  -121,  -121,   154,   161,  -121,   154,   168,
     174,   185,   162,   181,  -121,  -121,   194,    19,   191,  -121,
     204,  -121,   233,   354,  -121,  -121,  -121,   354,   211,   173,
     354,   354,  -121,   205,   215,   225,   121,   221,   226,   231,
     154,   171,   220,   219,    12,   229,   238,  -121,    12,    53,
    -121,  -121,  -121,   227,   230,  -121,   191,   224,  -121,  -121,
    -121,   173,   235,  -121,  -121,   237,   239,   242,  -121,   121,
    -121,   241,    12,   236,  -121,   243,   248,  -121,   246,   251,
     249,  -121,    12,   354,   236,   250,   254,   287,   252,   354,
    -121,  -121,   256,   296,   354,  -121,   305,  -121
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       0,     0,     5,     4,     0,     0,     0,     0,     0,    75,
      76,    77,     0,    78,    55,    52,    54,    53,    13,    60,
      61,     0,    50,     0,     0,     0,     3,     0,    59,     0,
      58,     0,     0,     0,    88,    89,    90,    84,    85,    86,
      87,     0,    42,     0,    14,    51,    56,     7,    49,    57,
      37,    38,    33,    35,    36,    39,     0,     0,     0,     0,
      70,    71,    69,     0,    29,     0,    65,    68,     0,     0,
       0,     0,     0,    41,     0,    69,    40,     0,    18,     0,
       0,    43,     0,     0,     2,    16,     0,     0,     0,    97,
      98,    99,     0,    91,    92,    93,    94,    95,    96,     0,
      79,    81,    82,    83,    80,     0,     0,    88,     0,     0,
       0,     0,     0,    21,    66,    67,     0,     0,     0,    34,
       0,    30,    62,     0,    28,    31,    63,     0,     0,     0,
       0,     0,    17,     0,    22,     0,     0,     0,    24,     0,
       0,     0,     0,     0,     0,     0,     0,    19,     0,     0,
      72,    73,    74,     0,    27,    46,     0,     0,    64,    15,
      10,     0,     0,    12,    11,     0,    47,     0,    25,     0,
      23,     0,     0,     0,    20,     0,    48,    26,     0,     0,
       0,    45,     0,     0,     0,     0,     0,     0,     0,     0,
      44,     6,     0,     0,     0,     8,     0,     9
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -121,  -121,    11,  -121,  -121,  -121,  -121,  -121,  -121,   119,
    -121,   128,   -40,  -121,   258,   199,  -121,   -32,  -121,  -121,
     -38,   -15,  -121,   -45,  -113,  -121,  -121,  -121,   182,   183,
     240,  -121,  -120,  -121
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     7,    25,    26,    27,    28,    54,    61,   147,
     148,   163,    73,    74,    29,    62,    63,    30,    65,    91,
      31,    32,    33,    75,   126,    76,    77,   164,    34,   115,
      51,    52,   109,   102
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      40,    68,    64,    82,     8,     9,    86,    15,   -32,    16,
       4,    17,    18,    19,    20,    21,    58,    12,    59,   154,
       5,   -32,   -32,   -32,    97,    13,    19,    20,    21,    15,
      10,    16,    14,    17,    18,    19,    20,    21,    88,    97,
      57,   172,     6,    35,    22,   175,   177,   124,    67,   122,
     125,   182,   127,    58,    23,    24,    11,    38,   123,    81,
      64,    39,   134,    41,   135,   124,    22,    23,   125,   189,
     136,    36,    37,   138,    96,   128,    23,    24,    15,   196,
      16,   176,    17,    18,    19,    20,    21,     1,   124,    69,
       4,   125,    42,    70,    71,   151,    72,     2,    43,   152,
       5,    53,   155,   156,    84,   168,    60,    58,    70,    71,
      87,    85,    15,    55,    16,    22,    17,    18,    19,    20,
      21,    99,   100,   101,    56,    23,    24,    44,    66,    45,
      46,    47,    48,    49,    50,    89,    58,    58,    83,    90,
      58,    58,    98,    69,    92,    95,    78,    70,    71,    22,
      72,   190,    19,    20,    21,   197,   160,   161,   162,    23,
      24,   203,   198,    15,    93,    16,   206,    17,    18,    19,
      20,    21,    15,    94,    16,   116,    17,    18,    19,    20,
      21,   119,    58,    79,   130,    84,   133,   120,    58,    70,
      71,    58,    85,    23,   137,   121,   142,   117,   131,   132,
      22,    47,    48,    49,    50,   169,   139,   140,   143,    22,
      23,    24,   103,   104,   105,   106,   107,   108,   141,    23,
      24,    15,   144,    16,   146,    17,    18,    19,    20,    21,
      15,   149,    16,   157,    17,    18,    19,    20,    21,    15,
     153,    16,   158,    17,    18,    19,    20,    21,   110,   111,
     112,   113,   159,   114,   170,   165,   166,   171,    22,   167,
     179,   178,   181,   173,   183,   184,   185,    22,    23,    24,
     186,   191,   174,   188,    22,   192,    22,    23,    24,   193,
     194,   195,   200,   199,   202,   180,    23,    24,    15,   204,
      16,   129,    17,    18,    19,    20,    21,    15,     0,    16,
      80,    17,    18,    19,    20,    21,    15,   187,    16,   145,
      17,    18,    19,    20,    21,   150,     0,     0,     0,   118,
       0,   201,     0,     0,     0,    22,     0,     0,     0,     0,
     205,     0,     0,     0,    22,    23,    24,     0,     0,   207,
       0,     0,     0,    22,    23,    24,     0,     0,     0,     0,
       0,     0,     0,    23,    24,    15,     0,    16,     0,    17,
      18,    19,    20,    21,    44,     0,    45,    46,    47,    48,
      49,    50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    22,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    23,    24
};

static const yytype_int16 yycheck[] =
{
      15,    39,    34,    43,    12,     0,    51,     1,    32,     3,
       1,     5,     6,     7,     8,     9,    31,     6,    33,   139,
      11,    45,    46,    47,    69,    34,     7,     8,     9,     1,
      33,     3,    38,     5,     6,     7,     8,     9,    53,    84,
      34,   154,    33,    14,    38,   158,   159,    35,    37,    87,
      38,   171,    10,    68,    48,    49,    13,    29,    28,     1,
      92,    33,   102,    31,   109,    35,    38,    48,    38,   182,
     115,    34,    33,   118,     1,    33,    48,    49,     1,   192,
       3,    28,     5,     6,     7,     8,     9,     1,    35,    31,
       1,    38,    31,    35,    36,   133,    38,    11,    31,   137,
      11,     4,   140,   141,    31,   150,    38,   122,    35,    36,
      33,    38,     1,    29,     3,    38,     5,     6,     7,     8,
       9,    45,    46,    47,    29,    48,    49,    19,    38,    21,
      22,    23,    24,    25,    26,    27,   151,   152,    37,    19,
     155,   156,    32,    31,    30,    34,     1,    35,    36,    38,
      38,   183,     7,     8,     9,   193,    35,    36,    37,    48,
      49,   199,   194,     1,    31,     3,   204,     5,     6,     7,
       8,     9,     1,    34,     3,    32,     5,     6,     7,     8,
       9,    29,   197,    38,     9,    31,    33,    32,   203,    35,
      36,   206,    38,    48,    33,    32,    34,    19,    32,    32,
      38,    23,    24,    25,    26,    34,    38,    33,    27,    38,
      48,    49,    39,    40,    41,    42,    43,    44,    33,    48,
      49,     1,    28,     3,    33,     5,     6,     7,     8,     9,
       1,    27,     3,    28,     5,     6,     7,     8,     9,     1,
      29,     3,    27,     5,     6,     7,     8,     9,    15,    16,
      17,    18,    27,    20,    34,    34,    30,    38,    38,    28,
      30,    34,    38,    34,    29,    28,    27,    38,    48,    49,
      28,    28,    34,    32,    38,    27,    38,    48,    49,    33,
      29,    32,    28,    33,    32,   166,    48,    49,     1,    33,
       3,    92,     5,     6,     7,     8,     9,     1,    -1,     3,
      42,     5,     6,     7,     8,     9,     1,   179,     3,   127,
       5,     6,     7,     8,     9,   132,    -1,    -1,    -1,    79,
      -1,    34,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    -1,    38,    48,    49,    -1,    -1,    34,
      -1,    -1,    -1,    38,    48,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,     1,    -1,     3,    -1,     5,
       6,     7,     8,     9,    19,    -1,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    11,    53,     1,    11,    33,    54,    12,     0,
      33,    13,    54,    34,    38,     1,     3,     5,     6,     7,
       8,     9,    38,    48,    49,    55,    56,    57,    58,    66,
      69,    72,    73,    74,    80,    14,    34,    33,    29,    33,
      73,    31,    31,    31,    19,    21,    22,    23,    24,    25,
      26,    82,    83,     4,    59,    29,    29,    34,    73,    73,
      38,    60,    67,    68,    69,    70,    38,    54,    72,    31,
      35,    36,    38,    64,    65,    75,    77,    78,     1,    38,
      66,     1,    64,    37,    31,    38,    75,    33,    73,    27,
      19,    71,    30,    31,    34,    34,     1,    75,    32,    45,
      46,    47,    85,    39,    40,    41,    42,    43,    44,    84,
      15,    16,    17,    18,    20,    81,    32,    19,    82,    29,
      32,    32,    72,    28,    35,    38,    76,    10,    33,    67,
       9,    32,    32,    33,    64,    75,    75,    33,    75,    38,
      33,    33,    34,    27,    28,    80,    33,    61,    62,    27,
      81,    72,    72,    29,    84,    72,    72,    28,    27,    27,
      35,    36,    37,    63,    79,    34,    30,    28,    75,    34,
      34,    38,    76,    34,    34,    76,    28,    76,    34,    30,
      61,    38,    84,    29,    28,    27,    28,    63,    32,    76,
      69,    28,    27,    33,    29,    32,    76,    72,    69,    33,
      28,    34,    32,    72,    33,    34,    72,    34
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    52,    53,    53,    53,    53,    54,    54,    55,    55,
      55,    56,    56,    57,    57,    58,    58,    59,    59,    60,
      60,    60,    60,    61,    61,    62,    63,    63,    64,    64,
      64,    65,    65,    66,    67,    67,    68,    68,    68,    68,
      69,    69,    69,    70,    71,    71,    71,    71,    71,    72,
      72,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      74,    74,    75,    75,    75,    75,    76,    76,    77,    77,
      78,    78,    79,    79,    79,    80,    80,    80,    80,    81,
      81,    81,    81,    81,    82,    82,    82,    82,    82,    83,
      83,    84,    84,    84,    84,    84,    84,    85,    85,    85
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     6,     4,     3,     3,    13,     4,    13,    15,
       7,     7,     7,     1,     2,     7,     4,     4,     2,     5,
       7,     3,     4,     3,     1,     3,     3,     1,     3,     1,
       3,     3,     1,     2,     3,     1,     1,     1,     1,     1,
       3,     3,     2,     2,     9,     7,     4,     5,     6,     2,
       1,     2,     1,     1,     1,     1,     2,     2,     2,     2,
       1,     1,     3,     3,     5,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 3: /* INICIO: error LLAVE_A F_MAIN LLAVE_C  */
#line 90 "sintactico.y"
                                      {yyerrok;yyclearin;}
#line 1343 "sintactico.tab.c"
    break;

  case 4: /* INICIO: error F_MAIN LLAVE_C  */
#line 91 "sintactico.y"
                              {yyerror(yytext);}
#line 1349 "sintactico.tab.c"
    break;

  case 5: /* INICIO: error LLAVE_A F_MAIN  */
#line 92 "sintactico.y"
                              {yyerror(yytext);}
#line 1355 "sintactico.tab.c"
    break;

  case 7: /* F_MAIN: error LLAVE_A INSTRUCCIONES LLAVE_C  */
#line 95 "sintactico.y"
                                            {yyerrok;yyclearin;}
#line 1361 "sintactico.tab.c"
    break;

  case 10: /* CYCL_FOR: FOR PARENT_A error PARENT_C LLAVE_A INSTRUCCIONES LLAVE_C  */
#line 99 "sintactico.y"
                                                                    {yyerrok ; yyclearin ; }
#line 1367 "sintactico.tab.c"
    break;

  case 12: /* CYCL_WHILE: WHILE PARENT_A error PARENT_C LLAVE_A INSTRUCCIONES LLAVE_C  */
#line 103 "sintactico.y"
                                                                     {yyerrok ; yyclearin ; }
#line 1373 "sintactico.tab.c"
    break;

  case 16: /* IF_SOLO: error LLAVE_A INSTRUCCIONES LLAVE_C  */
#line 111 "sintactico.y"
                                             {yyerrok;yyclearin;}
#line 1379 "sintactico.tab.c"
    break;

  case 30: /* CONDICIONALES: PARENT_A error PARENT_C  */
#line 131 "sintactico.y"
                                       {yyerrok;yyclearin;}
#line 1385 "sintactico.tab.c"
    break;

  case 57: /* INS: INS_SIN_PUNTOCOMA INS  */
#line 167 "sintactico.y"
                           {
                                        yyerrok ; yyclearin ;
                                        fprintf(fichero,"[linea %d]: Error sintactico en linea. \n", yylineno-1);	
                                         }
#line 1394 "sintactico.tab.c"
    break;

  case 58: /* INS: error INS  */
#line 172 "sintactico.y"
                {yyerrok ; yyclearin ;}
#line 1400 "sintactico.tab.c"
    break;

  case 59: /* INS: error PUNTOYCOM  */
#line 173 "sintactico.y"
                     {yyerrok ; yyclearin ; }
#line 1406 "sintactico.tab.c"
    break;


#line 1410 "sintactico.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
                      yytoken, &yylval);
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 200 "sintactico.y"


void yyerror(char *s)
{
        cont_errores++;
       /*  for(int i =0; i<10000;i++){
		if (yylineno==linErr[i]){
			check = 1;
			break;
		}
	} */
	/* if(check==1){
		check=0;
	} 
	else{
		linErr[c]=yylineno;
		printf("Error sintactico en linea %d \n", yylineno);
		fprintf(fichero,"Error sintactico en linea %d \n", yylineno);
		c++;
	} */
	/* printf("Error sintactico en linea %d \n", yylineno); */
	 fprintf(fichero,"[linea %d]: Error sintactico en linea. \n", yylineno);	
	
	
	
      /*   printf("\tError sintactico [linea %d] %s \n", yylineno,yytext);  */
}

int main(){
        fichero = fopen("salida.txt", "w");
	if (yyparse()==1){
		printf("Clean code \n");
	}
	if (cont_errores<1){		
                fprintf(fichero,"░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n░░░░░░░▄▄▀▀▀▀▀▀▀▀▀▀▄▄█▄░░░░▄░░░░█░░░░░░░\n░░░░░░█▀░░░░░░░░░░░░░▀▀█▄░░░▀░░░░░░░░░▄░\n░░░░▄▀░░░░░░░░░░░░░░░░░▀██░░░▄▀▀▀▄▄░░▀░░\n░░▄█▀▄█▀▀▀▀▄░░░░░░▄▀▀█▄░▀█▄░░█▄░░░▀█░░░░\n░▄█░▄▀░░▄▄▄░█░░░▄▀▄█▄░▀█░░█▄░░▀█░░░░█░░░\n▄█░░█░░░▀▀▀░█░░▄█░▀▀▀░░█░░░█▄░░█░░░░█░░░\n██░░░▀▄░░░▄█▀░░░▀▄▄▄▄▄█▀░░░▀█░░█▄░░░█░░░\n██░░░░░▀▀▀░░░░░░░░░░░░░░░░░░█░▄█░░░░█░░░\n██░░░░░░░░░░░░░░░░░░░░░█░░░░██▀░░░░█▄░░░\n██░░░░░░░░░░░░░░░░░░░░░█░░░░█░░░░░░░▀▀█▄\n██░░░░░░░░░░░░░░░░░░░░█░░░░░█░░░░░░░▄▄██\n░██░░░░░░░░░░░░░░░░░░▄▀░░░░░█░░░░░░░▀▀█▄\n░▀█░░░░░░█░░░░░░░░░▄█▀░░░░░░█░░░░░░░▄▄██\n░▄██▄░░░░░▀▀▀▄▄▄▄▀▀░░░░░░░░░█░░░░░░░▀▀█▄\n░░▀▀▀▀░░░░░░░░░░░░░░░░░░░░░░█▄▄▄▄▄▄▄▄▄██\n░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n░░░░░Bien, no hay errores sintactico░░░░\n░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░");
	}
	 
	fclose(fichero);
	
}
/*
**********VERIFICAR CONDICIONALES 
***********CAPTACION DE ERRORES
*/
