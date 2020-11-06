%{

/********************** 
 * Declaraciones en C *
 **********************/


  #include <stdio.h>
  #include <stdlib.h>
  extern int yylex(void);
  extern char *yytext;
  extern int yylineno;
  void yyerror(char *s);
  
%}

/*************************
      Declaraciones 
 *************************/
%start INICIO;

%token IF          
%token ELSE         
%token FOR         
%token WHILE      
%token DOUBLE      
%token INT         
%token STRING     
%token NEW         
%token PUBLIC      
%token CLASS      
%token STATIC     
%token VOID       
%token OP_MULT    
%token OP_SUM     
%token OP_SUST    
%token OP_DIV     
%token OP_ASIG    
%token OP_MOD     
%token PLUSPLUS   
%token MENMEN     
%token MASIGUA   
%token MENOSIGUA 
%token PORIGUA    
%token DIVIGUA    
%token CORCHET_A    
%token CORCHET_C    
%token PUNTOYCOM
%token COMA  
%token PARENT_A   
%token PARENT_C   
%token LLAVE_A  
%token LLAVE_C  
%token CTE_ENT    
%token CTE_REAL   
%token CTE_CAD    
%token ID         
%token OP_IGUAL  
%token OP_MENIGUA 
%token OP_MAYIGUA 
%token DIFERENTE  
%token MAYOR      
%token MENOR      
%token OP_Y       
%token OP_O       
%token OP_NO      
%token CHAR       
%token COMENTARIO 
%token ERROR      


%%
/***********************
 Reglas Gramaticales 
 OPERACION_MATH CTE_ENT OPERADORES_MATH CTE_ENT | CTE_ENT OPERADORES_MATH CTE_REAL | CTE_REAL OPERADORES_MATH CTE_ENT;
 INICIO (poner dos puntos) PUBLIC CLASS ID LLAVE_A LLAVE_C {printf("Inicio \n");};
 ***********************/

INICIO: PUBLIC CLASS ID LLAVE_A F_MAIN LLAVE_C;  
F_MAIN: PUBLIC STATIC VOID ID PARENT_A STRING CORCHET_A CORCHET_C ID PARENT_C LLAVE_A INSTRUCCIONES LLAVE_C;
CYCL_FOR: FOR PARENT_A TIPO_VAR ID OP_ASIG CTE_ENT PUNTOYCOM ID OPERADORES_REL ID PUNTOYCOM ID INCREMENTO_SYMBOLS PARENT_C LLAVE_A INSTRUCCIONES LLAVE_C{printf("PARA \n");};
CYCL_WHILE: PARENT_A CONDICIONALES PARENT_C LLAVE_A INSTRUCCIONES LLAVE_C;
COND_IF: IF PARENT_A CONDICIONALES PARENT_C LLAVE_A INSTRUCCIONES LLAVE_C;
CONDICIONALES: CONDICIONAL OPERADORES_LOGICOS CONDICIONALES
              |CONDICIONAL;
CONDICIONAL:  OPERACION_MATH OPERADORES_REL OPERACION_MATH
            |ID;
DECLARACION: TIPO_VAR DECL_VARIABLES {printf("declara\n");} ;
DECL_VARIABLES: DECL_VARIABLE COMA DECL_VARIABLES
               |DECL_VARIABLE;            
DECL_VARIABLE: ASIGNACION
              |ID;
ASIGNACION: ID ASIG_SYMBOLS OPERACION_MATH {printf("ASIG \n");}
            | ID OP_ASIG CTE_CAD {printf("ASIGNACION STRING \n");}
;   

INSTRUCCIONES: INSTRUCCIONES INS;
         | INS;
INS: DECLARACION PUNTOYCOM
    |CYCL_FOR
    |COND_IF
    |CYCL_WHILE
    |COMENTARIO
    |ASIGNACION PUNTOYCOM;
OPERACION_MATH: CONSTANTES_NUM OPERADORES_MATH OPERACION_MATH
               | CONSTANTES_NUM 
               | ID OPERADORES_MATH OPERACION_MATH
               | ID;
CONSTANTES_NUM: CTE_ENT| CTE_REAL;
TIPO_VAR: DOUBLE | INT | STRING | CHAR;
OPERADORES_MATH: OP_MULT | OP_MOD | OP_SUM | OP_SUST | OP_DIV;
ASIG_SYMBOLS: MASIGUA | MENOSIGUA |PORIGUA |DIVIGUA | OP_ASIG;
INCREMENTO_SYMBOLS: PLUSPLUS| MENMEN;
OPERADORES_REL: OP_IGUAL| OP_MENIGUA| OP_MAYIGUA| DIFERENTE |MAYOR |MENOR ;
OPERADORES_LOGICOS: OP_Y| OP_O| OP_NO;
%%
/**********************
 * Codigo C Adicional *
 **********************/
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

¡¡¡¡¡¡¡¡¡¡ IMPLEMENTAR QUE NO SE DETENGA CON LOS ERRORES !!!!!!!!!




TENER EN CUENTA LAS DIFERENTES FORMAS DE HACER UN PARA


*/
/*
int matriz[][] = new int[3][3];
int [][] matriz = {{2,4,4},{6,6,9},{8,10,12}};
int [][] ventas = new int[4][6];

MATRIZ: TIPO_VAR ID CORCHET_A CORCHET_C CORCHET_A CORCHET_C OPS_ASIG NEW TIPO_VAR CORCHET_A CORCHET_C CORCHET_A CORCHET_C ;


*/

/*
NOTAS:
  VECTORES, MATRIZ, 
  nOTE QUE EL PARA ESTA PARA UN CASO EN ESPECIFICO
*/