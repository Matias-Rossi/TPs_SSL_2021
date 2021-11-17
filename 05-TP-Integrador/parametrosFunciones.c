#include"tp5.h"
#include"bison.tab.h"

int yylex();

ListaFunciones* inicializarListaFunciones(ListaFunciones* lista){
    lista = (ListaFunciones*)malloc(sizeof(ListaFunciones));
    lista->cantElementos = 0;
    lista->pri = NULL;
    return lista;
}

void agregarFuncion(ListaFunciones* lista, char* identificador, char* tipo, ListaIdentificadores* listaParametros){
    //printf("Agregada la funcion %s. Parametros en %p\n", identificador, listaParametros);
    //Crear estructura
    Funcion* funcion = malloc(sizeof(Funcion));

    funcion->nombre = calloc(strlen(identificador)+1, sizeof(char));
    funcion->tipo = calloc(strlen(tipo)+1, sizeof(char));
    strcpy(funcion->nombre, identificador);
    strcpy(funcion->tipo, tipo);
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
    //listaParametros->pri = NULL;
    //listaParametros->cantElementos = 0;
    listaParametros = inicializarListaIdentificadores(listaParametros);

    //printf("listaParametros->Pri ahora es NULL\n");
    //printf("Nueva lista de parametros en %p\n", listaParametros);

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

}

char* cortarIdentificadorFuncion(char* cadena) {
    char* identificador = (char*)malloc(sizeof(char)*100);
    int i = 0;
    while(cadena[i] != '(' && cadena[i] != ' '){
        identificador[i] = cadena[i];
        i++;
    }
    identificador[i] = '\0';
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

    ListaIdentificadores* listaParametros = inicializarListaIdentificadores(listaParametros);
    char* parametro = (char*)malloc(sizeof(char)*100);
    int i = 0;
    int j = 0;
    while(cadenaSinIdentificador[i] != ')'){
        if(cadenaSinIdentificador[i] == ','){
            parametro[j] = '\0';
            char* tipoObtenidoDesdeLista =  obtenerTipoDesdeLista(identificadores_variables, sacarEspacios(parametro));
            if (tipoObtenidoDesdeLista) {
                agregarIdentificador(listaParametros, parametro, tipoObtenidoDesdeLista);
            } else {
                char* strTipo = obtenerElementoTipoPosicion(ultimas_constantes, ultimas_constantes->cantElementos - 1);
                if(strcmp(strTipo, "identificador") == 0) printf("[ERROR] Línea %d: La variable %s no ha sido declarada\n", yylineno, parametro);
                agregarIdentificador(listaParametros, parametro, strTipo);
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
        agregarIdentificador(listaParametros, parametro, tipoObtenidoDesdeLista);
    } else {
        char* strTipo = obtenerElementoTipoPosicion(ultimas_constantes, ultimas_constantes->cantElementos - 1);
        if(strcmp(strTipo, "identificador") == 0) printf("[ERROR] Línea %d: La variable %s no ha sido declarada\n", yylineno, parametro);
        agregarIdentificador(listaParametros, parametro, strTipo);
    }
    return listaParametros;
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
                        printf("[ERROR-Semántico] Línea %d: En la funcion %s se esperaba un argumento tipo %s, pero se recibio un argumento tipo %s\n", yylineno, nombreFuncion, auxParametrosFuncion->tipo, auxParametrosRecibidos->tipo);
                        return 0;
                    }
                    
                    auxParametrosRecibidos = auxParametrosRecibidos->sig;
                    auxParametrosFuncion = auxParametrosFuncion->sig;
                }
            }
            
            return 1;
        } else {
            printf("[ERROR-Semántico] Línea %d: La cantidad de parametros recibidos no coincide con la cantidad de parametros de la función %s\n", yylineno, nombreFuncion);
            return 0;
        }

    } else {

    }
}


int invokeFlex(char* str) {
    yy_scan_string(str);
    int token = yylex();
    return token;
}
