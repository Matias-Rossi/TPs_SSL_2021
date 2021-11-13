#include"tp5.h"

ListaFunciones* inicializarListaFunciones(ListaFunciones* lista){
    lista = (ListaFunciones*)malloc(sizeof(ListaFunciones));
    lista->cantElementos = 0;
    lista->pri = NULL;
    return lista;
}

ListaFunciones* agregarFuncion(ListaFunciones* lista, char* identificador, char* tipo){
    printf("Si me estan llamando\n ");
    Funcion* funcion = malloc(sizeof(Funcion));

    funcion->nombre = identificador;    //Ira strcpy? :think:
    funcion->tipo = tipo;
    funcion->parametros = inicializarListaIdentificadores(funcion->parametros);

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
}

void agregarParametro(ListaFunciones* lista, char* nombreFuncion, char* nombreParametro, char* tipoParametro){
    Funcion* aux = lista->pri;
    while(aux != NULL){
        if(strcmp(aux->nombre, nombreFuncion) == 0){
            agregarIdentificador(aux->parametros, nombreParametro, tipoParametro);
            aux->parametros->cantElementos++;
            break;
        }
        aux = aux->sig;
    }
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