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

%type <val> unidad_de_traduccion
%type <val> declaracion_externa
%type <val> definicion_de_funcion
%type <val> declaracion 
%type <val> declaracion_externa
%type <val> declarador
%type <val> especificadores_de_declaracion 
%type <val> lista_de_declaracion
%type <val> especificador_categoria_almacenamiento
%type <val> especificador_de_tipo
%type <val> calificador_de_tipo
%type <val> lista_declaradores_ini
%type <val> especificador_tipo
%type <val> especificador_estructura_union
%type <val> especificador_enum
%type <val> lista_de_enumerador
%type <val> enumerador
%type <val> declarador_directo
%type <val> lista_tipos_de_parametro
%type <val> lista_de_identificadores
%type <val> apuntador
%type <val> lista_calificadores_de_tipo
%type <val> lista_de_parametros
%type <val> declaracion_parametro
%type <val> declarador_abstracto




%token <val> DIRECTIVAS_PREPROCESAMIENTO
%token <val> LITERAL_CADENA
%token <val> PALABRAS_RESERVADAS_TIPOS_DE_DATOS
%token <val> PALABRAS_RESERVADAS_ESTRUCTURA_DE_CONTROL
%token <val> PALABRAS_RESERVADAS_OTHERS
%token <val> IDENTIFICADOR
%token <val> OP_CARACT_DE_PUNTUACION
%token <val> CONST_OCTAL
%token <val> CONST_HEXADECIMAL
%token <val> CONST_DECIMAL
%token <val> CONST_PTOFLOTANTE
%token <val> CONST_CARACTER
%token <val> COMENTARIOS_LINEAL
%token <val> COMENTARIOS_MULTILINEAL

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


especificador_categoría_almacenamiento:   'auto'
                                        | 'register'
                                        | 'static'
                                        | 'extern'
                                        | 'typedef'
                                        ;



especificador_de_tipo:    'void'
                        | 'char'
                        | 'short'
                        | 'int'
                        | 'long'
                        | 'float'
                        | 'double'
                        | 'signed'
                        | 'unsigned'  
                        | especificador_estructura_union
                        | especificador_enum
                        | nombre_typedef
                        ;


calificador_de_tipo:   'const'
                     | 'volatile'
                     ;


especificador_estructura_o_union:     estructura_o_union IDENTIFICADOR /*opt*/  { lista_declaraciones_struct }
                                    | estructura_o_union IDENTIFICADOR


estructura_o_union:   'struct'
                    | 'union'
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
                            | lista_declaradores_struct  ,  declarador_struct
                            ;


declarador_struct:    declarador
                    | declarador /*opt*/ : expresion_constante
                    ;


especificador_enum:       'enum' IDENTIFICADOR /*opt*/   '{' lista_de_enumerador '}'
                        | 'enum' IDENTIFICADOR
                        ;


lista_de_enumerador:      enumerador
                        | lista_de_enumerador , enumerador
                        ;


enumerador:    IDENTIFICADOR
             | IDENTIFICADOR = expresion_constante
             ;


declarador:    apuntador /*opt*/ declarador_directo;


declarador_directo:       IDENTIFICADOR
                        | '(' declarador ')'
                        | declarador_directo  '[' expresión_constante /*opt*/ ']'
                        | declarador_directo  '(' lista_tipos_de_parametro ')'
                        | declarador_directo  '(' lista_de_identificadores /*opt*/ ')'
                        ;


apuntador:  '*' lista_calificadores_de_tipo /*opt*/
            |'*' lista_calificadores_de_tipo /*opt*/ apuntador


lista_calificadores_de_tipo:    calificador_de_tipo
                                | lista_calificadores_de_tipo calificador_de_tipo
                                ;


lista_tipos_de_parametro:      lista_de_parametros
                             | lista_de_parametros ', ...'
                             ;


lista_de_parametros:      declaracion_parametro
                        | lista_de_parametros , declaracion_parametro
                        ;


declaracion_parametro:     especificadores_de_declaracion declarador
                         | especificadores_de_declaracion declarador_abstracto /*opt*/
                         ;


lista_de_identificadores:     IDENTIFICADOR
                            | lista_de_identificadores , IDENTIFICADOR
                            ;


inicializador:  expresion_de_asignacion
                |'{'   lista_de_inicializadores   '}'
                |'{'   lista_de_inicializadores  ',''}'
                ;


lista_de_inicializadores:   inicializador
                            | lista_de_inicializadores ','  inicializador
                            ;
 

nombre_de_tipo:     lista_calificador_especificador declarador_abstracto/*opt*/
;


declarador_abstracto:   apuntador
                        | apuntador/*opt*/ declarador_abstracto_directo
 

declarador_abstracto_directo:   '(' declarador_abstracto ')'
                                | declarador_abstracto_directo/*opt*/ '[' expresion_constante/*opt*/ ']'
                                | declarador_abstracto_directo/*opt*/  '(' lista_tipos_de_parametro/*opt*/ ')'
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


sentencia_etiquetada:   IDENTIFICADOR ':' sentencia
                        | 'case' expresion_constante ':' sentencia
                        | 'default' ':' sentencia
                        ;

 
sentencia_expresion: expresion/*opt*/  ';'
;
 

sentencia-compuesta: '{' lista_declaracion/*opt*/    lista_de_sentencias/*opt*/ '}'
;

lista_de_sentencias:    sentencia
                        | lista_de_sentencias sentencia
                        ;


sentencia_de_seleccion: 'if' '(' expresion ')' sentencia
                        | 'if' '(' expresion ')' sentencia 'else' sentencia
                        | 'switch' '(' expresion ')' sentencia
                        ;

sentencia_de_iteración: 'while' '(' expresion ')' sentencia
                        | 'do' sentencia 'while' '(' expresion ')' ';'
                        | '(' expresion/*opt*/ ';' expresion/*opt*/ ';' expresion/*opt*/ ')' sentencia /* //todo: falta el for?*/
                        ;

sentencia_de_salto: 'goto' IDENTIFICADOR ';'
                    | 'continue'   ';'
                    | 'break' ';'
                    | 'return' expresion/*opt*/   ';'
                    ;


expresion:  expresion_de_asignacion
            | expresion , expresion_de_asignacion
            ;


expresion_de_asignacion:    expresion_condicional
                            | expresion_unaria operador_de_asignacion expresion_de_asignacion
                            ;


operador_de_asignacion: | '=' | '*=' | '/=' | '%=' | '+=' | '-=' | '<<=' | '>>=' | '&=' | '^=' | '|=' ;


expresion_condicional:  expresion_logica_OR
                        | expresion_logica_OR '?' expresion ':' expresion_condicional
                        ;
 
expresion_constante: expresion_condicional
;
 

expresion_logica_OR:    expresion_logica_AND
                        | expresion_logica_OR   '||'  expresion_logica_AND
                        ;


expresion_logica_AND:   expresion_OR_inclusivo
                        |expresion_logica_AND '&&' expresion_OR_inclusivo
 ;

expresion_OR_inclusivo: expresion_OR_exclusivo
                        | expresion_OR_inclusivo '|' expresion_OR_exclusivo
;

expresion_OR_exclusivo: expresion_AND
                        |expresion_OR_exclusivo   '^'   expresion_AND
;

expresion_AND:  expresion_de_igualdad
                | expresion_AND   '&'   expresion_de_igualdad
;

expresion_de_igualdad:  expresion_relacional
                        | expresion_de_igualdad    '=='    expresion_relacional
                        | expresion_de_igualdad    '!='     expresion_relacional
                        ;


expresion_relacional:   expresion_de_corrimiento
                        | expresion_relacional '<' expresion_de_corrimiento
                        | expresion_relacional '>' expresion_de_corrimiento
                        | expresion_relacional '<=' expresion_de_corrimiento
                        | expresion_relacional '>=' expresion_de_corrimiento
                        ;
 

expresion_de_corrimiento:   expresion_aditiva
                            |expresion_de_corrimiento   '<<'   expresion_aditiva
                            |expresion_de_corrimiento   '>>'  expresion_aditiva


expresion_aditiva:  expresion_multiplicativa
                    | expresion_aditiva '+' expresion_multiplicativa
                    | expresion_aditiva '-' expresion_multiplicativa
                    ;


expresion_multiplicativa:   expresion_cast
                            | expresion_multiplicativa '*' expresion_cast
                            | expresion_multiplicativa '/' expresion_cast
                            | expresion_multiplicativa '%' expresion_cast
                            ;


expresion_cast: expresion_unaria
                | '(' nombre_de_tipo ')' expresion_cast
                ;
 

expresion_unaria:   expresion_posfija
                | '++'   expresion_unaria
                | '--'    expresion_unaria
                | operador_unario   expresion_cast
                | 'sizeof'    expresion_unaria
                | 'sizeof'    '('    nombre_de_tipo   ')'
                ;


operador-unario: '&' | '*' | '+' | '-' | '~' | '!' ;


expresion_posfija:  expresion_primaria
                    | expresion_posfija   '['   expresion   ']'
                    | expresion_posfija   '('   lista_de_expresiones_argumento/*opt*/   ')'
                    | expresion_posfija    '.'    IDENTIFICADOR
                    | expresion_posfija    '->'   IDENTIFICADOR
                    | expresion_posfija   '++'
                    | expresion_posfija  '--'
                    ;

 
expresion_primaria: IDENTIFICADOR
                    | constante
                    | cadena
                    | '(' expresion ')'
                    ;


lista_expresiones_argumento:    expresion_de_asignacion
                                | lista_expresiones_argumento   ','   expresion_de_asignacion

 
constante:  constante_octal
            | CONST_HEXADECIMAL
            | CONST_DECIMAL
            | CONST_CARACTER
            | CONST_PTOFLOTANTE
            | constante_enumeracion //TODO: puede ser que no la tengamos?



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