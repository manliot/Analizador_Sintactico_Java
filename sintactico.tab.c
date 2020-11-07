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
  

#line 87 "sintactico.tab.c"

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
  YYSYMBOL_51_n_ = 51,                     /* "\n"  */
  YYSYMBOL_52_r_ = 52,                     /* "\r"  */
  YYSYMBOL_YYACCEPT = 53,                  /* $accept  */
  YYSYMBOL_INICIO = 54,                    /* INICIO  */
  YYSYMBOL_F_MAIN = 55,                    /* F_MAIN  */
  YYSYMBOL_CYCL_FOR = 56,                  /* CYCL_FOR  */
  YYSYMBOL_CYCL_WHILE = 57,                /* CYCL_WHILE  */
  YYSYMBOL_COND_IF = 58,                   /* COND_IF  */
  YYSYMBOL_IF_SOLO = 59,                   /* IF_SOLO  */
  YYSYMBOL_C_ELSE = 60,                    /* C_ELSE  */
  YYSYMBOL_NOM_ARRAY = 61,                 /* NOM_ARRAY  */
  YYSYMBOL_COLUMNAS = 62,                  /* COLUMNAS  */
  YYSYMBOL_COLUMNA = 63,                   /* COLUMNA  */
  YYSYMBOL_FILA = 64,                      /* FILA  */
  YYSYMBOL_CONDICIONALES = 65,             /* CONDICIONALES  */
  YYSYMBOL_CONDICIONAL = 66,               /* CONDICIONAL  */
  YYSYMBOL_DECLARACION = 67,               /* DECLARACION  */
  YYSYMBOL_DECL_VARIABLES = 68,            /* DECL_VARIABLES  */
  YYSYMBOL_DECL_VARIABLE = 69,             /* DECL_VARIABLE  */
  YYSYMBOL_ASIGNACION = 70,                /* ASIGNACION  */
  YYSYMBOL_ASIGNACION_ARRAY = 71,          /* ASIGNACION_ARRAY  */
  YYSYMBOL_ASIGNACION_ARRAY_RIGHT = 72,    /* ASIGNACION_ARRAY_RIGHT  */
  YYSYMBOL_INSTRUCCIONES = 73,             /* INSTRUCCIONES  */
  YYSYMBOL_INS = 74,                       /* INS  */
  YYSYMBOL_OPERACION_MATH = 75,            /* OPERACION_MATH  */
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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   247

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  178

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   307


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
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    77,    77,    79,    81,    82,    85,    87,    88,    90,
      94,    95,    97,    98,    99,   100,   102,   103,   105,   107,
     108,   109,   110,   112,   113,   115,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   127,   129,   130,   131,   132,
     133,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   148,   149,   150,   153,   153,   154,   155,   156,
     156,   157,   157,   157,   158,   158,   158,   158,   160,   160,
     160,   160,   160,   161,   161,   161,   161,   161,   162,   162,
     163,   163,   163,   163,   163,   163,   164,   164,   164
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
  "OP_O", "OP_NO", "CHAR", "COMENTARIO", "ERROR", "\"\\n\"", "\"\\r\"",
  "$accept", "INICIO", "F_MAIN", "CYCL_FOR", "CYCL_WHILE", "COND_IF",
  "IF_SOLO", "C_ELSE", "NOM_ARRAY", "COLUMNAS", "COLUMNA", "FILA",
  "CONDICIONALES", "CONDICIONAL", "DECLARACION", "DECL_VARIABLES",
  "DECL_VARIABLE", "ASIGNACION", "ASIGNACION_ARRAY",
  "ASIGNACION_ARRAY_RIGHT", "INSTRUCCIONES", "INS", "OPERACION_MATH",
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
     305,   306,   307
};
#endif

#define YYPACT_NINF (-117)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-25)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -6,    10,    30,    -2,  -117,    -1,    27,    35,    25,    40,
    -117,    22,    36,    57,    53,    60,    55,    66,    81,   161,
      -5,    71,    80,    84,  -117,  -117,  -117,   192,  -117,  -117,
    -117,  -117,  -117,   105,    90,    95,     3,  -117,    87,  -117,
    -117,  -117,    70,    56,    70,    94,  -117,  -117,  -117,  -117,
    -117,  -117,   146,  -117,    20,  -117,  -117,  -117,  -117,  -117,
     181,   119,  -117,   109,  -117,  -117,   146,  -117,  -117,   -12,
     110,    76,   151,   204,  -117,   125,   122,   121,  -117,  -117,
    -117,   161,  -117,    54,     9,  -117,    87,   128,   126,  -117,
    -117,  -117,    70,  -117,  -117,  -117,  -117,  -117,  -117,   146,
    -117,  -117,  -117,  -117,  -117,   146,   146,   141,   130,    69,
     153,  -117,  -117,   157,     7,   163,  -117,  -117,   161,  -117,
    -117,  -117,   172,   151,   161,  -117,   158,   185,   196,   136,
     191,   197,    78,   188,    75,   127,  -117,    75,    62,  -117,
    -117,  -117,   194,   199,  -117,   163,  -117,   151,   201,  -117,
     203,   205,   206,  -117,   136,  -117,    75,   195,  -117,   207,
     209,  -117,   208,   210,  -117,    75,   195,   211,   212,   213,
     161,  -117,   214,   140,   161,  -117,   149,  -117
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,     0,     0,
       2,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    64,    65,    66,     0,    67,    47,
      44,    46,    45,     7,     0,     0,     0,    42,     0,    49,
      50,    51,     0,     0,     0,    77,    78,    79,    73,    74,
      75,    76,     0,    34,     0,     8,    43,    48,     3,    41,
      29,    30,    25,    27,    28,    31,     0,    59,    60,    58,
       0,    22,     0,    52,    57,     0,     0,     0,    33,    58,
      32,     0,    11,     0,     0,    35,     0,     0,     0,    86,
      87,    88,     0,    80,    81,    82,    83,    84,    85,     0,
      68,    70,    71,    72,    69,     0,     0,     0,     0,     0,
      14,    55,    56,     0,     0,     0,    26,    54,     0,    21,
      23,    53,     0,     0,     0,    10,     0,    15,     0,     0,
       0,    17,     0,     0,     0,     0,    12,     0,     0,    61,
      62,    63,     0,    20,    38,     0,     9,     0,     0,     6,
       0,    39,     0,    18,     0,    16,     0,     0,    13,     0,
      40,    19,     0,     0,    37,     0,     0,     0,     0,     0,
       0,    36,     0,     0,     0,     4,     0,     5
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,    93,
    -117,    85,   -31,  -117,   198,   160,  -117,   -37,  -117,  -117,
     -79,   -36,   -49,   -94,  -117,  -117,  -117,   129,  -117,  -117,
    -117,  -116,  -117
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     8,    30,    31,    32,    33,    55,    61,   130,
     131,   142,    70,    71,    34,    62,    63,    35,    65,    85,
      36,    37,    72,   113,    73,    74,   143,    38,   105,    52,
      53,    99,    92
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      59,    64,   109,    80,    20,     1,    21,   134,    22,    23,
      24,    25,    26,    77,    24,    25,    26,    87,    82,   114,
     -24,    20,     3,    21,    39,    22,    23,    24,    25,    26,
       4,   156,     6,   -24,   -24,   -24,     5,    58,     7,   132,
     148,    27,   115,   150,   152,   135,    40,    41,     9,    64,
     120,    28,    29,    81,    11,    28,   121,   122,    27,    10,
      12,   119,   162,    24,    25,    26,    14,    13,    28,    29,
      20,   168,    21,    59,    22,    23,    24,    25,    26,    20,
      15,    21,   110,    22,    23,    24,    25,    26,    16,   111,
     151,   173,   112,    17,    75,   176,    59,   111,    18,    59,
     112,    66,    42,   125,    28,    67,    68,    27,    69,    54,
     111,    43,   146,   112,    19,    44,    27,    28,    29,    56,
     163,    89,    90,    91,    57,    60,    28,    29,    20,   169,
      21,    78,    22,    23,    24,    25,    26,    59,    84,    86,
      59,    20,    88,    21,   106,    22,    23,    24,    25,    26,
      20,   107,    21,   108,    22,    23,    24,    25,    26,   118,
     117,   149,    20,   124,    21,    27,    22,    23,    24,    25,
      26,   139,   140,   141,   175,    28,    29,    66,    27,   123,
     126,    67,    68,   177,    79,   127,   136,    27,    28,    29,
      93,    94,    95,    96,    97,    98,   129,    28,    29,    27,
      45,   133,    46,    47,    48,    49,    50,    51,    83,    28,
      29,    45,   137,    46,    47,    48,    49,    50,    51,   100,
     101,   102,   103,   138,   104,   144,   147,   145,   153,   154,
     157,   158,   159,    27,   160,   164,   165,   166,   155,   161,
     171,    76,   167,   128,   170,   172,   116,   174
};

static const yytype_uint8 yycheck[] =
{
      36,    38,    81,    52,     1,    11,     3,   123,     5,     6,
       7,     8,     9,    44,     7,     8,     9,    66,    54,    10,
      32,     1,    12,     3,    29,     5,     6,     7,     8,     9,
       0,   147,    33,    45,    46,    47,    38,    34,    11,   118,
     134,    38,    33,   137,   138,   124,    51,    52,    13,    86,
      99,    48,    49,    33,    14,    48,   105,   106,    38,    34,
      38,    92,   156,     7,     8,     9,     9,    31,    48,    49,
       1,   165,     3,   109,     5,     6,     7,     8,     9,     1,
      27,     3,    28,     5,     6,     7,     8,     9,    28,    35,
      28,   170,    38,    38,    38,   174,   132,    35,    32,   135,
      38,    31,    31,    34,    48,    35,    36,    38,    38,     4,
      35,    31,    34,    38,    33,    31,    38,    48,    49,    29,
     157,    45,    46,    47,    29,    38,    48,    49,     1,   166,
       3,    37,     5,     6,     7,     8,     9,   173,    19,    30,
     176,     1,    32,     3,    19,     5,     6,     7,     8,     9,
       1,    29,     3,    32,     5,     6,     7,     8,     9,    33,
      32,    34,     1,    33,     3,    38,     5,     6,     7,     8,
       9,    35,    36,    37,    34,    48,    49,    31,    38,    38,
      27,    35,    36,    34,    38,    28,    28,    38,    48,    49,
      39,    40,    41,    42,    43,    44,    33,    48,    49,    38,
      19,    29,    21,    22,    23,    24,    25,    26,    27,    48,
      49,    19,    27,    21,    22,    23,    24,    25,    26,    15,
      16,    17,    18,    27,    20,    34,    38,    30,    34,    30,
      29,    28,    27,    38,    28,    28,    27,    29,   145,   154,
      28,    43,    32,   114,    33,    32,    86,    33
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    11,    54,    12,     0,    38,    33,    11,    55,    13,
      34,    14,    38,    31,     9,    27,    28,    38,    32,    33,
       1,     3,     5,     6,     7,     8,     9,    38,    48,    49,
      56,    57,    58,    59,    67,    70,    73,    74,    80,    29,
      51,    52,    31,    31,    31,    19,    21,    22,    23,    24,
      25,    26,    82,    83,     4,    60,    29,    29,    34,    74,
      38,    61,    68,    69,    70,    71,    31,    35,    36,    38,
      65,    66,    75,    77,    78,    38,    67,    65,    37,    38,
      75,    33,    74,    27,    19,    72,    30,    75,    32,    45,
      46,    47,    85,    39,    40,    41,    42,    43,    44,    84,
      15,    16,    17,    18,    20,    81,    19,    29,    32,    73,
      28,    35,    38,    76,    10,    33,    68,    32,    33,    65,
      75,    75,    75,    38,    33,    34,    27,    28,    80,    33,
      62,    63,    73,    29,    84,    73,    28,    27,    27,    35,
      36,    37,    64,    79,    34,    30,    34,    38,    76,    34,
      76,    28,    76,    34,    30,    62,    84,    29,    28,    27,
      28,    64,    76,    70,    28,    27,    29,    32,    76,    70,
      33,    28,    32,    73,    33,    34,    73,    34
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    53,    54,    55,    56,    56,    57,    58,    58,    59,
      60,    60,    61,    61,    61,    61,    62,    62,    63,    64,
      64,    65,    65,    66,    66,    67,    68,    68,    69,    69,
      69,    69,    70,    70,    70,    71,    72,    72,    72,    72,
      72,    73,    73,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    75,    75,    75,    76,    76,    77,    77,    78,
      78,    79,    79,    79,    80,    80,    80,    80,    81,    81,
      81,    81,    81,    82,    82,    82,    82,    82,    83,    83,
      84,    84,    84,    84,    84,    84,    85,    85,    85
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     6,    13,    13,    15,     7,     1,     2,     7,
       4,     2,     5,     7,     3,     4,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     2,     3,     1,     1,     1,
       1,     1,     3,     3,     2,     2,     9,     7,     4,     5,
       6,     2,     1,     2,     1,     1,     1,     1,     2,     2,
       2,     2,     1,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1
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

#line 1291 "sintactico.tab.c"

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

#line 165 "sintactico.y"


void yyerror(char *s)
{
	printf("\tError sintactico [linea %d]  \n", yylineno);
}

int main()
{
  if (yyparse()==1){
		printf("Clean code \n");
	}	
	
}
/*


TENER EN CUENTA LAS DIFERENTES FORMAS DE HACER UN PARA

locura: ID CORCHET_A CORCHET_C
*/
/*
int matriz[][], i,j;
int matriz[][]= new , i,j;
int matriz[][] = new int[3][3];
int [][] matriz = {{2,4,4},{6,6,9},{8,10,12}};
int [][] ventas = new int[4][6];

MATRIZ: TIPO_VAR ID CORCHET_A CORCHET_C CORCHET_A CORCHET_C OPS_ASIG NEW TIPO_VAR CORCHET_A CORCHET_C CORCHET_A CORCHET_C ;


*/

/*
NOTAS:
  VECTORES, MATRIZ, 

         | FOR PARENT_A DECLARACION PUNTOYCOM ID OPERADORES_REL ID PUNTOYCOM ID OP_ASIG ID OPERADORES_MATH CONSTANTES_NUM PARENT_C LLAVE_A INSTRUCCIONES LLAVE_C 
          | FOR PARENT_A DECL_VARIABLES PUNTOYCOM ID OPERADORES_REL ID PUNTOYCOM ID INCREMENTO_SYMBOLS PARENT_C LLAVE_A INSTRUCCIONES LLAVE_C
          | FOR PARENT_A DECL_VARIABLES PUNTOYCOM ID OPERADORES_REL ID PUNTOYCOM ID OP_ASIG ID OPERADORES_MATH CONSTANTES_NUM PARENT_C LLAVE_A INSTRUCCIONES LLAVE_C
         
CONSTANTES: CTE_ENT| CTE_REAL | CTE_CAD;
TIPO_VAR: DOUBLE | INT | STRING | CHAR;

OPERADORES_MATH: OP_MULT | OP_MOD | OP_SUM | OP_SUST | OP_DIV;
ASIG_SYMBOLS: MASIGUA | MENOSIGUA |PORIGUA |DIVIGUA | OP_ASIG;
INCREMENTO_SYMBOLS: PLUSPLUS| MENMEN;
OPERADORES_REL: OP_IGUAL| OP_MENIGUA| OP_MAYIGUA| DIFERENTE |MAYOR |MENOR ;
OPERADORES_LOGICOS: OP_Y| OP_O| OP_NO;
%%

void yyerror(char *s)
{
	printf("\tError sintactico [linea %d]  \n", yylineno);
}

int main()
{
  if (yyparse()==1){
		printf("Clean code \n");
	}	
	
}
/*


TENER EN CUENTA LAS DIFERENTES FORMAS DE HACER UN PARA

locura: ID CORCHET_A CORCHET_C
*/
/*
int matriz[][], i,j;
int matriz[][]= new , i,j;
int matriz[][] = new int[3][3];
int [][] matriz = {{2,4,4},{6,6,9},{8,10,12}};
int [][] ventas = new int[4][6];

MATRIZ: TIPO_VAR ID CORCHET_A CORCHET_C CORCHET_A CORCHET_C OPS_ASIG NEW TIPO_VAR CORCHET_A CORCHET_C CORCHET_A CORCHET_C ;


*/

/*
NOTAS:
  VECTORES, MATRIZ, 

         | FOR PARENT_A DECLARACION PUNTOYCOM ID OPERADORES_REL ID PUNTOYCOM ID OP_ASIG ID OPERADORES_MATH CONSTANTES_NUM PARENT_C LLAVE_A INSTRUCCIONES LLAVE_C 
          | FOR PARENT_A DECL_VARIABLES PUNTOYCOM ID OPERADORES_REL ID PUNTOYCOM ID INCREMENTO_SYMBOLS PARENT_C LLAVE_A INSTRUCCIONES LLAVE_C
          | FOR PARENT_A DECL_VARIABLES PUNTOYCOM ID OPERADORES_REL ID PUNTOYCOM ID OP_ASIG ID OPERADORES_MATH CONSTANTES_NUM PARENT_C LLAVE_A INSTRUCCIONES LLAVE_C
         
*/
