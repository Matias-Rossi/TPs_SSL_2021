#include"tp5.h"
#include"bison.tab.h"

int yylex();

ListaFunciones* inicializarListaFunciones(ListaFunciones* lista){
    lista = (ListaFunciones*)malloc(sizeof(ListaFunciones));
    lista->cantElementos = 0;
    lista->pri = NULL;
    return lista;
}

Funcion* agregarFuncion(ListaFunciones* lista, char* identificador, char* tipo, ListaIdentificadores* listaParametros){
    
    
    Funcion* funcExistente = buscarFuncion(lista, identificador);
    if(funcExistente != NULL) {
        //printf("La funcion %s ya existe", identificador );
        if(funcExistente->definida) {
            char* errorMsg = (char*)calloc(sizeof(char), 110);
            sprintf(errorMsg, "[ERROR-Semántico] Línea %d: La función %s ya ha sido definida\n", yylineno, identificador);
            agregarError(erroresSemanticos, errorMsg);
            return funcExistente;
        }
        if(funcExistente->declarada) {
            //printf(", y ya se encontraba declarada\ņ");
            return funcExistente;
        }
        
    }
    //printf("Agregando la funcion %s a la lista de funciones\n", identificador);
    
    
    //printf("Agregada la funcion %s. Parametros en %p\n", identificador, listaParametros);
    //Crear estructura
    Funcion* funcion = malloc(sizeof(Funcion));

    funcion->nombre = calloc(strlen(identificador)+1, sizeof(char));
    funcion->tipo = calloc(strlen(tipo)+1, sizeof(char));
    strcpy(funcion->nombre, identificador);
    strcpy(funcion->tipo, tipo);
    funcion->declarada = 1;
    //printf("[LOG] Función %s ahora declarada\n", identificador);
    funcion->parametros = trasladarListaIdentificadores(listaParametros);

    //Agregar la funcion a la lista
    if(lista->cantElementos == 0){
        lista->pri = funcion;
    } else {
        Funcion* aux = lista->pri;
        while(aux->sig != NULL){
            aux = aux->sig;
        }
        aux->sig = funcion;
    }
    lista->cantElementos++;

    //Reinicializacion de la lista de parametros
    listaParametros->pri = NULL;
    listaParametros->cantElementos = 0;
    //listaParametros = inicializarListaIdentificadores(listaParametros);

    //printf("Identificador de funcion: %s\n", identificador);
    //printf("listaParametros->Pri ahora es NULL\n");
    //printf("Nueva lista de parametros en %p\n", listaParametros);

    //printf("Se declaro la funcion %s\n", identificador);

    return funcion;
}

Funcion* buscarFuncion(ListaFunciones* lista, char* identificador) {
    if(lista->pri) {
        Funcion* aux = lista->pri;
        while(aux) {
            if(strcmp(identificador, aux->nombre) == 0) {
                return aux;
            }
            aux = aux->sig;
        }
        
    }
    return NULL;
}


void agregarParametro(ListaIdentificadores* listaParametros, char* nombreParametro, char* tipoParametro, ListaIdentificadores* listaVariables){
    //printf("1. listaParametros->pri = %p\n", listaParametros->pri);
    if(listaParametros->pri == NULL) {
        //listaParametros = inicializarListaIdentificadores(listaParametros);
        //printf("listaParametros reinicializada\n");
    }
    
    //Agrego a lista de parámetros
    if(!identificadorYaExiste(listaParametros, nombreParametro)) 
        agregarIdentificador(listaParametros, nombreParametro, obtenerTipo(tipoParametro));
    //printf("2. listaParametros->pri = %p\n", listaParametros->pri);

    //Agrego a lista de variables declaradas
    if(!identificadorYaExiste(listaVariables, nombreParametro)) 
        agregarIdentificador(listaVariables, nombreParametro, obtenerTipo(tipoParametro));

    //liberarListaIdentificadores(listaParametros);
    
}

char* cortarIdentificadorFuncion(char* cadena) {

    //printf("Entrando a cortar identificador\n");

    char* identificador = (char*)malloc(sizeof(char)*100);
    int i = 0;
    while(cadena[i] != '(' && cadena[i] != ' '){
        identificador[i] = cadena[i];
        i++;
    }
    identificador[i] = '\0';

    //printf("Identificador funcion %s\n", identificador);

    return identificador;
}

char* obtenerTipo(char* cadena) {
    char* tipo = (char*)malloc(sizeof(char)*10);
    int longitud = strlen(cadena);
    int i = 0;
    while(cadena[i] != ' ' && i < longitud){
        tipo[i] = cadena[i];
        i++;
    }
    //printf("tratando de obtener asterisco de %p\n", &cadena[i+1]);
    if(cadena[i + 1] && cadena[i + 1]  == '*'){
        tipo[i] = '*';
        tipo[i + 1] = '\0';
    } else {
        tipo[i] = '\0';
    }
    return tipo;
}

ListaIdentificadores* existeFuncion(ListaFunciones* lista, char* nombreFuncion){
    Funcion* aux = lista->pri;
    while(aux != NULL){
        if(strcmp(aux->nombre, nombreFuncion) == 0){
            return aux->parametros;
        }
        aux = aux->sig;
    }
    //printf("[ERROR] La función %s no existe\n", nombreFuncion);
    return NULL;
}

char* substringDesde(char* cadena, char caracter) {
    //Buscar posicion del caracter en la cadena
    for(int i = 0; i < strlen(cadena); i++){
        if(cadena[i] == caracter){
            char* subcadena = (char*)malloc(sizeof(char)*(strlen(cadena) - i));
            for(int j = 0; j < strlen(cadena) - i; j++){
                subcadena[j] = cadena[i + j + 1];
            }
            subcadena[strlen(cadena) - i] = '\0';
            return subcadena;
        }
    }
    printf("[ERROR] Algo salio terriblemente mal en substringDesde\n");
    return "error";
}

char* tipoFlexAString(enum yytokentype tipo) {
    switch(tipo){
        case LITERAL_CADENA: return "char*"; break;
        case CONST_OCTAL: return "int"; break;
        case CONST_HEXADECIMAL: return "int"; break;
        case CONST_DECIMAL: printf("[LOG] tipoFlex es int\n"); return "int"; break;
        case CONST_PTOFLOTANTE: return "float"; break;
        case CONST_CARACTER: return "char"; break;
        case IDENTIFICADOR: return "no declarado"; break;
        default: printf("[ERROR] Flex respondió cualquier cosa a \"tipoFlexAString\""); exit(1); break;
    }
}

ListaIdentificadores* tokenizarParametros(char* cadena) {

    char* cadenaSinIdentificador = substringDesde(cadena, '(');

    ListaIdentificadores* lista_parametros = inicializarListaIdentificadores(lista_parametros);
    char* parametro = (char*)malloc(sizeof(char)*100);
    int i = 0;
    int j = 0;
    while(cadenaSinIdentificador[i] != ')'){
        if(cadenaSinIdentificador[i] == ','){
            parametro[j] = '\0';
            char* tipoObtenidoDesdeLista =  obtenerTipoDesdeLista(identificadores_variables, sacarEspacios(parametro));
            if (tipoObtenidoDesdeLista) {
                agregarIdentificador(lista_parametros, parametro, tipoObtenidoDesdeLista);
            } else {
                char* strTipo = obtenerElementoTipoPosicion(ultimas_constantes, ultimas_constantes->cantElementos - 1);
                
                if(strcmp(strTipo, "identificador") == 0) {
                    char* errorMsg = (char*)calloc(sizeof(char), 110);
                    sprintf(errorMsg, "[ERROR-Semántico] Línea %d: La variable %s no ha sido declarada\n", yylineno, parametro);
                    agregarError(erroresSemanticos, errorMsg);
                }
                agregarIdentificador(lista_parametros, parametro, strTipo);
            }
            j = 0;
            i++;
        } else{
            parametro[j] = cadenaSinIdentificador[i];
            j++;
            i++;
        }
    }
    parametro[j] = '\0';
    char* tipoObtenidoDesdeLista =  obtenerTipoDesdeLista(identificadores_variables, sacarEspacios(parametro));
    if (tipoObtenidoDesdeLista) {
        agregarIdentificador(lista_parametros, parametro, tipoObtenidoDesdeLista);
    } else {
        char* strTipo = obtenerElementoTipoPosicion(ultimas_constantes, ultimas_constantes->cantElementos - 1);
        if(strcmp(strTipo, "identificador") == 0) {
            char* errorMsg = (char*)calloc(sizeof(char), 110);
            sprintf(errorMsg, "[ERROR-Semántico] Línea %d: La variable %s no ha sido declarada\n", yylineno, parametro);
            agregarError(erroresSemanticos, errorMsg);
        }
        agregarIdentificador(lista_parametros, parametro, strTipo);
    }
    return lista_parametros;
}

char* sacarEspacios(char* cadena){
    char* cadenaSinEspacios = (char*)malloc(sizeof(char)*strlen(cadena));
    int i = 0;
    int j = 0;
    while(cadena[i] != '\0'){
        if(cadena[i] != ' '){
            cadenaSinEspacios[j] = cadena[i];
            j++;
        }
        i++;
    }
    cadenaSinEspacios[j] = '\0';
    return cadenaSinEspacios;
}


int comprobar_tipos_funcion(ListaFunciones* lista, char* linea) {
    char* nombreFuncion = cortarIdentificadorFuncion(linea);
    ListaIdentificadores* parametrosFuncion = existeFuncion(lista, nombreFuncion);

    if(parametrosFuncion) {
        ListaIdentificadores* parametrosRecibidos = tokenizarParametros(linea);

        if(parametrosFuncion->cantElementos == parametrosRecibidos->cantElementos) {

            Identificador* auxParametrosFuncion = parametrosFuncion->pri;
            Identificador* auxParametrosRecibidos = parametrosRecibidos->pri;

            for(int i = 0; i < parametrosFuncion->cantElementos; i++) {
                
                if(auxParametrosRecibidos->tipo){
                    if(strcmp(auxParametrosFuncion->tipo, auxParametrosRecibidos->tipo) != 0) {
                        char* errorMsg = (char*)calloc(sizeof(char), 150);
                        sprintf(errorMsg, "[ERROR-Semántico] Línea %d: En la funcion %s se esperaba un argumento tipo %s, pero se recibio un argumento tipo %s\n", yylineno, nombreFuncion, auxParametrosFuncion->tipo, auxParametrosRecibidos->tipo);
                        agregarError(erroresSemanticos, errorMsg);
                        return 0;
                    }
                    
                    auxParametrosRecibidos = auxParametrosRecibidos->sig;
                    auxParametrosFuncion = auxParametrosFuncion->sig;
                }
            }
            
            return 1;
        } else {
            char* errorMsg = (char*)calloc(sizeof(char), 170);
            sprintf(errorMsg, "[ERROR-Semántico] Línea %d: La cantidad de parametros recibidos no coincide con la cantidad de parametros de la función %s\n", yylineno, nombreFuncion);
            agregarError(erroresSemanticos, errorMsg);
            return 0;
        }

    } else {

    }
    return 0;
}


int invokeFlex(char* str) {
    yy_scan_string(str);
    int token = yylex();
    return token;
}

/*********************** Definicion y declaración ***********************/
ListaIdentificadores* tokenizarParametrosDesdeLinea(char* linea) {
    char* cadenaSinIdentificador = substringDesde(linea, '(');
    char* parametro = (char*)malloc(sizeof(char)*30);


    /*
    int main(int hola, char* chao);

    while este entre ( y ):
        si es un espacio:
            guardar tipo en lista
            saltar hasta el primer caracter no espacio despues de la coma
        si no es un espacio:
            guardar caracter en tipo 
    */

    ListaIdentificadores* listaParametros = inicializarListaIdentificadores(listaParametros);

    int salteando = 0;
    int j = 0;

    for(int i = 0;cadenaSinIdentificador[i] != ')'; i++) {

        if(cadenaSinIdentificador[i] == ' ' && salteando == 0){
            parametro[j] = '\0';
            //if parametro only contains spaces, ignore it
            if(strcmp(parametro, "") != 0 && strcmp(parametro, " ") != 0) {
                //printf("[LOG] Agregado token tipo %s\n", parametro);
                agregarIdentificador(listaParametros, "-", parametro);
                salteando = 1;
            }
            j = 0;
        } else 
        if(!salteando && cadenaSinIdentificador[i] != ' ') {
            parametro[j] = cadenaSinIdentificador[i];
            j++;
        } else if(cadenaSinIdentificador[i] == ',') {
            salteando = 0;
        }
    }
    //printf("retornando la siguiente lista: ");mostrarParametros(listaParametros); printf("\n");
    return listaParametros;
}

int definirFuncion(ListaFunciones* lista, char* linea) {
    /*
        declarada:
            definida:
                error
            noDefinida:
                verificar que estos parámetros sean los mismos
        noDeclarada:
            ahora si está declarada
    */

    //printf("Entro a definir funcion, linea: %s\n", linea);

    //Nombre de la funcion
    char* nombreFuncion = cortarIdentificadorFuncion(substringDesde(linea, ' '));

    //Obtener tipo de la función
    char* tipo = obtenerTipo(linea);

    //printf("Se esta definiendo la funcion %s con el tipo %s\n", nombreFuncion, tipo);

    //Tokenizar los parámetros de la línea
    ListaIdentificadores* parametrosRecibidos = tokenizarParametrosDesdeLinea(linea);

    Funcion* aux = lista->pri;
    while(aux != NULL){
        if(strcmp(aux->nombre, nombreFuncion) == 0){

           //printf("La funcion %s ya se encuentra en la lista\n", aux->nombre);


           //Si está declarada
            if(aux->declarada) {

                //Si está declarada y definida   
                if(aux->definida) {
                    char* errorMsg = (char*)calloc(sizeof(char), 100);
                    sprintf(errorMsg, "[ERROR-Semántico] Línea %d: La función %s ya fue definida\n", yylineno, aux->nombre);
                    agregarError(erroresSemanticos, errorMsg);
                    lista_parametros = inicializarListaIdentificadores(lista_parametros);
                    return 0;

                } else {
                    //Si está declarada pero no definida

                    //printf("La funcion %s esta declarada pero no definida\n", nombreFuncion);

                    ListaIdentificadores* parametrosFuncion = existeFuncion(lista, nombreFuncion);

                    if(parametrosFuncion) {

                        //Validación de tipo de función
                        if(strcmp(tipo, aux->tipo) != 0) {
                            char* errorMsg = (char*)calloc(sizeof(char), 110);
                            sprintf(errorMsg, "[ERROR-Semántico] Línea %d: La función %s no es del tipo %s\n", yylineno, aux->nombre, aux->tipo);
                            agregarError(erroresSemanticos, errorMsg);
                            lista_parametros = inicializarListaIdentificadores(lista_parametros);
                            return 0;
                        }

                        //Controlar misma cantidad de parámetros
                        if(parametrosFuncion->cantElementos == parametrosRecibidos->cantElementos) {

                            //Iterar por los parámetros
                            Identificador* auxParametrosFuncion = parametrosFuncion->pri;
                            Identificador* auxParametrosRecibidos = parametrosRecibidos->pri;

                            for(int i = 0; i < parametrosFuncion->cantElementos; i++) {
                                
                                if(auxParametrosRecibidos->tipo){
                                    if(strcmp(auxParametrosFuncion->tipo, auxParametrosRecibidos->tipo) != 0) {
                                        char* errorMsg = (char*)calloc(sizeof(char), 160);
                                        sprintf(errorMsg, "[ERROR-Semántico] Línea %d: En la funcion %s no coinciden los tipos de parámetros entre la declaración y la definición\n", yylineno, nombreFuncion);
                                        agregarError(erroresSemanticos, errorMsg);
                                        lista_parametros = inicializarListaIdentificadores(lista_parametros);
                                        return 0;
                                    }
                                    
                                    auxParametrosRecibidos = auxParametrosRecibidos->sig;
                                    auxParametrosFuncion = auxParametrosFuncion->sig;
                                }
                            }
                            
                            aux->definida = 1;
                            printf("[LOG] Línea %d: Funcion %s ahora definida\n", yylineno ,nombreFuncion);
                            lista_parametros = inicializarListaIdentificadores(lista_parametros);
                            return 1;
                        } else {
                            char* errorMsg = (char*)calloc(sizeof(char), 200);
                            sprintf(errorMsg, "[ERROR-Semántico] Línea %d: La cantidad de parametros en la definición no coincide con la cantidad de parametros de la declaración de la función %s\n", yylineno, nombreFuncion);
                            agregarError(erroresSemanticos, errorMsg);
                            lista_parametros = inicializarListaIdentificadores(lista_parametros);
                            return 0;
                        }

                    } 
                } 
            }
        }
        aux = aux->sig;
    }
    //Si no está declarada
    //printf("Parametros: "); mostrarParametros(parametrosRecibidos); printf("\n");
    Funcion* f = agregarFuncion(lista, nombreFuncion, tipo, parametrosRecibidos);
    f->definida = 1;
    printf("[LOG] Funcion %s ahora definida\n", nombreFuncion);

    
    return 1;
}