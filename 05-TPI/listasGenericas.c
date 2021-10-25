#include"tp5.h"


list* inicializarLista(list* lista){
    lista = (list*) malloc(sizeof(list));
    lista->cantElementos = 0;
    lista->data = NULL;
    
    return lista;
}

void agregarElemento(list* lista, void* data, int data_size){

    list* nuevoElemento = malloc(sData);
    nuevoElemento->data = data;
    nuevoElemento->sgte = NULL;

    if(!lista->sgte){
        lista->sgte = nuevoElemento;
    }
    else {
        list* aux = lista->sgte;
        while(aux->sgte) {
            aux=aux->sgte;
        }
        aux->sgte = nuevoElemento;
    }

    
    lista->cantElementos++;
}