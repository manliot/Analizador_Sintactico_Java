#!/bin/bash
bison -d sintactico.y -Wcounterexamples
flex lexico.l
cc lex.yy.c sintactico.tab.c -o analizador
