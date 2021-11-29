
%{
#include "tp5.h"


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
%token NO_RECONOCIDO


%token IDENTIFICADOR
%token LITERAL_CADENA
%token   CONST_OCTAL
%token   CONST_HEXADECIMAL
%token   CONST_DECIMAL
%token   CONST_PTOFLOTANTE
%token   CONST_CARACTER

%nonassoc IFX
%nonassoc ELSE

%start unidad_de_programa
%%
unidad_de_programa: INCLUDE  unidad_de_programa                           
				  | DEFINE  expresion_primaria   unidad_de_programa                  	
				  | unidad_de_traduccion 
                  | error unidad_de_traduccion {yyerrok;}
                  | noRec unidad_de_programa
	    		  ;

idNoRec: noRec
        | idNoRec noRec
        | idNoRec IDENTIFICADOR
        | IDENTIFICADOR idNoRec
        ;

noRec: NO_RECONOCIDO
        

unidad_de_traduccion:     declaracion_externa 
                        | unidad_de_traduccion declaracion_externa 
                        ;

declaracion_externa:      definicion_de_funcion                                                             {definirFuncion(lista_funciones, $<cval>1);}                              
                        | declaracion                                                                       {aux_tFuncion = obtenerTipo($<cval>1); agregarFuncion(lista_funciones, aux_nombreFuncion, aux_tFuncion, lista_parametros);}
                        ;


definicion_de_funcion: especificadores_de_declaracion declarador lista_de_declaracion sentencia_compuesta   {/*aux_tFuncion = obtenerTipo($<cval>1); agregarFuncion(lista_funciones, aux_nombreFuncion, aux_tFuncion, lista_parametros);*/}
				     | declarador lista_de_declaracion sentencia_compuesta                                  {/*aux_tFuncion = obtenerTipo($<cval>1); agregarFuncion(lista_funciones, aux_nombreFuncion, aux_tFuncion, lista_parametros);*/}
				     | especificadores_de_declaracion declarador sentencia_compuesta 			            {/*aux_tFuncion = obtenerTipo($<cval>1); agregarFuncion(lista_funciones, aux_nombreFuncion, aux_tFuncion, lista_parametros);*/}
				     | declarador sentencia_compuesta                                                       {/*aux_tFuncion = obtenerTipo($<cval>1); agregarFuncion(lista_funciones, aux_nombreFuncion, aux_tFuncion, lista_parametros);*/}
				     ;


declaracion:              especificadores_de_declaracion lista_declaradores_init ';'
                        | especificadores_de_declaracion error ';'
                        | especificadores_de_declaracion ';'
                        //| especificadores_de_declaracion lista_declaradores_init error                      { char* mensaje = calloc(60, sizeof(char));printf(mensaje, "[ERROR-Sintáctico] Línea %d: Falta punto y coma en línea\n", yylineno);agregarError(listaErrores, mensaje);} 
                                                                                                                
                                                                                                                
                                                                                                                
                        //| especificadores_de_declaracion error                                              {char* mensaje = calloc(60, sizeof(char)); printf(mensaje, "[ERROR-Sintáctico] Línea %d: Falta punto y coma en línea\n", yylineno); agregarError(listaErrores, mensaje);}
                                                                                                                
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
                            | error
                            ;


declarador_init:      declarador
                    | declarador '=' inicializador
                    | declarador '='                   { char* errorMsg = (char*)malloc(sizeof(char) * 62);
                                                        sprintf(errorMsg, "[ERROR-Sintáctico] Línea %d: Falta inicializador\n", yylineno);yyerrok;
                                                        agregarError(erroresSintacticos, errorMsg);}
                    ;


declaracion_struct:   lista_calificador_especificador  lista_declaradores_struct ';'
                    //| lista_calificador_especificador lista_declaraciones_struct error         {printf("[ERROR] Línea %d: Falta punto y coma \n", yylineno);yyerrok;yyclearin;}
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
             | IDENTIFICADOR '='                           {yyerrok;char* errorMsg = (char*)malloc(sizeof(char) * 65);sprintf(errorMsg, "[ERROR-Sintáctico] Línea %d: Falta expresion constante\n", yylineno);agregarError(erroresSintacticos, errorMsg);}
             ;

declarador:   apuntador declarador_directo                                                                  
            | declarador_directo      
            | error
;

declarador_directo:       IDENTIFICADOR                                           {if(!identificadorYaExiste(identificadores_variables, sacar_ultimo_caracter($<cval>1))) agregarIdentificador(identificadores_variables,  sacar_ultimo_caracter($<cval>1), aux_tIdentificador);}
                        | '(' declarador ')'
                        | IDENTIFICADOR  '[' expresion_constante ']'              {if(!identificadorYaExiste(identificadores_variables, sacar_ultimo_caracter($<cval>1))) agregarIdentificador(identificadores_variables,  sacar_ultimo_caracter($<cval>1), aux_tIdentificador);}
                        | IDENTIFICADOR  '[' ']'                                  {if(!identificadorYaExiste(identificadores_variables, sacar_ultimo_caracter($<cval>1))) agregarIdentificador(identificadores_variables,  sacar_ultimo_caracter($<cval>1), aux_tIdentificador);}
                        | IDENTIFICADOR '(' lista_tipos_de_parametro ')'          {aux_nombreFuncion = cortarIdentificadorFuncion($<cval>1);}
                        | IDENTIFICADOR '(' lista_de_identificadores ')'          {aux_nombreFuncion = cortarIdentificadorFuncion($<cval>1);}
                        | IDENTIFICADOR '(' ')'                                   {aux_nombreFuncion = cortarIdentificadorFuncion($<cval>1);}
                        | IDENTIFICADOR '(' lista_tipos_de_parametro         { char* errorMsg = (char*)malloc(sizeof(char) * 62);sprintf(errorMsg, "[ERROR-Sintáctico] Línea %d: Falta paréntesis de cierre\n", yylineno);agregarError(erroresSintacticos, errorMsg);}
                        | IDENTIFICADOR '(' lista_de_identificadores         { char* errorMsg = (char*)malloc(sizeof(char) * 62);sprintf(errorMsg, "[ERROR-Sintáctico] Línea %d: Falta paréntesis de cierre\n", yylineno);agregarError(erroresSintacticos, errorMsg);}
                        | IDENTIFICADOR '('                                  { char* errorMsg = (char*)malloc(sizeof(char) * 62);sprintf(errorMsg, "[ERROR-Sintáctico] Línea %d: Falta paréntesis de cierre\n", yylineno);agregarError(erroresSintacticos, errorMsg);}
                        | idNoRec
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


lista_de_parametros:      declaracion_parametro                         {aux_tIdentificador = sacar_ultimo_caracter($<cval>1); agregarParametro(lista_parametros, aux_nParametro, aux_tIdentificador, identificadores_variables);}
                        | lista_de_parametros ',' declaracion_parametro {aux_tIdentificador = sacar_ultimo_caracter($<cval>3);agregarParametro(lista_parametros, aux_nParametro, aux_tIdentificador, identificadores_variables);}
                        ;


declaracion_parametro:     especificadores_de_declaracion apuntadorOpt IDENTIFICADOR {aux_nParametro = sacar_ultimo_caracter(obtenerTipo($<cval>3));}
                         | especificadores_de_declaracion apuntadorOpt IDENTIFICADOR '[' expresion_constante ']' {aux_nParametro = sacar_ultimo_caracter(obtenerTipo($<cval>3));}
                         | especificadores_de_declaracion apuntadorOpt IDENTIFICADOR '(' lista_tipos_de_parametro ')'  {aux_nombreFuncion = cortarIdentificadorFuncion($<cval>3);}
                         | especificadores_de_declaracion apuntadorOpt IDENTIFICADOR '(' lista_de_identificadores ')'  {aux_nombreFuncion = cortarIdentificadorFuncion($<cval>3);}
                         | especificadores_de_declaracion apuntadorOpt declarador_abstracto 
                         | especificadores_de_declaracion apuntadorOpt 
                         ;

apuntadorOpt:      apuntador                                            
                |   /* vacio */                                         
                ;


lista_de_identificadores:      expresion_primaria                                {/*agregarIdentificador(identificadores_variables,  sacar_ultimo_caracter($<cval>1), aux_tIdentificador);*/}    
                            | lista_de_identificadores ',' expresion_primaria
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
            | error
            ;


sentencia_etiquetada:   IDENTIFICADOR ':' sentencia 
                        | CASE expresion_constante ':' sentencia
                        | DEFAULT ':' sentencia
                        ;

 
sentencia_expresion:    expresion ';'
                        //| expresion error             {printf("[ERROR-Sintáctico] Línea %d: Falta punto y coma\n", yylineno);yyerrok;yyclearin;}
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
                    | RETURN expresion ';'
                    | RETURN expresion               {char* errorMsg = (char*)calloc(sizeof(char), 60);sprintf(errorMsg, "[ERROR-Sintáctico] Línea %d: Falta punto y coma\n", yylineno);agregarError(erroresSintacticos, errorMsg);yyerrok;}
                    | RETURN  ';'
                    | RETURN                        {char* errorMsg = (char*)calloc(sizeof(char), 60);sprintf(errorMsg, "[ERROR-Sintáctico] Línea %d: Falta punto y coma\n", yylineno);agregarError(erroresSintacticos, errorMsg);yyerrok;}
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
						|'=' 
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
				| expresion_aditiva '+' expresion_multiplicativa        {if(!chequearSuma(sacar_ultimo_caracter($<cval>1), ultimas_constantes)) {char* errorMsg = (char*)calloc(sizeof(char), 50);sprintf(errorMsg,"[ERROR-Semántico] Línea %d: Suma inválida\n", yylineno);agregarError(erroresSemanticos, errorMsg);}}    
				| expresion_aditiva '-' expresion_multiplicativa 
				;

expresion_multiplicativa: expresion_cast 
					| expresion_multiplicativa '*' expresion_cast 
					| expresion_multiplicativa '/' expresion_cast       {verificarDivisor($<cval>3);}
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
                | error
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
                    | expresion_posfija   '('   lista_expresiones_argumento   ')'   { comprobar_tipos_funcion(lista_funciones, $<cval>1); }
                    | expresion_posfija   '('   lista_expresiones_argumento      { comprobar_tipos_funcion(lista_funciones, $<cval>1); yyerrok;}
                    | expresion_posfija   '(' ')'
                    | expresion_posfija    '.'    IDENTIFICADOR
                    | expresion_posfija   FLECHA   IDENTIFICADOR
					| expresion_posfija   MENOS_MENOS 
					| expresion_posfija   MAS_MAS 
					;


 
expresion_primaria: IDENTIFICADOR           {agregarIdentificador(ultimas_constantes, "-", "identificador"); /*printf("Identificador: %s\n", $<cval>1);*/ validarIdentificador($<cval>1);}
                    | constante     
                    | LITERAL_CADENA        {agregarIdentificador(ultimas_constantes, "-", "char*");}
                    | '(' expresion ')'
                    ;


lista_expresiones_argumento:    expresion_de_asignacion
                                | lista_expresiones_argumento   ','   expresion_de_asignacion 
                                //| /* empty */
                                ;

constante:  CONST_OCTAL             {agregarIdentificador(ultimas_constantes, "-", "int");}
            | CONST_HEXADECIMAL     {agregarIdentificador(ultimas_constantes, "-", "int");}
            | CONST_DECIMAL         {agregarIdentificador(ultimas_constantes, "-", "int");}
            | CONST_CARACTER        {agregarIdentificador(ultimas_constantes, "-", "char");}
            | CONST_PTOFLOTANTE     {agregarIdentificador(ultimas_constantes, "-", "float");}
            | ENUM                  
            ;

%%
int main (int argc, char **argv)
{
    #ifdef YYDEBUG
        //yydebug = 1;
    #endif
    
    system("clear");

    if(argv[1] == NULL){
        printf("Debe especificar un archivo para analizar\n");
    }

    else{

        printf("Abriendo archivo %s\n", argv[1]);

        yyin = fopen(argv[1], "r");

        printf("Creando estructuras\n");

        analisisCorrecto = 1;
        identificadores_variables = inicializarListaIdentificadores(identificadores_variables);
        lista_funciones = inicializarListaFunciones(lista_funciones);   //especifico tp5

        identificadores_funciones = inicializarListaIdentificadores(identificadores_funciones);
        lista_sentencias          = inicializarListaSentencias     (lista_sentencias);
        lista_parametros          = inicializarListaIdentificadores(lista_parametros);
        ultimas_constantes        = inicializarListaIdentificadores(ultimas_constantes);
        erroresLexicos             = inicializarListaErrores       (erroresLexicos); 
        erroresSintacticos             = inicializarListaErrores       (erroresSintacticos); 
        erroresSemanticos             = inicializarListaErrores       (erroresSemanticos); 

        printf("\n --- Comenzando anlisis lexico y sintactico ---\n\n");

        yyparse();
        //fclose(yyin);

       

        printf("\n\n --- Imprimiendo reporte ---");

        crearListadoIdentificadores(identificadores_variables, "VARIABLES DECLARADAS");
        crearListadoIdentificadores(identificadores_funciones, "FUNCIONES DECLARADAS");
        mostrarListadoFunciones(lista_funciones);
        mostrarErrores();
        //crearListadoSentencias     (lista_sentencias,          "SENTENCIAS");
       

    }



    return 0;
}

int yyerror(const char *msg)
{
	//printf("\n[ERROR-Sintáctico] Línea %d, fallo de análisis: %s\n", yylineno, msg);
	return 0;
}