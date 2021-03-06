
%{
#include "tp4.h"


int yylex(void);
int yywrap(){
    return(1);
}

//extern int yylineno;

int idVar = 0;

extern FILE* yyin;

%}
%union{
   int ival;
   double dval;
   char* cval;
}

%token INCLUDE  
%token DEFINE  
%token AUTO   	
%token REGISTER  
%token STATIC  
%token EXTERN  
%token TYPEDEF  
%token VOID  
%token CHAR  
%token SHORT  
%token INT  
%token LONG  
%token FLOAT  
%token DOUBLE  
%token SIGNED  
%token UNSIGNED  	
%token CONST  
%token VOLATILE  
%token ENUM  
%token CASE  	
%token DEFAULT  
%token IF  
%token SWITCH  
%token ELSE  
%token FOR  
%token DO  
%token WHILE  
%token GOTO  
%token CONTINUE  
%token BREAK  
%token STRUCT  
%token UNION  
%token RETURN  
%token SIZEOF  
%token CTE_OR  
%token CTE_AND  
%token ELIPSIS  
%token IGUAL_IGUAL  
%token DISTINTO  
%token MENOR_IGUAL  
%token MAYOR_IGUAL  
%token CORR_DER  
%token CORR_IZQ  
%token MAS_MAS  
%token MENOS_MENOS  
%token FLECHA  
%token POR_IGUAL  
%token DIV_IGUAL  
%token MAS_IGUAL  
%token MENOS_IGUAL  
%token MOD_IGUAL  
%token CORR_DER_IGUAL  
%token CORR_IZQ_IGUAL  
%token Y_IGUAL  
%token POT_IGUAL  
%token  O_IGUAL  


%token IDENTIFICADOR
%token LITERAL_CADENA
%token   CONST_OCTAL
%token   CONST_HEXADECIMAL
%token   CONST_DECIMAL
%token   CONST_PTOFLOTANTE
%token   CONST_CARACTER

%left       '+' '-'
%left       '*' '/'
%left       '('
%nonassoc IFX
%nonassoc ELSE

%start unidad_de_programa
%%
unidad_de_programa: INCLUDE  unidad_de_programa                           
				  | DEFINE  expresion_primaria   unidad_de_programa                  	
				  | unidad_de_traduccion 
	    		  ;

unidad_de_traduccion:     declaracion_externa 
                        | unidad_de_traduccion declaracion_externa 
                        ;

declaracion_externa:      definicion_de_funcion                                         
                        | declaracion                                                   
                        ;


definicion_de_funcion: especificadores_de_declaracion declarador lista_de_declaracion sentencia_compuesta 
				     | declarador lista_de_declaracion sentencia_compuesta
				     | especificadores_de_declaracion declarador sentencia_compuesta 			
				     | declarador sentencia_compuesta 
				     ;


declaracion:              especificadores_de_declaracion lista_declaradores_init ';'
                        | especificadores_de_declaracion ';'
                        ;

lista_de_declaracion:   declaracion
                        | lista_de_declaracion declaracion 
                        ;

especificadores_de_declaracion:   especificador_categoria_almacenamiento especificadores_de_declaracion 
                                | especificador_categoria_almacenamiento 
                                | especificador_de_tipo especificadores_de_declaracion 
                                | especificador_de_tipo
                                | calificador_de_tipo especificadores_de_declaracion                          
                                | calificador_de_tipo                                                        
                                ;


especificador_categoria_almacenamiento:   AUTO 
				                    |REGISTER
				                    |STATIC 
				                    |EXTERN 
				                    |TYPEDEF 
				                    ;


especificador_de_tipo: INT                         {aux_tIdentificador="int";}
	  		|CHAR                                  {aux_tIdentificador="char";}
	  		|FLOAT                                 {aux_tIdentificador="float";}
	  		|DOUBLE                                {aux_tIdentificador="double";}
          	|SHORT                                 {aux_tIdentificador="short";}
	  		|VOID                                  {aux_tIdentificador="void";}
	  		|LONG                                  {aux_tIdentificador="long";}
	 		|SIGNED                                {aux_tIdentificador="signed";}
            |UNSIGNED 							   {aux_tIdentificador="unsigned";}
	        |especificador_estructura_o_union
	        |especificador_enum 
	        |nombre_typedef 
	        ;
                                   
calificador_de_tipo: CONST  
	               | VOLATILE 
	               ;

especificador_estructura_o_union:    estructura_o_union IDENTIFICADOR  '{' lista_declaraciones_struct '}'        
                                    | estructura_o_union IDENTIFICADOR
                                    | '{' lista_declaraciones_struct '}'
                                    ;

estructura_o_union: STRUCT 
	              | UNION  
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


declaracion_struct:   lista_calificador_especificador  lista_declaradores_struct   ';'
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


especificador_enum:       ENUM IDENTIFICADOR  '{' lista_de_enumerador '}' 
                        | '{' lista_de_enumerador '}'
                        | ENUM IDENTIFICADOR
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

declarador_directo:       IDENTIFICADOR                                           {agregarIdentificador(identificadores_variables,  sacar_ultimo_caracter($<cval>1), aux_tIdentificador);}
                        | '(' declarador ')'
                        | IDENTIFICADOR  '[' expresion_constante ']'              {agregarIdentificador(identificadores_variables,  sacar_ultimo_caracter($<cval>1), aux_tIdentificador);}
                        | IDENTIFICADOR  '[' ']'                                  {agregarIdentificador(identificadores_variables,  sacar_ultimo_caracter($<cval>1), aux_tIdentificador);}
                        | IDENTIFICADOR '(' lista_tipos_de_parametro ')'          {agregarIdentificador(identificadores_funciones,  $<cval>1, aux_tIdentificador);}
                        | IDENTIFICADOR '(' lista_de_identificadores ')'          {agregarIdentificador(identificadores_funciones,  $<cval>1, aux_tIdentificador);}
                        | IDENTIFICADOR '(' ')'                                   {agregarIdentificador(identificadores_funciones,  $<cval>1, aux_tIdentificador);}
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
                             | lista_de_parametros ',' ELIPSIS
                             ;


lista_de_parametros:      declaracion_parametro
                        | lista_de_parametros ',' declaracion_parametro 
                        ;


declaracion_parametro:     especificadores_de_declaracion declarador
                         | especificadores_de_declaracion declarador_abstracto 
                         | especificadores_de_declaracion 
                         ;


lista_de_identificadores:      IDENTIFICADOR                                {agregarIdentificador(identificadores_variables,  sacar_ultimo_caracter($<cval>1), aux_tIdentificador);}    
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

nombre_typedef: 't'
              ;


sentencia:  sentencia_etiquetada        {agregar_sentencia(lista_sentencias, "Sentencia etiquetada",   yylineno);}
            | sentencia_expresion       {agregar_sentencia(lista_sentencias, "Sentencia expresion",    yylineno);}
            | sentencia_compuesta       {agregar_sentencia(lista_sentencias, "Sentencia compuesta",    yylineno);}
            | sentencia_de_iteracion    {agregar_sentencia(lista_sentencias, "Sentencia de iteracion", yylineno);}
            | sentencia_de_seleccion    {agregar_sentencia(lista_sentencias, "Sentencia de seleccion", yylineno);}
            | sentencia_de_salto        {agregar_sentencia(lista_sentencias, "Sentencia de salto",     yylineno);}
            ;


sentencia_etiquetada:   IDENTIFICADOR ':' sentencia 
                        | CASE expresion_constante ':' sentencia
                        | DEFAULT ':' sentencia
                        ;

 
sentencia_expresion:    expresion ';'
                        |  ';'
                        ;
 

sentencia_compuesta: '{' lista_de_declaracion  lista_de_sentencias '}' 
                      | '{''}'
                      | '{' lista_de_declaracion  '}'
                      | '{' lista_de_sentencias '}'
                      ;

lista_de_sentencias:    sentencia
                        | lista_de_sentencias sentencia 
                        ;

sentencia_de_seleccion: IF '(' expresion ')' sentencia  %prec IFX 
                      | IF '(' expresion ')' sentencia ELSE sentencia
                      | SWITCH '(' expresion ')' sentencia
                      ;

sentencia_de_iteracion: WHILE '(' expresion ')' sentencia                                          
				   | DO sentencia WHILE '(' expresion ')' ';'                                           
				   | FOR '(' expresion ';' expresion ';' expresion ')' sentencia                                           
				   | FOR '(' expresion ';' expresion ';'	')' sentencia                                           
				   | FOR '(' expresion ';' ';' expresion ')' sentencia                                          
				   | FOR '(' expresion ';' ';' ')' sentencia                                           
				   | FOR '(' ';' expresion ';' expresion ')' sentencia                                           
				   | FOR '(' ';' expresion ';' ')' sentencia                                           
				   | FOR '(' ';' ';' expresion ')' sentencia                                           
				   | FOR '(' ';' ';' ')' sentencia   
				   ;

sentencia_de_salto: GOTO IDENTIFICADOR ';'
                    | CONTINUE   ';'
                    | BREAK ';'
                    | RETURN expresion   ';'
                    | RETURN  ';'
                    ;

expresion:  expresion_de_asignacion
            | expresion ',' expresion_de_asignacion 
            ;


expresion_de_asignacion:    expresion_condicional
                            | expresion_unaria operador_de_asignacion expresion_de_asignacion
                            ;

operador_de_asignacion:    POR_IGUAL 
						|DIV_IGUAL 
						|MAS_IGUAL 
						|MENOS_IGUAL 
						|MOD_IGUAL 
						|CORR_IZQ_IGUAL 
						|CORR_DER_IGUAL 
						|Y_IGUAL 
						|POT_IGUAL 
						|O_IGUAL 
						| '=' 
						;


expresion_condicional:  expresion_logica_OR
                        | expresion_logica_OR '?' expresion ':' expresion_condicional 
                        ;
 
expresion_constante: expresion_condicional
;
 

expresion_logica_OR:    expresion_logica_AND
                        | expresion_logica_OR   CTE_OR  expresion_logica_AND 
                        ;


expresion_logica_AND:   expresion_OR_inclusivo
                        |expresion_logica_AND CTE_AND expresion_OR_inclusivo 
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
                        | expresion_de_igualdad    IGUAL_IGUAL    expresion_relacional 
                        | expresion_de_igualdad    DISTINTO       expresion_relacional 
                        ;                        


expresion_relacional: expresion_de_corrimiento 
					| expresion_relacional '<' expresion_de_corrimiento 
					| expresion_relacional '>' expresion_de_corrimiento  
					| expresion_relacional MENOR_IGUAL expresion_de_corrimiento 
					| expresion_relacional MAYOR_IGUAL expresion_de_corrimiento 
					;
 

expresion_de_corrimiento: expresion_aditiva 
                        | expresion_de_corrimiento CORR_IZQ expresion_aditiva 
						| expresion_de_corrimiento CORR_DER expresion_aditiva 
						;


expresion_aditiva: expresion_multiplicativa 
				| expresion_aditiva '+' expresion_multiplicativa 
				| expresion_aditiva '-' expresion_multiplicativa 
				;

expresion_multiplicativa: expresion_cast 
					| expresion_multiplicativa '*' expresion_cast 
					| expresion_multiplicativa '/' expresion_cast 
					| expresion_multiplicativa '%' expresion_cast 
					;


expresion_cast: expresion_unaria
                | '(' nombre_de_tipo ')' expresion_cast
                ;
 

expresion_unaria: expresion_posfija 
				| MENOS_MENOS  expresion_unaria
				| MAS_MAS expresion_unaria 
				| operador_unario  expresion_cast 
				| SIZEOF expresion_unaria 
				| SIZEOF '(' nombre_de_tipo ')'
                ;

operador_unario: '&' 
			| '*' 
			| '+' 
			| '-' 
			| '~' 
			| '!' 			
			;

expresion_posfija:  expresion_primaria
                    | expresion_posfija   '['   expresion   ']' 
                    | expresion_posfija   '('   lista_expresiones_argumento   ')'
                    | expresion_posfija   '(' ')'
                    | expresion_posfija    '.'    IDENTIFICADOR
                    | expresion_posfija   FLECHA   IDENTIFICADOR
					| expresion_posfija   MENOS_MENOS 
					| expresion_posfija   MAS_MAS 
					;


 
expresion_primaria: IDENTIFICADOR
                    | constante
                    | LITERAL_CADENA 
                    | '(' expresion ')'
                    ;


lista_expresiones_argumento:    expresion_de_asignacion
                                | lista_expresiones_argumento   ','   expresion_de_asignacion 
                                ;

constante:  CONST_OCTAL
            | CONST_HEXADECIMAL
            | CONST_DECIMAL
            | CONST_CARACTER
            | CONST_PTOFLOTANTE
            | ENUM
            ;

%%
int main (int argc, char **argv)
{

    if(argv[1] == NULL){
        printf("Debe especificar un archivo para analizar\n");
    }

    else{

        printf("Abriendo archivos\n");

        yyin = fopen(argv[1], "r");
        FILE* fpReporte = fopen("reporte.txt", "w+");

        printf("Creando estructuras\n");

        analisisCorrecto = 1;
        identificadores_variables = inicializarListaIdentificadores(identificadores_variables);
        identificadores_funciones = inicializarListaIdentificadores(identificadores_funciones);
        lista_sentencias          = inicializarListaSentencias     (lista_sentencias);

        printf("Comenzando anlisis lexico y sintactico\n");

        yyparse();
        fclose(yyin);

        if(analisisCorrecto){

            printf("Imprimiendo reporte\n");

            crearListadoIdentificadores(fpReporte, identificadores_variables, "VARIABLES DECLARADAS");
            crearListadoIdentificadores(fpReporte, identificadores_funciones, "FUNCIONES DECLARADAS");
            crearListadoSentencias     (fpReporte, lista_sentencias,          "SENTENCIAS");
        }

        fclose(fpReporte);
    }

    return 0;
}

int yyerror(const char *msg)
{
	printf("\nFallo el analisis en la linea: %d %s\n", yylineno, msg);
	analisisCorrecto = 0;
	return 0;
}