#include"tp4.h"

/* --- Lista enlazada IDENTIFICADORES --- */
ListaIdentificadores* inicializarListaIdentificadores(ListaIdentificadores* lista){
    lista = (ListaIdentificadores*)malloc(sizeof(ListaIdentificadores));
    lista->cantElementos = (int)malloc(sizeof(int)); //Esto para que??
    lista->cantElementos = 0;
    lista->pri = NULL;

    return lista;
}

void agregarIdentificador(ListaIdentificadores* lista, char* cadena, int tDato){
    int yaRegistrado = 0;

    if(lista->cantElementos > 0)
        yaRegistrado = identificadorIncrementarSiRegistrado(lista->pri, cadena);

    if(yaRegistrado == 0) {
        nuevoIdentificador(lista, cadena, tDato);
        lista->cantElementos++;
    }
}

//Se fija si ya esta el identificador en la lista enlazada. Si está, incrementa en 1 las ocurrencias y retorna 1. Si no, retorna 0.
int identificadorIncrementarSiRegistrado(Identificador* lista, char* cadena){
    Identificador* aux = lista;

    while(aux->sig != NULL) {
        if(!strcmp(aux->nombre, cadena)){
            aux->ocurrencias = aux->ocurrencias + 1;
            return 1;
        } else {
            aux = aux -> sig;
        }
    }
    if(!strcmp(aux->nombre, cadena)){
        aux->ocurrencias = aux->ocurrencias + 1;
        return 1;
    } else {
        aux = aux -> sig;
    }
    return 0;
}

void nuevoIdentificador(ListaIdentificadores* lista, char* cadena, int tDato){
    //Crea el identificador (nodo)
    Identificador* nuevo = malloc(sizeof(Identificador));
    nuevo->nombre = malloc(strlen(cadena)*sizeof(char));
    strcpy(nuevo->nombre, cadena);
    nuevo->sig = NULL;
    nuevo->ocurrencias = 1;
    nuevo->tipo = tDato;

    //Lo posiciona al final de la lista
    if(!lista->pri){
        lista->pri = nuevo;
    }
    else {
        Identificador* aux = lista->pri;
        while(aux->sig) {
            aux=aux->sig;
        }
        aux->sig = nuevo;
    }
}


int ordenarIdentificadores(ListaIdentificadores* lista, int criterio(char*, char*)) {
    Identificador* aux1 = lista->pri;
    Identificador* aux2 = aux1->sig;

    for(int i=0; i<lista->cantElementos; i++){
        for(int j=0; j<lista->cantElementos && aux1->sig; j++){
            if(criterio(aux1->nombre, aux2->nombre) > 0) {
                intercambiarIdentificadores(aux1, aux2);
            }
            aux1 = aux1->sig;
            aux2 = aux2->sig;
            
        }
        aux1 = lista->pri;
        aux2 = aux1->sig;

    }
}

void intercambiarIdentificadores(Identificador* a, Identificador* b) {
    int auxOcurrencias = a->ocurrencias;
    char* auxNombre = a->nombre;

    a->ocurrencias = b->ocurrencias;
    a->nombre = b->nombre;

    b->ocurrencias = auxOcurrencias;
    b->nombre = auxNombre;

}