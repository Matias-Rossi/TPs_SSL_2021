%option noyywrap
%option yylineno
/* %option debug */

%{
#include "categorias-lexicas.h"

ListaIdentificadores* identificadores;
ListaStrings* cadenas;
ListaStrings* palabrasReservadas;
ListaStrings* operadoresCtesPuntuacion;
int operadoresCtesPuntuacionEncontrados;

ListaInt* octales;
ListaInt* hexadecimales;
ListaInt* decimales;
int acumuladorDecimal;

ListaDouble* reales;
char caracteres[100];

int caracteresEncontrados;

ListaStrings *comentarios;
ListaStrings *noReconocidos;

%}
/* DEFINICIONES */
/**************** PALABRAS RESERVADAS ****************/
PALABRAS_RESERVADAS {PALABRAS_RESERVADAS_TIPOS_DE_DATOS}|{PALABRAS_RESERVADAS_ESTRUCTURA_DE_CONTROL}|{PALABRAS_RESERVADAS_OTHERS}
PALABRAS_RESERVADAS_TIPOS_DE_DATOS char|double|float|int|short|long|signed|unsigned|void
PALABRAS_RESERVADAS_ESTRUCTURA_DE_CONTROL if|switch|for|do|break|continue|while
PALABRAS_RESERVADAS_OTHERS auto|case|const|default|else|enum|extern|goto|register|return|sizeof|static|struct|typedef|union|volatile
/******* OPERADORES Y CARACTERES DE PUNTUACION *******/
OP_CARACT_DE_PUNTUACION ";"|"["|"]"|"("|")"|"{"|"}"|"."|"->"|"++"|"--"|"&"|"*"|"+"|"-"|"~"|"!"|"/"|"%"|"<<"|">>"|"<"|">"|"<="|">="|"=="|"!="|"^"|"|"|"&&"|"||"|"="|"*="|"/="|"%="|"+="|"-="|"<<="|">>="|"&="|"^="|"|="|"?"|":"|"..."|","|"#"|"##"
/**************** CONSTANTES ENTERAS *****************/
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
CONST_CARACTER '{CARACTERES_SINGULARES}'|'{SECUENCIA_DE_ESCAPE}' 
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
COMENTARIOS_LINEAL      "//"(.)*
COMENTARIOS_MULTILINEAL "/*"([^*]|(\*+[^*/]))*\*+\/
/**** OTROS ****/
ESPACIO_EN_BLANCO (" ")+
TABULACION (\t)+
SALTO_DE_LINEA (\n)+
%%
{LITERAL_CADENA}        {agregarStringAuxFuncion(cadenas, yytext, strlenMenosDos);}
{PALABRAS_RESERVADAS}   {agregarString(palabrasReservadas, yytext);}
{IDENTIFICADOR}         {agregarIdentificador(identificadores, yytext); }
{OP_CARACT_DE_PUNTUACION} {if(!stringIncrementarSiRegistrado(operadoresCtesPuntuacion, operadoresCtesPuntuacionEncontrados, yytext)){agregarStringAux(operadoresCtesPuntuacion, yytext, 1); operadoresCtesPuntuacionEncontrados++;} }
{CONST_OCTAL}           {agregarInt(octales, atoi(yytext));}
{CONST_HEXADECIMAL}     {agregarInt(hexadecimales, strtol(yytext, NULL, 16));}
{CONST_DECIMAL}         {agregarInt(decimales, atoi(yytext)); acumuladorDecimal += atoi(yytext);}
{CONST_PTOFLOTANTE}     {agregarDouble(reales, strtod(yytext, NULL));}
{CONST_CARACTER}        {if(!caracterYaEstaRegistrado(caracteres, caracteresEncontrados, yytext[0])){caracteres[caracteresEncontrados] = yytext[0];caracteresEncontrados++;}}
{COMENTARIOS_LINEAL}    {agregarStringAux(comentarios, yytext, 0);}
{COMENTARIOS_MULTILINEAL} {agregarStringAux(comentarios, yytext, 1);}
{ESPACIO_EN_BLANCO}|{TABULACION}|{SALTO_DE_LINEA} {;}
.                       {agregarStringAux(noReconocidos, yytext, yylineno); }
%%
int main()
{
    printf("[LOG]: Inicio del programa (1/5)\n");
    yyin = fopen("input.c", "r+");
    FILE* reporte = fopen("reporte.txt", "w+");

    printf("[LOG]: Inicializando variables (2/5)\n");

    //Inicializacion
    identificadores = inicializarListaIdentificadores(identificadores);
    cadenas = inicializarListaStrings(cadenas);
    palabrasReservadas = inicializarListaStrings(palabrasReservadas);
    octales = inicializarListaInt(octales);
    hexadecimales = inicializarListaInt(hexadecimales);
    decimales = inicializarListaInt(decimales);
    acumuladorDecimal = 0;
    reales = inicializarListaDouble(reales);
    caracteresEncontrados = 0;
    operadoresCtesPuntuacion = inicializarListaStrings(operadoresCtesPuntuacion);
    operadoresCtesPuntuacionEncontrados = 0;
    comentarios = inicializarListaStrings(comentarios);
    noReconocidos = inicializarListaStrings(noReconocidos);

    printf("[LOG]: Corriendo analizador lexico (3/5)\n");
    yylex();

    printf("[LOG]: Generando reporte (4/5)\n");
    crearListadoIdentificadores(reporte, identificadores);
    crearListadoLiteralesCadena(reporte, cadenas);
    crearListadoPalabrasReservadas(reporte, palabrasReservadas);
    crearListadoCtesOctales(reporte, octales);
    crearListadoCtesHexadecimales(reporte, hexadecimales);
    crearListadoCtesDecimales(reporte, decimales, acumuladorDecimal);
    printf("Id listo\n");
    crearListadoCtesReales(reporte, reales);
    crearListadoCtesCaracter(reporte, caracteres, caracteresEncontrados);
    crearListadoOperadoresCtesPuntuacion(reporte, operadoresCtesPuntuacion);
    crearListadoComentarios(reporte, comentarios);
    crearListadoNoReconocidos(reporte, noReconocidos);

    fclose(yyin);
    fclose(reporte);

    printf("[LOG]: Fin del programa (5/5)\n");

    return 0;
}