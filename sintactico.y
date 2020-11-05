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
%token LLAVE_A    
%token LLAVE_C    
%token PUNTOYCOM
%token COMA  
%token PARENT_A   
%token PARENT_C   
%token CORCHET_A  
%token CORCHET_C  
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
%token COMENTARIO1
%token ERROR      


%%
/***********************
 * Reglas Gramaticales *
 ***********************/

INICIO: PUBLIC CLASS ID LLAVE_A ID LLAVE_C;
	

%%
/**********************
 * Codigo C Adicional *
 **********************/
void yyerror(char *s)
{
	printf("Error sintactico %d \n", yylineno);
}

int main()
{
        if (yyparse()==1){
		printf("Clean code \n");
	}	
	
}