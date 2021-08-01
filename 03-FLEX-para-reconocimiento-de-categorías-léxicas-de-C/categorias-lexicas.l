%option noyywrap
%option yylineno

%{
#include "categorias-lexicas.h"
ListaIdentifcadores *identificadores = inicializarListaIdentificadores(identificadores);
ListaStrings *cadenas = inicializarListaStrings(cadenas);
ListaStrings *palabrasReservadas = inicializarListaStrings(palabrasReservadas);

ListaInt *octales = inicializarListaInt(octales);
ListaInt *hexadecimales = inicializarListaInt(hexadecimales);
ListaInt *decimales = inicializarListaInt(decimales);
int acumuladorDecimal = 0;

//TODO: me canse de hacer estructuras que seguramente estén mal, por queda de manera provisoria un arreglo con memoria estática
//double *reales; 
double reales[100];
int realesEncontrados = 0;
char caracteres[100];
int caracteresEncontrados = 0;

//PEND Operadores / caracteres de puntuación

ListaStrings *comentarios = inicializarListaStrings(comentarios);
%}


/* DEFINICIONES */
                                                        /**************** PALABRAS RESERVADAS ****************/

PALABRAS_RESERVADAS {PALABRAS_RESERVADAS_TIPOS_DE_DATOS}|{PALABRAS_RESERVADAS_ESTRUCTURA_DE_CONTROL}|{PALABRAS_RESERVADAS_OTHERS}
PALABRAS_RESERVADAS_TIPOS_DE_DATOS char|double|float|int|short|long|signed|unsigned|void
PALABRAS_RESERVADAS_ESTRUCTURA_DE_CONTROL if|switch|for|do|break|continue|while
PALABRAS_RESERVADAS_OTHERS auto|case|const|default|else|enum|extern|goto|register|return|sizeof|static|struct|typedef|union|volatile

                                                        /******* OPERADORES Y CARACTERES DE PUNTUACION *******/

OP_CARACT_DE_PUNTUACION "["|"]"|"("|")"|"{"|"}"|"."|"->"|"++"|"--"|"&"|"*"|"+"|"-"|"~"|"!"|"/"|"%"|"<<"|">>"|"<"|">"|"<="|">="|"=="|"!="|"^"|"|"|"&&"|"||"|"="|"*="|"/="|"%="|"+="|"-="|"<<="|">>="|"&="|"^="|"|="|"?"|":"|";"|"..."|","|"#"|"##"

                                                        /**************** CONSTANTES ENTERAS *****************/

                                                            /******* Constantes Enteras Decimales *******/

CONST_ENTERA      {CONST_DECIMAL}{SUFIJO_ENTERO}?|{CONST_OCTAL}{SUFIJO_ENTERO}?|{CONST_HEXADECIMAL}{SUFIJO_ENTERO}?
CONST_HEXADECIMAL (0x|0X){DIGITO_HEXADECIMAL}|{CONST_HEXADECIMAL}{DIGITO_HEXADECIMAL}
CONST_OCTAL       0{DIGITO_OCTAL}+
CONST_DECIMAL     {DIGITO_NO_CERO}|({CONST_DECIMAL}{DIGITO_DECIMAL})

SUFIJO_ENTERO  {SUFIJO_U}|{SUFIJO_L}|({SUFIJO_L}{SUFIJO_U})|({SUFIJO_U}{SUFIJO_L})
SUFIJO_L "L"|"l"
SUFIJO_U "U"|"u"

                                                                  /******** Constante Real *********/

CONST_REAL      {CONST_FRAC}{PARTE_EXPONENTE}?{SUFIJO_REAL}?|{DIGITO_DECIMAL}+{PARTE_EXPONENTE}{SUFIJO_REAL}?
CONST_FRAC      (({DIGITO_DECIMAL}+)?.{DIGITO_DECIMAL}+)|{DIGITO_DECIMAL}+. 
PARTE_EXPONENTE {OPERADOR_E}{SIGNO}?{DIGITO_DECIMAL}+
OPERADOR_E      "E"|"e"
SIGNO           "-"|"+"
SUFIJO_REAL     "f"|"F"|"l"|"L" 

                                                                /******** Constante Caracter ********/

CONST_CARACTER '{CARACTERES_SINGULARES}'|'{SECUENCIA_DE_ESCAPE}' 

                                                        /****************** LITERAL CADENA *******************/

LITERAL_CADENA                   "{SECUENCIA_CARACTERES}"
SECUENCIA_CARACTERES             {CARACTER}|{SECUENCIA_CARACTERES}{CARACTER}
CARACTER                         [{DIGITO_NO_CERO}{DIGITO_DECIMAL}{CARACTERES_ESPECIALES}{SECUENCIA_DE_ESCAPE}]

                                                        /******************* IDENTIFICADOR *******************/

IDENTIFICADOR [{CARACTERES_SINGULARES}({IDENTIFICADOR}{CARACTERES_SINGULARES})({IDENTIFICADOR}{DIGITO_DECIMAL})]

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
COMENTARIOS_LINEAL      "//".
COMENTARIOS_MULTILINEAL "/*"."*/"

%%
{IDENTIFICADOR}         {agregarIdentificador(identificadores, yytext);}
{LITERAL_CADENA}        {agregarString(cadenas, yytext, strlenMenosDos);}
{PALABRAS_RESERVADAS}   {agregarString(palabrasReservadas, yytext);}
{CONST_OCTAL}           {agregarInt(octales, atoi(yytext));}
{CONST_HEXADECIMAL}     {agregarInt(hexadecimales, atoi(yytext));}
{CONST_DECIMAL}         {agregarInt(decimales, atoi(yytext)); acumuladorDecimal += atoi(yytext);}
{CONST_REAL}            {reales[realesEncontrados] = strtod(yytext); realesEncontrados++;}
{CONST_CARACTER}        {if(!caracterYaEstaRegistrado(caracteres, caracteresEncontrados, yytext[0])){caracteres[caracteresEncontrados] = yytext[0];caracteresEncontrados++;}}
{COMENTARIOS_LINEAL}    {agregarString(comentarios, yytext, 0);}
{COMENTARIOS_MULTILINEAL} {agregarString(comentarios, yytext, 1);}
.                       {; //todo}
%%
int main()
{
    yyin = fopen("input.c", "r+");
    FILE* reporte = fopen("reporte.txt", "w+");

    yylex();

    crearListadoIdentificadores(reporte, identificadores);
    crearListadoLiteralesCadena(reporte, cadenas);
    crearListadoPalabrasReservadas(reporte, palabrasReservadas);
    crearListadoCtesOctales(reporte, octales);
    crearListadoCtesHexadecimales(reporte, hexadecimales);
    crearListadoCtesDecimales(reporte, decimales, acumuladorDecimal);
    crearListadoCtesReales(reporte, reales, realesEncontrados);
    crearListadoCtesCaracter(reporte, caracteres, caracteresEncontrados);
    //crearListadoOperadoresCtesPuntuacion(); PEND
    crearListadoComentarios(reporte, comentarios);
    //crearListadoNoReconocidos(); PEND

    fclose(yyin);
    fclose(reporte);

    return 0;
}