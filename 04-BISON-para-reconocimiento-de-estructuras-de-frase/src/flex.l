%option noyywrap
%option yylineno
/* %option debug */

%{
#include "tp4.h"
#include <stdio.h>
#include <string.h>
#include "bison.tab.h"


%}
/* DEFINICIONES */
/******* DIRECTIVAS PREPROCESAMIENTO *******/
DIRECTIVAS_PREPROCESAMIENTO {INCLUDE}|{DEFINE}
INCLUDE "#include"{ESPACIO}({LITERAL_CADENA}|{LIBRERIA})
DEFINE "#define"({ESPACIO}({CARACTERES_SINGULARES}+){ESPACIO}{CONSTANTE})
LIBRERIA <((.)+)>
/**************** PALABRAS RESERVADAS ****************/
PALABRAS_RESERVADAS_TIPOS_DE_DATOS char|double|float|int|short|long|signed|unsigned|void
PALABRAS_RESERVADAS_ESTRUCTURA_DE_CONTROL if|else|switch|for|do|break|continue|while|return|goto
PALABRAS_RESERVADAS_OTHERS auto|case|const|default|enum|extern|register|sizeof|static|struct|typedef|union|volatile
CALIFICADOR_TIPO const|volatile 
TIPO_STRUCT struct|union
/******* OPERADORES Y CARACTERES DE PUNTUACION *******/
OP_CARACT_DE_PUNTUACION ";"|"["|"]"|"("|")"|"{"|"}"|"."|"->"|"++"|"--"|"&"|"*"|"+"|"-"|"~"|"!"|"/"|"%"|"<<"|">>"|"<"|">"|"<="|">="|"=="|"!="|"^"|"|"|"&&"|"||"|"="|"*="|"/="|"%="|"+="|"-="|"<<="|">>="|"&="|"^="|"|="|"?"|":"|"..."|","|"#"|"##"
OP_ASIGNACION "="|"*="|"/="|"%="|"+="|"-="|"<<="|">>="|"&="|"^="|"|="
EXPR_ASIGNACION "=="|"!="
EXPR_RELACION "<"|">"|"<="|">="
EXPR_CORRIMIENTO "<<"|">>"
OP_BASICA "+"|"-"
EXPR_MULTIPLICATIVA "*"|"/"|"%"
OP_INCREMENTO "++"|"--"
OP_UNARIO "&"|"*"|"+"|"-"|"~"|"!" 
/**************** CONSTANTES ENTERAS *****************/
CONSTANTE {CONST_ENTERA}|{CONST_PTOFLOTANTE}|{CONST_CARACTER}|{LITERAL_CADENA}
/******* Constantes Enteras Decimales *******/
CONST_ENTERA      {CONST_DECIMAL}{SUFIJO_ENTERO}?|{CONST_OCTAL}{SUFIJO_ENTERO}?|{CONST_HEXADECIMAL}{SUFIJO_ENTERO}?
CONST_HEXADECIMAL ((0x)|(0X)){DIGITO_HEXADECIMAL}+
CONST_OCTAL       0{DIGITO_OCTAL}*
CONST_DECIMAL     {DIGITO_NO_CERO}{DIGITO_DECIMAL}*
SUFIJO_ENTERO  {SUFIJO_U}|{SUFIJO_L}|({SUFIJO_L}{SUFIJO_U})|({SUFIJO_U}{SUFIJO_L})
SUFIJO_L "L"|"l"
SUFIJO_U "U"|"u"
/******** Constante Real *********/
CONST_PTOFLOTANTE ({SIGNO}?{DIGITO_DECIMAL}*\.{DIGITO_DECIMAL}*{PARTE_EXPONENTE}?)|({SIGNO}?{DIGITO_DECIMAL}+(\.|{DIGITO_DECIMAL}*)?{PARTE_EXPONENTE})
CONST_REAL      {CONST_FRAC}{PARTE_EXPONENTE}?{SUFIJO_REAL}?|{DIGITO_DECIMAL}+{PARTE_EXPONENTE}{SUFIJO_REAL}?
CONST_FRAC      ({DIGITO_NO_CERO}{DIGITO_DECIMAL}*\.{DIGITO_DECIMAL}+)|{DIGITO_DECIMAL}+ 
PARTE_EXPONENTE {OPERADOR_E}{SIGNO}?{DIGITO_DECIMAL}+
OPERADOR_E      "E"|"e"
SIGNO           "-"|"+"
SUFIJO_REAL     "f"|"F"|"l"|"L"
/******** Constante Caracter ********/
CONST_CARACTER '({CARACTERES_SINGULARES}|{SECUENCIA_DE_ESCAPE}|{ESPACIO_EN_BLANCO}|{CARACTERES_ESPECIALES})'
/****************** LITERAL CADENA *******************/
LITERAL_CADENA                   \"(\\.|[^"\\])*\"
SECUENCIA_CARACTERES             {CARACTER}*
CARACTER                         [{DIGITO_NO_CERO}{DIGITO_DECIMAL}{CARACTERES_ESPECIALES}{SECUENCIA_DE_ESCAPE}]
/******************* IDENTIFICADOR *******************/
IDENTIFICADOR {CARACTERES_SINGULARES}({CARACTERES_SINGULARES}|{DIGITO_DECIMAL})*
/********* Secuencia de Escape **********/
SECUENCIA_DE_ESCAPE              [{SECUENCIA_DE_ESCAPE_SIMPLE}{SECUENCIA_DE_ESCAPE_OCTAL}{SECUENCIA_DE_ESCAPE_HEXADECIMAL}]
SECUENCIA_DE_ESCAPE_SIMPLE       "\'"|"\""|"\?"|"\\"|"\a"|"\b"|"\f"|"\n"|"\r"|"\t" |"\v" 
SECUENCIA_DE_ESCAPE_OCTAL        \[{DIGITO_OCTAL}{1,3}] 
SECUENCIA_DE_ESCAPE_HEXADECIMAL  \0[xX][{DIGITO_HEXADECIMAL}{1,2}]
/********* Digitos y Caracteres  ********/
DIGITO_OCTAL [0-7]
DIGITO_DECIMAL [0-9]
DIGITO_HEXADECIMAL [0-9a-fA-F]
DIGITO_NO_CERO [1-9] 
CARACTERES_SINGULARES [_a-zA-Z]
CARACTERES_ESPECIALES " "|"!"|"#"|"$"|"%"|"&"|"("|")"|"*"|"+"|","|"-"|"."|"/"|":"|";"|"<"|"="|">"|"´"|"{"|"|"|"}"|"~"
S_CHAR [^\"\\\n]
/****************** COMENTARIOS *********************/
COMENTARIOS             {COMENTARIOS_LINEAL}|{COMENTARIOS_MULTILINEAL}
COMENTARIOS_LINEAL      ("//"(.)*)
COMENTARIOS_MULTILINEAL "/*"([^*]|(\*+[^*/]))*\*+\/
/**** OTROS ****/
ESPACIO [ \n\t\r]+
ESPACIO_EN_BLANCO (" ")+
TABULACION (\t)+
SALTO_DE_LINEA (\n)+
%%
{DIRECTIVAS_PREPROCESAMIENTO}                     {return DIRECTIVAS_PREPROCESAMIENTO; strcpy(yylval.cval, yytext);}
{PALABRAS_RESERVADAS_TIPOS_DE_DATOS}              {return PALABRAS_RESERVADAS_TIPOS_DE_DATOS;}
{CALIFICADOR_TIPO}                                {return CALIFICADOR_TIPO;}
{LITERAL_CADENA}                                  {return LITERAL_CADENA;}
{PALABRAS_RESERVADAS_TIPOS_DE_DATOS}              {return PALABRAS_RESERVADAS_TIPOS_DE_DATOS;}
{PALABRAS_RESERVADAS_ESTRUCTURA_DE_CONTROL}       {return PALABRAS_RESERVADAS_ESTRUCTURA_DE_CONTROL;}
{PALABRAS_RESERVADAS_OTHERS}                      {return PALABRAS_RESERVADAS_OTHERS;}
{TIPO_STRUCT}                                     {return TIPO_STRUCT;}
"enum"                                            {return ENUM;}
"case"                                            {return CASE;}
"default"                                         {return DEFAULT;}
"switch"                                          {return SWITCH;}
"if"                                              {return IF;}
"else"                                            {return ELSE;}
"while"                                           {return WHILE;}
"do"                                              {return DO;}
"goto"                                            {return GOTO;}
"continue"                                        {return CONTINUE;}
"break"                                           {return BREAK;}
"return"                                          {return retornar;}
{IDENTIFICADOR}                                   {return IDENTIFICADOR;}
{OP_ASIGNACION}                                   {return OP_ASIGNACION;}
{OP_CARACT_DE_PUNTUACION}                         {return OP_CARACT_DE_PUNTUACION;}
{EXPR_ASIGNACION}                                 {return EXPR_ASIGNACION;}
{EXPR_RELACION}                                   {return EXPR_RELACION;}
{EXPR_CORRIMIENTO}                                {return EXPR_CORRIMIENTO;}
{OP_BASICA}                                       {return OP_BASICA;}
{EXPR_MULTIPLICATIVA}                             {return EXPR_MULTIPLICATIVA;}
{OP_INCREMENTO}                                   {return OP_INCREMENTO;}
"sizeof"                                          {return SIZEOF;}
{OP_UNARIO}                                       {return OP_UNARIO;} 
"->"                                              {return FLECHA;}
{CONST_OCTAL}                                     {return CONST_OCTAL;}
{CONST_HEXADECIMAL}                               {return CONST_HEXADECIMAL;}
{CONST_DECIMAL}                                   {return CONST_DECIMAL;}
{CONST_PTOFLOTANTE}                               {return CONST_PTOFLOTANTE;}
{CONST_CARACTER}                                  {return CONST_CARACTER;}
{COMENTARIOS_LINEAL}                              {return COMENTARIOS_LINEAL;}
{COMENTARIOS_MULTILINEAL}                         {return COMENTARIOS_MULTILINEAL;}
{ESPACIO_EN_BLANCO}|{TABULACION}|{SALTO_DE_LINEA} {/*return  ¿? ;*/}
.                                                 {/* todo: tokens no reconocidos */ }
%%


