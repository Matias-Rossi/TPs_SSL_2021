%{
//DEFINICIONES Y DECLARACIONES DE C

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int yylex(void);
int yywrap(){
    return(1);
}
void yyerror (char const *s) {
    fprintf (stderr, "%s\n", s);
}
extern FILE* yyin;
extern int yylineno;
int analisisCorrecto = 1;

}%
//DEFINICIONES DE BISON

%union{
    char* idval;
    int val;
    
}

%type <> unidad_de_traduccion
%type <> declaracion_externa
%type <> definicion_de_funcion
%type <> declaracion 
%type <> declaracion_externa
%type <> declarador
%type <> especificadores_de_declaracion 
%type <> lista_de_declaracion
%type <> especificador_categoria_almacenamiento
%type <> especificador_de_tipo
%type <> calificador_de_tipo
%type <> lista_declaradores_ini
%type <> especificador_tipo
%type <> especificador_estructura_union
%type <> especificador_enum
%type <> lista_de_enumerador
%type <> enumerador
%type <> declarador_directo
%type <> lista_tipos_de_parametro
%type <> lista_de_identificadores
%type <> apuntador
%type <> lista_calificadores_de_tipo
%type <> lista_de_parametros
%type <> declaracion_parametro
%type <> declarador_abstracto




%token DIRECTIVAS_PREPROCESAMIENTO
%token LITERAL_CADENA
%token PALABRAS_RESERVADAS_TIPOS_DE_DATOS
%token PALABRAS_RESERVADAS_ESTRUCTURA_DE_CONTROL
%token PALABRAS_RESERVADAS_OTHERS
%token IDENTIFICADOR
%token OP_CARACT_DE_PUNTUACION
%token CONST_OCTAL
%token CONST_HEXADECIMAL
%token CONST_DECIMAL
%token CONST_PTOFLOTANTE
%token CONST_CARACTER
%token COMENTARIOS_LINEAL
%token COMENTARIOS_MULTILINEAL

%%
//REGLAS (PRODUCCIONES GIC - CÓDIGO C) -> Conocido como PATRÓN/ACCIÓN

unidad_de_traduccion:     declaracion_externa
                        | unidad_de_traduccion declaracion_externa
                        ;


declaracion_externa:      definicion_de_funcion
                        | declaracion
                        ;


definicion_de_funcion:    especificadores_de_declaracion /*opt*/
                        | declarador
                        | lista_de_declaracion /*opt*/ , sentencia_compuesta
                        ;


declaracion:              especificadores_de_declaracion 
                        | lista_declaradores_ini ; /*opt */ //>:( //ojo: doble punto y coma?
                        ;


lista_de_declaracion:     declaracion
                        | lista_de_declaracion declaracion
                        ;


especificadores_de_declaracion:   especificador_categoria_almacenamiento especificadores_de_declaracion /*opt*/
                                | especificador_de_tipo especificadores_de_declaracion /*opt*/
                                | calificador_de_tipo especificadores_de_declaracion /*opt*/
                                ;


especificador_categoría_almacenamiento:   auto
                                        | register
                                        | static
                                        | extern
                                        | typedef
                                        ;



especificador_de_tipo:    void
                        | char
                        | short
                        | int
                        | long
                        | float
                        | double
                        | signed
                        | unsigned  
                        | especificador_estructura_union
                        | especificador_enum
                        | nombre_typedef
                        ;


calificador_de_tipo:   const
                     | volatile
                     ;


especificador_estructura_o_union:     estructura_o_union identificador /*opt*/  { lista_declaraciones_struct }
                                    | estructura_o_union identificador


estructura_o_union:   struct
                    | union
                    ;


lista_declaraciones_struct:   declaracion_struct
                            | lista_declaraciones_struct declaracion_struct
                            ;


lista_declaradores_init:    declarador_init
                            | lista_declaradores_init , declarador_init
                            ;


declarador_init:      declarador
                    | declarador = inicializador
                    ;


declaracion_struct:   lista_calificador_especificador
                    | lista_declaradores_struct
                    ;


lista_calificador_especificador:    especificador_de_tipo lista_calificador_especificador /*opt*/
                                  | calificador_de_tipo lista_calificador_especificador /*opt*/
                                  ;


lista_declaradores_struct:    declarador_struct
                            | lista_declaradores_struct   ,  declarador_struct
                            ;


declarador_struct:    declarador
                    | declarador /*opt*/ : expresion_constante
                    ;


especificador_enum:       enum identificador /*opt*/   { lista_de_enumerador }
                        | enum identificador
                        ;


lista_de_enumerador:      enumerador
                        | lista_de_enumerador , enumerador
                        ;


enumerador:    identificador
             | identificador = expresion_constante
             ;


declarador:    apuntador /*opt*/ declarador_directo;


declarador_directo:       identificador
                        | ( declarador )
                        | declarador_directo  [ expresión-constante /*opt*/ ]
                        | declarador_directo  ( lista_tipos_de_parametro )
                        | declarador_directo  ( lista_de_identificadores /*opt*/ )
                        ;


apuntador:        * lista_calificadores_de_tipoopt
|||| * l        i    sta-_alificadores-_e-_ipoo /*opt*/apuntador

                ;


lista_calificadores_de_tipo:    cificaficador_de_tipo
                                | lista_calificadores_de_tipo calificador_de_tipo
                                ;


lista_tipos_de_parametro:      lista_de_parametros
                             | lista_de_parametros , ...
                             ;


lista_de_parametros:      declaracion_parametro
                        | lista_de_parametros , declaracion_parametro
                        ;


declaracion_parametro:     especificadores_de_declaracion declarador
                         | especificadores_de_declaracion declarador_abstracto /*opt*/
                         ;


lista_de_identificadores:     identificador
                            | lista_de_identificadores , identificador
                            ;


inicializador:
expresión-asignación
{   lista-de-inicializadores   }
{   lista-de-inicializadores  ,   }


lista-de-inicializadores:
inicializador
lista-de-inicializadores  ,  inicializador
 

nombre-de-tipo:
lista-calificador-especificador declarador-abstractoopt



declarador-abstracto:
apuntador
apuntadoropt declarador-abstracto-directo
 

declarador-abstracto-directo:
(   declarador-abstracto   )
declarador-abstracto-directoopt     [    expresión-constanteopt    ]
declarador-abstracto-directoopt  (    lista-tipos-de-parámetroopt   )


nombre-typedef:
identificador
 

sentencia:
sentencia-etiquetada
sentencia-expresión
sentencia-compuesta
sentencia-de-selección
sentencia-de-iteración
sentencia-de-salto


sentencia-etiquetada:
identificador   :    sentencia
case    expresión-constante    :   sentencia
default    :   sentencia

 
sentencia-expresión:
expresiónopt  ;
 

sentencia-compuesta:
{    lista-declaraciónopt    lista-de-sentenciasopt    }
 

lista-de-sentencias:
sentencia
lista-de-sentencias   sentencia


sentencia-de-selección:
if ( expresión ) sentencia
if ( expresión ) sentencia else sentencia
switch ( expresión ) sentencia


sentencia-de-iteración:
while   (   expresión   )   sentencia
do   sentencia   while   (   expresión   )   ;
(  expresiónopt   ;   expresiónopt   ;   expresiónopt   )   sentencia


sentencia-de-salto:
goto   identificador   ;
continue   ;
break ;
retun   expresiónopt   ;

 
expresión:
expresión-de-asignación
expresión    ,    expresión-de-asignación


expresión-de-asignación:
expresión-condicional
expresión-unaria    operador-de-asignación    expresión-de-asignación


operador-de-asignación: uno de    =   *=     /=     %=     +=     -=     <<=    >>=    &=   ^=     |=


expresión-condicional:
expresión-lógica-OR
expresión-lógica-OR    ?    expresión   :     expresión-condicional

 
expresión-constante:
expresión-condicional
 

expresión-lógica-OR:
expresión-lógica-AND
expresión-lógica-OR   ||  expresión-lógica-AND


expresión-lógica-AND:
expresión-OR-inclusivo
expresión-lógica-AND    &&    expresión-OR-inclusivo
 

expresión-OR-inclusivo:
expresión-OR-exclusivo
expresión-OR-inclusivo | expresión-OR-exclusivo


expresión-OR-exclusivo:
expresión-AND
expresión-OR-exclusivo   ^   expresión-AND


expresión-AND:
expresión-de-igualdad
expresión-AND   &   expresión-de-igualdad


expresión-de-igualdad:
expresión-relacional
expresión-de-igualdad    ==    expresión-relacional
expresión-de-igualdad    !=     expresión-relacional


expresión-relacional:
expresión-de-corrimiento
expresión-relacional < expresión-de-corrimiento
expresión-relacional > expresión-de-corrimiento
expresión-relacional <= expresión-de-corrimiento
expresión-relacional > = expresión-de-corrimiento
 

expresión-de-corrimiento:
expresión-aditiva
expresión-de-corrimiento   <<   expresión-aditiva
expresión-de-corrimiento   >>  expresión-aditiva


expresión-aditiva:
expresión-multiplicativa
expresión-aditiva + expresión-multiplicativa
expresión-aditiva - expresión-multiplicativa


expresión-multiplicativa:
expresión-cast
expresión-multiplicativa * expresión-cast
expresión-multiplicativa / expresión-cast
expresión multiplicativa % expresión-cast


expresión-cast:
expresión-unaria
(   nombre-de-tipo   )   expresión-cast
 

expresión-unaria:
expresión-posfija
++   expresión-unaria
--    expresión-unaria
operador-unario   expresión-cast
sizeof    expresión-unaria
sizeof    (    nombre-de-tipo   )


operador-unario: uno de    &    *   +   -   ~   !


expresión-posfija:
expresión-primaria
expresión-posfija   [   expresión   ]
expresión-posfija   (   lista-de-expresiones-argumentoopt   )
expresión-posfija    .    identificador
expresión-posfija    ->   identificador
expresión-posfija   ++
expresión-posfija  --

 
expresión-primaria:
identificador
constante
cadena
( expresión )


lista-expresiones-argumento:
expresión-de-asignación
lista-expresiones-argumento   ,   expresión-de-asignación

 
constante:
constante-octal
constante-hexadecimal
constante-decimal
constante-de-carácter
constante-flotante
constante-enumeración



// DECLARACIONES



%%
//CÓDIGO C DE USUARIO -> Código C que ejecuta el analizado     léxico

int main (int argc, char **argv)
{
    yyin = fopen(argv[1], "r");
    yyparse();
    fclose(yyin);

    if(analisisCorrecto){
        printf("Analisis finalizado correctamente");
    }

    return 0;
}

int yyerror(const char* msg){
    printf("Fallo del analisis en la linea %d %s", yylineno, msg);
    analisisCorrecto = 0;
    return 0;
}