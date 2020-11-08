/*****************
 * Declaraciones *
 ****************/ 

%{
	int yylineno;
	char *yyval;
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include "sintactico.tab.h"	
	FILE* fichero;
	char* substring(char*, int, int);
	
%}

DIGITO [0-9]
NUMERO {DIGITO}+("."{DIGITO}+)?
letra [a-zA-Z]
variable ({letra})({letra}|{DIGITO})* 
entero ({DIGITO})+ 
noSymbol2 [^-\n*/\+=%{}\[\];,()><!|& \t\r]
noSymbol [^*-/\-+=%{}\[\];,()><!|& \n\t\r]
types ("int"|"String"|"double")
%%


 /*********************
  * Reglas y Acciones *
 **********************/


("//".*|"/*"(.*[\n]*)*"*/")          {
										int longi=strlen(yytext);
										int i=1;
										char *p;
										while(i<=longi)
										{
											p=substring(yytext, i, 1);										
											if(strcmp(p, "\n") == 0 ){
												yylineno++;
											}
											/* printf("->%s<-\n",p);	  */
											i=i+1;
										}																			
										yyval="COMENTARIO";									
									}

"if"              {yyval="IF";return IF;}
"else"            {yyval="ELSE";return ELSE;}
"for"    	  {yyval="FOR";return FOR;}                                       
"while"       {yyval="WHILE";return WHILE;}
"double"  	  {yyval="DOUBLE";return DOUBLE;}
"int"     	  {yyval="INT";return INT;}
"String"  	  {yyval="STRING";return STRING;}
"new"    	  {yyval="NEW";return NEW;}
"public"  	  {yyval="PUBLIC";return PUBLIC;}            
"class"  	  {yyval="CLASS";return CLASS;}          
"static" 	  {yyval="STATIC";return STATIC;}
"void"   	  {yyval="VOID";return VOID;}
"char"  	  {yyval="CHAR";return CHAR;}
","		  {yyval="COMA";return COMA;}
"*"    	      {yyval="OP_MULT";return OP_MULT;}
"+"     	  {yyval="OP_SUM";return OP_SUM;}
"-"     	  {yyval="OP_SUST";return OP_SUST;}
"/"     	  {yyval="OP_DIV";return OP_DIV;}
"="     	  {yyval="OP_ASIG";return OP_ASIG;}
"%"      	  {yyval="OP_MOD";return OP_MOD;}
"++"    	  {yyval="PLUSPLUS";return PLUSPLUS;}
"--"    	  {yyval="MENMEN";return MENMEN;}
"+="    	  {yyval="MASIGUA";return MASIGUA;}
"-="    	  {yyval="MENOSIGUA";return MENOSIGUA;}
"*="    	  {yyval="PORIGUA";return PORIGUA;}
"/="    	  {yyval="DIVIGUA";return DIVIGUA;}
"{"		  {yyval="LLAVE_A";return LLAVE_A;}
"}"		  {yyval="LLAVE_C";return LLAVE_C;}
";"		  {yyval="PUNTOYCOM";return PUNTOYCOM;}
"("		  {yyval="PARENT_A";return PARENT_A;}
")"		  {yyval="PARET_C";return PARENT_C;}
"["		  {yyval="CORCHET_A";return CORCHET_A;}
"]"		  {yyval="CORCHET_C";return CORCHET_C;}
{entero}                                         {yyval="CTE_ENT";return CTE_ENT;}
({DIGITO})+"."({DIGITO})+(e([-|+])[1-9]+)?   {yyval="CTE_REAL";return CTE_REAL;}
("\"")([^\n\"]*([.])*)*("\"")                    {yyval="CTE_CAD";return CTE_CAD;}
{variable}                                       {yyval="ID";return ID;}
"=="		  {yyval="IGUAL";return OP_IGUAL;}
"<="		  {yyval="OP_MENIGUA";return OP_MENIGUA;}
">="		  {yyval="OP_MAYIGUA";return OP_MAYIGUA;}
"<>"		  {yyval="DIFERENTE";return DIFERENTE;}
">"		  {yyval="MAYOR";return MAYOR;}
"<"		  {yyval="MENOR";return MENOR;}
"!="		  {yyval="DIFERENTE";return DIFERENTE;}
"&&"		  {yyval="OP_Y";return OP_Y;}
"||"		  {yyval="OP_O";return OP_O;}
"!"		  {yyval="OP_NO";return OP_NO;}
\t			;
\r			;
[ ]			;
\n			{yylineno++;}
({noSymbol}|^)+({variable}|{entero})({noSymbol2})*                           {yyval="ERROR";/*  printf("Erro lexico tipo 1");return ERROR; */};
({variable}|{entero})({noSymbol2})+({letra}|{DIGITO})*({noSymbol2})*         {yyval="ERROR";/* printf("Erro lexico tipo 2");return ERROR; */};
.[.]* {yyval="ERROR";/* printf("Erro lexico Simbolo no definido");return ERROR; */}

%%
int yywrap(){
	return 1;
}

char *substring(char *string, int position, int length)
{
   char *p;
   int c; 
   p = malloc(length+1);   
   if (p == NULL){
      printf("Unable to allocate memory.\n");
      exit(1);
   } 
   for (c = 0; c < length; c++){
      *(p+c) = *(string+position-1);      
      string++;  
   } 
   *(p+c) = '\0'; 
   return p;
}
/*********************
 * Codigo de Usuario *
 {NUMERO} {yyval.real=atof(yytext); return(NUMERO);}
*********************/



