#include "tp5.h"

ListaError* inicializarListaErrores(ListaError* listaError) {
    listaError = (ListaError*) malloc(sizeof(ListaError));
    listaError->pri = NULL;
    listaError->cantElementos = 0;
    return listaError;
}


void agregarError(ListaError* listaError, char* mensaje) {
    Error* error = (Error*)malloc(sizeof(error));
    error->mensaje = calloc(strlen(mensaje) + 1, sizeof(char));
    strcpy(error->mensaje, mensaje);

    if(listaError->pri == NULL) {
        listaError->pri = error;
    } else {
        Error* aux = listaError->pri;
        while(aux->sig != NULL) {
            aux = aux->sig;
        }
        aux->sig = error;
    }
}
