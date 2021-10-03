
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

%}
//DEFINICIONES DE BISON

%union{
    struct yylval_struct
    {
        int tipo;
        char* val;
    } mystruct;
}

%type <mystruct> unidad_de_traduccion
%type <mystruct> declaracion_externa
%type <mystruct> definicion_de_funcion
%type <mystruct> declaracion
%type <mystruct> declarador
%type <mystruct> especificadores_de_declaracion 
%type <mystruct> lista_de_declaracion
%type <mystruct> especificador_categoria_almacenamiento
%type <mystruct> especificador_de_tipo
%type <mystruct> calificador_de_tipo
%type <mystruct> lista_declaradores_init
%type <mystruct> especificador_tipo
%type <mystruct> especificador_estructura_union
%type <mystruct> especificador_enum
%type <mystruct> lista_de_enumerador
%type <mystruct> enumerador
%type <mystruct> declarador_directo
%type <mystruct> lista_tipos_de_parametro
%type <mystruct> lista_de_identificadores
%type <mystruct> apuntador
%type <mystruct> lista_calificadores_de_tipo
%type <mystruct> lista_de_parametros
%type <mystruct> declaracion_parametro
%type <mystruct> declarador_abstracto
%type <mystruct> lista_declaracion
%type <mystruct> expresion_aditiva
%type <mystruct> lista_de_expresiones_argumento

%token <mystruct> DIRECTIVAS_PREPROCESAMIENTO
%token <mystruct> LITERAL_CADENA
%token <mystruct> PALABRAS_RESERVADAS_TIPOS_DE_DATOS
%token <mystruct> PALABRAS_RESERVADAS_ESTRUCTURA_DE_CONTROL
%token <mystruct> PALABRAS_RESERVADAS_OTHERS
%token <mystruct> IDENTIFICADOR
%token <mystruct> OP_CARACT_DE_PUNTUACION
%token <mystruct> CONST_OCTAL
%token <mystruct> CONST_HEXADECIMAL
%token <mystruct> CONST_DECIMAL
%token <mystruct> CONST_PTOFLOTANTE
%token <mystruct> CONST_CARACTER
%token <mystruct> COMENTARIOS_LINEAL
%token <mystruct> COMENTARIOS_MULTILINEAL
%token <mystruct> CONST_ENUMERACION

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


declaracion:              especificadores_de_declaracion lista_declaradores_init ';'
                        | especificadores_de_declaracion ';'
                        ;


lista_de_declaracion:     declaracion
                        | lista_de_declaracion declaracion
                        ;


especificadores_de_declaracion:   especificador_categoria_almacenamiento especificadores_de_declaracion 
                                | especificador_categoria_almacenamiento 
                                | especificador_de_tipo especificadores_de_declaracion 
                                | especificador_de_tipo
                                | calificador_de_tipo especificadores_de_declaracion 
                                | calificador_de_tipo
                                ;


especificador_categoria_almacenamiento:   PALABRAS_RESERVADAS_OTHERS 
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


especificador_estructura_o_union:     estructura_o_union IDENTIFICADOR  '{' lista_declaraciones_struct '}'
                                    | estructura_o_union IDENTIFICADOR
                                    | '{' lista_declaraciones_struct '}'
                                    ;


estructura_o_union:   'struct'
                    | 'union'
                    ;


lista_declaraciones_struct:   declaracion_struct
                            | lista_declaraciones_struct declaracion_struct
                            ;


lista_declaradores_init:    declarador_init
                            | lista_declaradores_init ',' declarador_init
                            ;


declarador_init:      declarador
                    | declarador '=' inicializador
                    ;


declaracion_struct:   lista_calificador_especificador
                    | lista_declaradores_struct
                    ;


lista_calificador_especificador:    especificador_de_tipo lista_calificador_especificador 
                                  | especificador_de_tipo
                                  | calificador_de_tipo lista_calificador_especificador 
                                  | calificador_de_tipo
                                  ;


lista_declaradores_struct:    declarador_struct
                            | lista_declaradores_struct  ','  declarador_struct
                            ;


declarador_struct:    declarador
                    | declarador  ':' expresion_constante
                    | ':' expresion_constante
                    ;


especificador_enum:       'enum' IDENTIFICADOR  '{' lista_de_enumerador '}'
                        | '{' lista_de_enumerador '}'
                        | 'enum' IDENTIFICADOR
                        ;


lista_de_enumerador:      enumerador
                        | lista_de_enumerador ',' enumerador
                        ;


enumerador:    IDENTIFICADOR
             | IDENTIFICADOR '=' expresion_constante
             ;


declarador:   apuntador declarador_directo
            | declarador_directo
;


declarador_directo:       IDENTIFICADOR
                        | '(' declarador ')'
                        | declarador_directo  '[' expresion_constante ']'
                        | declarador_directo  '[' ']'
                        | declarador_directo  '(' lista_tipos_de_parametro ')'
                        | declarador_directo  '(' lista_de_identificadores ')'
                        | declarador_directo  '(' ')'
                        ;


apuntador:  '*' lista_calificadores_de_tipo 
            |'*' 
            |'*' lista_calificadores_de_tipo  apuntador
            |'*' apuntador
            ;


lista_calificadores_de_tipo:    calificador_de_tipo
                                | lista_calificadores_de_tipo calificador_de_tipo
                                ;


lista_tipos_de_parametro:      lista_de_parametros
                             | lista_de_parametros ', ...'
                             ;


lista_de_parametros:      declaracion_parametro
                        | lista_de_parametros ',' declaracion_parametro
                        ;


declaracion_parametro:     especificadores_de_declaracion declarador
                         | especificadores_de_declaracion declarador_abstracto 
                         | especificadores_de_declaracion 
                         ;


lista_de_identificadores:     IDENTIFICADOR
                            | lista_de_identificadores ',' IDENTIFICADOR
                            ;


inicializador:  expresion_de_asignacion
                |'{'   lista_de_inicializadores   '}'
                |'{'   lista_de_inicializadores  ',''}'
                ;


lista_de_inicializadores:   inicializador
                            | lista_de_inicializadores ','  inicializador
                            ;
 

nombre_de_tipo:     lista_calificador_especificador declarador_abstracto
                    | lista_calificador_especificador 
;


declarador_abstracto:   apuntador
                        | apuntador declarador_abstracto_directo
                        |  declarador_abstracto_directo
                        ;
 
declarador_abstracto_directo:   '(' declarador_abstracto ')'
                                | declarador_abstracto_directo '[' expresion_constante ']'
                                |  '[' ']'
                                | declarador_abstracto_directo '['  ']'
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


sentencia_etiquetada:   IDENTIFICADOR ':' sentencia
                        | 'case' expresion_constante ':' sentencia
                        | 'default' ':' sentencia
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
                        | lista_de_sentencias sentencia
                        ;


sentencia_de_seleccion: 'if' '(' expresion ')' sentencia
                        | 'if' '(' expresion ')' sentencia 'else' sentencia
                        | 'switch' '(' expresion ')' sentencia
                        ;

sentencia_de_iteracion: 'while' '(' expresion ')' sentencia
                        | 'do' sentencia 'while' '(' expresion ')' ';'
                        | '(' expresion_opt ';' expresion_opt ';' expresion_opt ')' sentencia 
                        ;

sentencia_de_salto: 'goto' IDENTIFICADOR ';'
                    | 'continue'   ';'
                    | 'break' ';'
                    | 'return' expresion_opt   ';'
                    ;

//No está en la gramática, la agergo para evitar copiar 2000 veces las mismas líneas omitiendo opcionales
expresion_opt: expresion | '\n';

expresion:  expresion_de_asignacion
            | expresion ',' expresion_de_asignacion
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
                            ;


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


operador_unario: '&' | '*' | '+' | '-' | '~' | '!' ;


expresion_posfija:  expresion_primaria
                    | expresion_posfija   '['   expresion   ']'
                    | expresion_posfija   '('   lista_de_expresiones_argumento   ')'
                    | expresion_posfija   '(' ')'
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