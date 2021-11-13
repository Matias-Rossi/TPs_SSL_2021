%option noyywrap
%option yylineno
%option debug

%{
#include <stdio.h>
#include <string.h>
#include "bison.tab.h"
#include "tp5.h"

int comentario = 0;

%}
/* DEFINICIONES */
/******* DIRECTIVAS PREPROCESAMIENTO *******/
INCLUDE "#include"{ESPACIO}({LITERAL_CADENA}|{LIBRERIA})
DEFINE "#define"({ESPACIO}({CARACTERES_SINGULARES}+){ESPACIO}{CONSTANTE})
LIBRERIA <((.)+)>
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

%x NO_RECONOCIDO

%%
{INCLUDE}                               {return INCLUDE;}
{DEFINE}                                {return DEFINE;}
"auto"									{return AUTO;} 	
"register"								{return REGISTER;}
"static"							    {return STATIC;}
"extern"                                {return EXTERN;}
"typedef"							    {return TYPEDEF;}
"void" 									{yylval.cval = yytext; return VOID;}
"char" 									{yylval.cval = yytext; return CHAR;}
"short" 								{return SHORT;}
"int" 									{yylval.cval = yytext; return INT;}
"long" 									{return LONG;}
"float" 								{yylval.cval = yytext; return FLOAT;}
"double" 								{yylval.cval = yytext; return DOUBLE;}
"signed" 								{return SIGNED;}
"unsigned" 								{return UNSIGNED;}	
"const"                                 {return CONST;}
"volatile"					            {return VOLATILE;}
"enum"									{yylval.cval = yytext; return ENUM;}
"case"									{return CASE;}	
"default"								{return DEFAULT;}
"if"									{return IF;}
"switch"								{return SWITCH;}
"else"									{return ELSE;}
"for"									{return FOR;}
"do"									{return DO;}
"while"									{return WHILE;}
"goto"									{return GOTO;}
"continue"								{return CONTINUE;}
"break"									{return BREAK;}
"struct"								{yylval.cval = yytext; return STRUCT;}
"union"									{yylval.cval = yytext; return UNION;}
"return"								{return RETURN;}
"sizeof"								{return SIZEOF;}
"||" 									{return CTE_OR;}
"&&"									{return CTE_AND;}
"..."									{return ELIPSIS;}
"=="									{return IGUAL_IGUAL;}
"!="								    {return DISTINTO;}
"<="									{return MENOR_IGUAL;}
">="								    {return MAYOR_IGUAL;}
">>"									{return CORR_DER;}
"<<"								    {return CORR_IZQ;}
"++"									{return MAS_MAS;}
"--"								    {return MENOS_MENOS;}
"->"									{return FLECHA;}
"*="									{return POR_IGUAL;}
"/="									{return DIV_IGUAL;}
"+="									{return MAS_IGUAL;}
"-="		 							{return MENOS_IGUAL;}
"%="									{return MOD_IGUAL;}
">>="									{return CORR_DER_IGUAL;}
"<<="									{return CORR_IZQ_IGUAL;}
"&="									{return Y_IGUAL;}
"^="									{return POT_IGUAL;}
"|="									{return O_IGUAL;}
";"|"="|","|"{"|"}"|"("|")"|"["|"]"|"*"|"+"|"-"|"/"|"?"|":"|"&"|"|"|"^"|"!"|"~"|"%"|"<"|">"	{return yytext[0];}
{IDENTIFICADOR}                                   {if(comentario == 0) {yylval.cval = yytext; return IDENTIFICADOR;}}
{LITERAL_CADENA}                                  {if(comentario == 0) return LITERAL_CADENA;}
{CONST_OCTAL}                                     {if(comentario == 0) return CONST_OCTAL;}
{CONST_HEXADECIMAL}                               {if(comentario == 0) return CONST_HEXADECIMAL;}
{CONST_DECIMAL}                                   {if(comentario == 0) return CONST_DECIMAL;}
{CONST_PTOFLOTANTE}                               {if(comentario == 0) return CONST_PTOFLOTANTE;}
{CONST_CARACTER}                                  {if(comentario == 0) return CONST_CARACTER;}
{COMENTARIOS_LINEAL}                              {if(comentario == 0) comentario=1;}
{COMENTARIOS_MULTILINEAL}                         {if(comentario == 1) comentario = 0; else comentario = 1;}
{ESPACIO_EN_BLANCO}|{TABULACION}                  {;}
{SALTO_DE_LINEA}                                  {comentario=0;}
.                                                 {printf("ERROR LEXICO - PALABRA NO RECONOCIDA: %s ,EN LA LINEA: %d \n",yytext,yylineno);}
%%

// <NO_RECONOCIDO>.*"\n"                             {printf("\nseg?\n"); strcat(NO_RECONOCIDO, yytext); BEGIN(0); yylval.idval = strdup(NO_RECONOCIDO); return NO_RECONOCIDO;printf("\nseg\n");}

