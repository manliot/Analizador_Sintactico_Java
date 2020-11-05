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
%start LISTA_I;

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
 INICIO (poner dos puntos) PUBLIC CLASS ID LLAVE_A LLAVE_C {printf("Inicio \n");};
 ***********************/

LISTA_I: LISTA_I I;
         | I;
I: DECLARACION PUNTOYCOM;

DECLARACION: TIPO_VAR ID{printf("declara t1 \n");}
            | TIPO_VAR ID OP_ASIG CONSTANTES{printf("declara t2\n");}
            | TIPO_VAR ID OP_ASIG OPERACION_MATH{printf("declara t3\n");}
            ;
CONSTANTES: CTE_ENT| CTE_REAL |CTE_CAD;
TIPO_VAR: DOUBLE | INT | STRING | CHAR;
OPERACION_MATH: CTE_ENT OPERADORES_MATH CTE_ENT | CTE_ENT OPERADORES_MATH CTE_REAL | CTE_REAL OPERADORES_MATH CTE_ENT;
OPERADORES_MATH: OP_MULT | OP_MOD | OP_SUM | OP_SUST | OP_DIV;


%%
/**********************
 * Codigo C Adicional *
 **********************/
void yyerror(char *s)
{
	printf("\t%s [linea %d]  \n",s, yylineno);
}

int main()
{
        if (yyparse()==1){
		printf("Clean code \n");
	}	
	
}
/*
A implementar
int y=1,x=2;
int y,x;
int y;
int x;
x=0,y=1;
int x = 2 + 2


*/
/*
OPS_ASIG: MASIGUA |MENOSIGUA | PORIGUA |DIVIGUA;
*/