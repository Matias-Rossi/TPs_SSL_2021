
%{
//DEFINICIONES Y DECLARACIONES DE C

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int yylex(void);
int yywrap(){
    return(1);
}
int yyerror (const char* s) {
    fprintf (stderr, "%s\n", s);
}
extern FILE* yyin;
extern int yylineno;
int analisisCorrecto = 1;

%}
//DEFINICIONES DE BISON

%union{
   int ival;
    double dval;
    char* cval;
    
}

%type <cval> unidad_de_traduccion
%type <cval> declaracion_externa
%type <cval> definicion_de_funcion
%type <cval> declaracion
%type <cval> declarador
%type <cval> especificadores_de_declaracion 
%type <cval> lista_de_declaracion
%type <cval> especificador_categoria_almacenamiento
%type <cval> especificador_de_tipo
%type <cval> calificador_de_tipo
%type <cval> lista_declaradores_init
%type <cval> especificador_tipo
%type <cval> especificador_estructura_union
%type <cval> especificador_enum
%type <cval> lista_de_enumerador
%type <cval> enumerador
%type <cval> declarador_directo
%type <cval> lista_tipos_de_parametro
%type <cval> lista_de_identificadores
%type <cval> apuntador
%type <cval> lista_calificadores_de_tipo
%type <cval> lista_de_parametros
%type <cval> declaracion_parametro
%type <cval> declarador_abstracto
%type <cval> lista_declaracion
%type <cval> expresion_aditiva
%type <cval> lista_de_expresiones_argumento

%token <cval> DIRECTIVAS_PREPROCESAMIENTO //Ver
%token <cval> PALABRAS_RESERVADAS_TIPOS_DE_DATOS
%token <cval> CALIFICADOR_TIPO
%token <cval> LITERAL_CADENA //Ver
%token <cval> PALABRAS_RESERVADAS_ESTRUCTURA_DE_CONTROL //Ver
%token <cval> PALABRAS_RESERVADAS_OTHERS
%token <cval> TIPO_STRUCT
%token <cval> enum
%token <cval> case
%token <cval> default
%token <cval> switch
%token <cval> if
%token <cval> else
%token <cval> do
%token <cval> while
%token <cval> goto
%token <cval> retornar
%token <cval> continue
%token <cval> break
%token <cval> IDENTIFICADOR
%token <cval> OP_CARACT_DE_PUNTUACION //Ver
%token <cval> OP_ASIGNACION 
%token <cval> EXPR_ASIGNACION
%token <cval> EXPR_RELACION
%token <cval> EXPR_CORRIMIENTO
%token <cval> OP_BASICA
%token <cval> EXPR_MULTIPLICATIVA 
%token <cval> OP_INCREMENTO
%token <cval> sizeof
%token <cval> FLECHA
%token <cval> OP_UNARIO


%token <ival> CONST_OCTAL
%token <ival> CONST_HEXADECIMAL
%token <ival> CONST_DECIMAL
%token <dval> CONST_PTOFLOTANTE
%token <cval> CONST_CARACTER
%token <ival> CONST_ENUMERACION //Ver

%start unidad_de_traduccion

%%
//REGLAS (PRODUCCIONES GIC - CÓDIGO C) -> Conocido como PATRÓN/ACCIÓN

unidad_de_traduccion:     declaracion_externa 
                        | unidad_de_traduccion declaracion_externa
                        ;


declaracion_externa:      definicion_de_funcion
                        | declaracion
                        ;


definicion_de_funcion:    especificadores_de_declaracion  declarador lista_de_declaracion ',' sentencia_compuesta
                        | declarador ',' sentencia_compuesta
                        | especificadores_de_declaracion  declarador ',' sentencia_compuesta
                        | declarador lista_de_declaracion ',' sentencia_compuesta
                        ;


declaracion:              especificadores_de_declaracion lista_declaradores_init ';' //Asociatividad - especificadores_de_declaracion
                        | especificadores_de_declaracion ';'
                        ;


lista_de_declaracion:     declaracion
                        | lista_de_declaracion declaracion //Recursividad a izquierda - lista_de_declaracion
                        ;


especificadores_de_declaracion:   especificador_categoria_almacenamiento especificadores_de_declaracion //Asociatividad a izquierda - especificador_categoria_almacenamiento
                                | especificador_categoria_almacenamiento 
                                | especificador_de_tipo especificadores_de_declaracion //Asociatividad a izquierda - especificador_de_tipo 
                                | especificador_de_tipo
                                | CALIFICADOR_TIPO especificadores_de_declaracion // Recursividad a izquierda - calificador_de_tipo
                                | CALIFICADOR_TIPO
                                ;


especificador_categoria_almacenamiento:   PALABRAS_RESERVADAS_OTHERS 
                                       ;



especificador_de_tipo:    PALABRAS_RESERVADAS_TIPOS_DE_DATOS  
                        | especificador_estructura_union
                        | especificador_enum
                        | nombre_typedef
                        ;

especificador_estructura_o_union:     TIPO_STRUCT IDENTIFICADOR  '{' lista_declaraciones_struct '}'
                                    | TIPO_STRUCT IDENTIFICADOR
                                    | '{' lista_declaraciones_struct '}'
                                    ;

lista_declaraciones_struct:   declaracion_struct
                            | lista_declaraciones_struct declaracion_struct //Recursividad a Izquierda - lista_declaradores_struct
                            ;


lista_declaradores_init:    declarador_init
                            | lista_declaradores_init ',' declarador_init //Recursividad a izquierda - lista_declaradores_init
                            ;


declarador_init:      declarador
                    | declarador '=' inicializador
                    ;


declaracion_struct:   lista_calificador_especificador
                    | lista_declaradores_struct
                    ;


lista_calificador_especificador:    especificador_de_tipo lista_calificador_especificador //Asociatividad a izquierda - especificador_de_tipo
                                  | especificador_de_tipo
                                  | CALIFICADOR_TIPO lista_calificador_especificador // Recursividad a izquierda - calificador_de_tipo
                                  | CALIFICADOR_TIPO
                                  ;


lista_declaradores_struct:    declarador_struct
                            | lista_declaradores_struct  ','  declarador_struct //recursividad a izquierda . lista_declaradores_struct
                            ;


declarador_struct:    declarador
                    | declarador  ':' expresion_constante
                    | ':' expresion_constante
                    ;


especificador_enum:       enum IDENTIFICADOR  '{' lista_de_enumerador '}'
                        | '{' lista_de_enumerador '}'
                        | enum IDENTIFICADOR
                        ;


lista_de_enumerador:      enumerador
                        | lista_de_enumerador ',' enumerador // Recursividad a Izquierda - lista_de_enumerador
                        ;


enumerador:    IDENTIFICADOR
             | IDENTIFICADOR '=' expresion_constante
             ;


declarador:   apuntador declarador_directo
            | declarador_directo
;


declarador_directo:       IDENTIFICADOR
                        | '(' declarador ')'
                        | declarador_directo  '[' expresion_constante ']' //Recursividad a izquierda - declarador_directo
                        | declarador_directo  '[' ']'
                        | declarador_directo  '(' lista_tipos_de_parametro ')'
                        | declarador_directo  '(' lista_de_identificadores ')'
                        | declarador_directo  '(' ')'
                        ;


apuntador:  '*' lista_calificadores_de_tipo //Ver
            |'*' 
            |'*' lista_calificadores_de_tipo  apuntador
            |'*' apuntador
            ;


lista_calificadores_de_tipo:    calificador_de_tipo
                                | lista_calificadores_de_tipo calificador_de_tipo //Recursividad a Izquierda - lista_calificadores_de_tipo
                                ;


lista_tipos_de_parametro:      lista_de_parametros
                             | lista_de_parametros ',' '...' //Generar nuevo token para ...
                             ;


lista_de_parametros:      declaracion_parametro
                        | lista_de_parametros ',' declaracion_parametro //Recursividad a Izquierda - lista_de_parametros
                        ;


declaracion_parametro:     especificadores_de_declaracion declarador
                         | especificadores_de_declaracion declarador_abstracto 
                         | especificadores_de_declaracion 
                         ;


lista_de_identificadores:     IDENTIFICADOR
                            | lista_de_identificadores ',' IDENTIFICADOR //Recursividad a izquierda - lista_de_identificadores
                            ;


inicializador:  expresion_de_asignacion
                |'{'   lista_de_inicializadores   '}'
                |'{'   lista_de_inicializadores  ',''}'
                ;


lista_de_inicializadores:   inicializador
                            | lista_de_inicializadores ','  inicializador //Recursividad a izquierda - lista_de_inicializadores
                            ;
 

nombre_de_tipo:     lista_calificador_especificador declarador_abstracto //Asociatividad a Izquierda - lista_calificador_especificador
                    | lista_calificador_especificador 
;


declarador_abstracto:   apuntador
                        | apuntador declarador_abstracto_directo
                        |  declarador_abstracto_directo
                        ;
 
declarador_abstracto_directo:   '(' declarador_abstracto ')'
                                | declarador_abstracto_directo '[' expresion_constante ']'
                                |  '[' ']'
                                | declarador_abstracto_directo '['  ']' //Recursividad a izquierda - declarador_abstracto_directo
                                |  '[' expresion_constante ']'

                                | declarador_abstracto_directo '(' lista_tipos_de_parametro ')'
                                |  '('  ')'
                                | declarador_abstracto_directo  '('  ')'
                                | '(' lista_tipos_de_parametro ')'
                                ;

nombre_typedef: IDENTIFICADOR
;


sentencia:  sentencia_etiquetada
            | sentencia_expresion
            | sentencia_compuesta
            | sentencia_de_seleccion
            | sentencia_de_iteracion
            | sentencia_de_salto
            ;


sentencia_etiquetada:   IDENTIFICADOR ':' sentencia //Asociatividad a derecha - sentencia
                        | case expresion_constante ':' sentencia
                        | default ':' sentencia
                        ;

 
sentencia_expresion:    expresion ';'
                        |  ';'
;
 

sentencia_compuesta: '{' lista_declaracion  lista_de_sentencias '}' 
                      | '{''}'
                      | '{' lista_declaracion  '}'
                      | '{' lista_de_sentencias '}'
;

lista_de_sentencias:    sentencia
                        | lista_de_sentencias sentencia //Recursividad a izquierda - lista_de_sentencias
                        ;


sentencia_de_seleccion: if '(' expresion ')' sentencia //Factorizacion a Izquierda 
                        | if '(' expresion ')' sentencia else sentencia
                        | switch '(' expresion ')' sentencia
                        ;

sentencia_de_iteracion: while '(' expresion ')' sentencia //Factorizacion a Izquierda??
                        | do sentencia while '(' expresion ')' ';'
                        | '(' expresion_opt ';' expresion_opt ';' expresion_opt ')' sentencia 
                        ;

sentencia_de_salto: goto IDENTIFICADOR ';'
                    | continue   ';'
                    | break ';'
                    | retornar expresion_opt   ';'
                    ;

//No está en la gramática, la agergo para evitar copiar 2000 veces las mismas líneas omitiendo opcionales
expresion_opt: expresion | '\n';

expresion:  expresion_de_asignacion
            | expresion ',' expresion_de_asignacion //Recursividad a Izquierda - expresion
            ;


expresion_de_asignacion:    expresion_condicional
                            | expresion_unaria OP_ASIGNACION expresion_de_asignacion
                            ;


expresion_condicional:  expresion_logica_OR
                        | expresion_logica_OR '?' expresion ':' expresion_condicional //Asociatividad a Izquierda - expresion_logica_OR
                        ;
 
expresion_constante: expresion_condicional
;
 

expresion_logica_OR:    expresion_logica_AND
                        | expresion_logica_OR   '||'  expresion_logica_AND //Recursividad a Izquierda - expresion_logica_OR
                        ;


expresion_logica_AND:   expresion_OR_inclusivo
                        |expresion_logica_AND '&&' expresion_OR_inclusivo //Recursividad a Izquierda - expresion_logica_AND
 ;

expresion_OR_inclusivo: expresion_OR_exclusivo
                        | expresion_OR_inclusivo '|' expresion_OR_exclusivo //Recursividad a Izquierda - expresion_OR_inclusivo
;

expresion_OR_exclusivo: expresion_AND
                        |expresion_OR_exclusivo   '^'   expresion_AND //Recursividad a Izquierda - expresion_OR_exclusivo
;

expresion_AND:  expresion_de_igualdad
                | expresion_AND   '&'   expresion_de_igualdad //Recursividad a Izquierda . expresion_AND
;

expresion_de_igualdad:  expresion_relacional
                        | expresion_de_igualdad    EXPR_ASIGNACION    expresion_relacional //Recursividad a Izquierda - expresion_de_igualdad
                        ;


expresion_relacional:   expresion_de_corrimiento
                        | expresion_relacional EXPR_RELACION expresion_de_corrimiento //Recursividad a Izquierda - expresion_relacional
                        ;
 

expresion_de_corrimiento:   expresion_aditiva
                            |expresion_de_corrimiento   EXPR_CORRIMIENTO  expresion_aditiva //Recursividad a Izquierda - expresion_de_corrimiento
                            ;


expresion_aditiva:  expresion_multiplicativa
                    | expresion_aditiva OP_BASICA expresion_multiplicativa //Recursividad a Izquierda - expresion_aditiva
                    ;


expresion_multiplicativa:   expresion_cast
                            | expresion_multiplicativa EXPR_MULTIPLICATIVA expresion_cast //Recursividad a Izquierda - expresion_multiplicativa
                            ;


expresion_cast: expresion_unaria
                | '(' nombre_de_tipo ')' expresion_cast
                ;
 

expresion_unaria:   expresion_posfija
                | OP_INCREMENTO   expresion_unaria
                | OP_UNARIO   expresion_cast //Recursividad a Izquierda - operador_unario
                | sizeof    expresion_unaria
                | sizeof   '('    nombre_de_tipo   ')'
                ;

expresion_posfija:  expresion_primaria
                    | expresion_posfija   '['   expresion   ']' //Recursividad  a Izquierda - expresion_posfija
                    | expresion_posfija   '('   lista_de_expresiones_argumento   ')'
                    | expresion_posfija   '(' ')'
                    | expresion_posfija    '.'    IDENTIFICADOR
                    | expresion_posfija    FLECHA   IDENTIFICADOR
                    | expresion_posfija   OP_INCREMENTO
                    ;

 
expresion_primaria: IDENTIFICADOR
                    | constante
                    | cadena
                    | '(' expresion ')'
                    ;


lista_expresiones_argumento:    expresion_de_asignacion
                                | lista_expresiones_argumento   ','   expresion_de_asignacion //Recursividad a Izquierda - lista_expresiones_argumento
                                ;

cadena:  IDENTIFICADOR
         | IDENTIFICADOR ' ' cadena
         ; 

 
constante:  CONST_OCTAL
            | CONST_HEXADECIMAL
            | CONST_DECIMAL
            | CONST_CARACTER
            | CONST_PTOFLOTANTE
            | CONST_ENUMERACION
            ;

%%

// DECLARACIONES

//CÓDIGO C DE USUARIO -> Código C que ejecuta el analizado     léxico
int yyerror(const char* msg){
    printf("Fallo del analisis en la linea %d %s", yylineno, msg);
    analisisCorrecto = 0;
    return 0;
}

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