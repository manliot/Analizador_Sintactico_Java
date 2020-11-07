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
  int linerr [1000];
  int c;
  int check;
  FILE* fichero;
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
 ***********************/

INICIO: PUBLIC CLASS ID LLAVE_A F_MAIN LLAVE_C;  

F_MAIN: PUBLIC STATIC VOID ID PARENT_A STRING CORCHET_A CORCHET_C ID PARENT_C LLAVE_A INSTRUCCIONES LLAVE_C;

CYCL_FOR:  FOR PARENT_A DECLARACION PUNTOYCOM ID OPERADORES_REL DIMENSION PUNTOYCOM ASIGNACION PARENT_C LLAVE_A INSTRUCCIONES LLAVE_C 
          |FOR PARENT_A ID ASIG_SYMBOLS OPERACION_MATH_PAREN PUNTOYCOM ID OPERADORES_REL DIMENSION PUNTOYCOM ASIGNACION PARENT_C LLAVE_A INSTRUCCIONES LLAVE_C 
          ;

CYCL_WHILE: WHILE PARENT_A CONDICIONALES PARENT_C LLAVE_A INSTRUCCIONES LLAVE_C;

COND_IF: IF_SOLO 
        | IF_SOLO C_ELSE;

IF_SOLO: IF PARENT_A CONDICIONALES PARENT_C LLAVE_A INSTRUCCIONES LLAVE_C
         /* |IF PARENT_A CONDICIONALES PARENT_C  INS  */
         ; 

C_ELSE: ELSE LLAVE_A INSTRUCCIONES LLAVE_C  
        |ELSE INS; 

NOM_ARRAY: ID CORCHET_A CORCHET_C CORCHET_A CORCHET_C
          |ID CORCHET_A DIMENSION CORCHET_C CORCHET_A DIMENSION CORCHET_C
          |ID CORCHET_A CORCHET_C
          |ID CORCHET_A DIMENSION CORCHET_C; 
          
COLUMNAS: COLUMNA COMA COLUMNAS       
          |  COLUMNA;                             
                          
COLUMNA: LLAVE_A FILA LLAVE_C  ;

FILA:  CONSTANTES COMA FILA       
        | CONSTANTES ;        
CONDICIONALES: CONDICIONAL OPERADORES_LOGICOS CONDICIONALES
              |CONDICIONAL;

CONDICIONAL: OPERACION_MATH_PAREN OPERADORES_REL OPERACION_MATH_PAREN
            |ID;

DECLARACION: TIPO_VAR DECL_VARIABLES;

DECL_VARIABLES: DECL_VARIABLE COMA DECL_VARIABLES
               |DECL_VARIABLE;            
DECL_VARIABLE: ASIGNACION
              |ID
              |NOM_ARRAY
              |ASIGNACION_ARRAY;
ASIGNACION: ID ASIG_SYMBOLS OPERACION_MATH_PAREN
            | ID OP_ASIG CTE_CAD 
            | ID INCREMENTO_SYMBOLS;  

ASIGNACION_ARRAY: NOM_ARRAY ASIGNACION_ARRAY_RIGHT;

ASIGNACION_ARRAY_RIGHT: OP_ASIG NEW TIPO_VAR CORCHET_A DIMENSION CORCHET_C CORCHET_A DIMENSION CORCHET_C
                        |OP_ASIG NEW TIPO_VAR CORCHET_A  CORCHET_C CORCHET_A  CORCHET_C
                        |OP_ASIG LLAVE_A COLUMNAS LLAVE_C                        
                        |OP_ASIG NEW TIPO_VAR CORCHET_A CORCHET_C
                        |OP_ASIG NEW TIPO_VAR CORCHET_A DIMENSION CORCHET_C
                         ;

INSTRUCCIONES: INSTRUCCIONES INS;
         | INS;
INS: DECLARACION PUNTOYCOM
    |CYCL_FOR
    |COND_IF
    |CYCL_WHILE
    |COMENTARIO
    |ASIGNACION PUNTOYCOM
    |error PUNTOYCOM
    |error "\n"
    |error "\r"    
   /*  |error {yyerrok ; yycleari;} */
    | PARENT_A error PARENT_C
    ;

OPERACION_MATH_PAREN:   PARENT_A OPERACION_MATH_PAREN PARENT_C
                        |CONSTANTES_NUM_ID OPERADORES_MATH OPERACION_MATH_PAREN
                        |PARENT_A OPERACION_MATH_PAREN PARENT_C OPERADORES_MATH OPERACION_MATH_PAREN
                        |CONSTANTES_NUM_ID;


/* OPERACION_MATH: CONSTANTES_NUM_ID
               |CONSTANTES_NUM_ID OPERADORES_MATH OPERACION_MATH
               |PARENT_A OPERACION_MATH PARENT_C
               ; */

DIMENSION: CTE_ENT| ID;
CONSTANTES_NUM_ID: CONSTANTES_NUM
                  | ID ; 
CONSTANTES_NUM: CTE_ENT| CTE_REAL;
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
       /*  for(int i =0; i<10000;i++){
		if (yylineno==linErr[i]){
			check = 1;
			break;
		}
	} */
	/* if(check==1){
		check=0;
	} */
	/* else{
		linErr[c]=yylineno;
		printf("Error sintactico en linea %d \n", yylineno);
		fprintf(fichero,"Error sintactico en linea %d \n", yylineno);
		c++;
	} */
	/* printf("Error sintactico en linea %d \n", yylineno); */
	fprintf(fichero,"[linea %d]: Error sintactico en linea. \n", yylineno);	
	
	
	printf("\tError sintactico [linea %d]  \n", yylineno);
}

int main(){
        fichero = fopen("salida.txt", "w");
	/* if (yyparse()==1){
		printf("Clean code \n");
	}
	if (c<1){
		fprintf(fichero,"Codigo limpio");
	}
	 */	
        fprintf(fichero,"░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n░░░░░░░▄▄▀▀▀▀▀▀▀▀▀▀▄▄█▄░░░░▄░░░░█░░░░░░░\n░░░░░░█▀░░░░░░░░░░░░░▀▀█▄░░░▀░░░░░░░░░▄░\n░░░░▄▀░░░░░░░░░░░░░░░░░▀██░░░▄▀▀▀▄▄░░▀░░\n░░▄█▀▄█▀▀▀▀▄░░░░░░▄▀▀█▄░▀█▄░░█▄░░░▀█░░░░\n░▄█░▄▀░░▄▄▄░█░░░▄▀▄█▄░▀█░░█▄░░▀█░░░░█░░░\n▄█░░█░░░▀▀▀░█░░▄█░▀▀▀░░█░░░█▄░░█░░░░█░░░\n██░░░▀▄░░░▄█▀░░░▀▄▄▄▄▄█▀░░░▀█░░█▄░░░█░░░\n██░░░░░▀▀▀░░░░░░░░░░░░░░░░░░█░▄█░░░░█░░░\n██░░░░░░░░░░░░░░░░░░░░░█░░░░██▀░░░░█▄░░░\n██░░░░░░░░░░░░░░░░░░░░░█░░░░█░░░░░░░▀▀█▄\n██░░░░░░░░░░░░░░░░░░░░█░░░░░█░░░░░░░▄▄██\n░██░░░░░░░░░░░░░░░░░░▄▀░░░░░█░░░░░░░▀▀█▄\n░▀█░░░░░░█░░░░░░░░░▄█▀░░░░░░█░░░░░░░▄▄██\n░▄██▄░░░░░▀▀▀▄▄▄▄▀▀░░░░░░░░░█░░░░░░░▀▀█▄\n░░▀▀▀▀░░░░░░░░░░░░░░░░░░░░░░█▄▄▄▄▄▄▄▄▄██\n░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n░░░░░Bien, no hay errores sintactico░░░░");
	fclose(fichero);
	
}
/*

**********VERIFICAR CONDICIONALES 
***********CAPTACION DE ERRORES

*/






