#include"tp5.h"

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
/*
void agregarParametro(ListaFunciones* lista, char* nombreFuncion, char* nombreParametro, char* tipoParametro){
    printf("-------\nIntentando agregar parametro %s a la funcion %s\n", nombreParametro, nombreFuncion);
    Funcion* aux = lista->pri;
    while(aux != NULL){
        if(strcmp(aux->nombre, nombreFuncion) == 0){
            agregarIdentificador(aux->parametros, nombreParametro, tipoParametro);
            aux->parametros->cantElementos++;
            printf("\nParametro agregado correctamente\n");
            break;
        }
        aux = aux->sig;
    }
}
*/

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