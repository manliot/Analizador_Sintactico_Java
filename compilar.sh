#!/bin/bash
bison -d -rstates sintactico.y  -Wcounterexamples 
flex lexico.l
cc lex.yy.c sintactico.tab.c -o analizador 
