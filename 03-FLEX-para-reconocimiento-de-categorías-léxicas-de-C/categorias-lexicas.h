#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// LISTA ENLAZADA IDENTIFICADORES

typedef struct {
    char* nombre;
    int ocurrencias;
    Identificador* sig;
} Identificador;

void agregarIdentificador(Identificador** lista, char* cadena){
    int indice = buscarIdentificador(lista, cadena);

    if(indice != -1) {
        lista[indice]->ocurrencias++;
    }
    else {
        nuevoIdentificador(lista, cadena);
    }
}

int buscarIdentificador(Identificador** lista, char* cadena){
    Identificador* first = lista[0];
    int pos = 0;

    while(first->sig != NULL) {
        if(strcmp(lista[pos]->nombre, cadena)){
            return pos;
        } else {
            pos++;
        }
    }
    return -1;
}

void nuevoIdentificador(Identificador** lista, char* cadena) {
    Identificador* ultimo = lista[0];
    while(ultimo->sig != NULL){
        ultimo = ultimo->sig;
    }

    Identificador* nuevo = (Identificador*)malloc(sizeof(Identificador));  //casteo (?????????
    strcpy(nuevo->nombre, cadena);
    nuevo->ocurrencias = 1;
    nuevo->sig = NULL;

    ultimo->sig = nuevo;
}

void ordernarIdentificadores(Identificador** lista) {
    //PEND. Ordenar alfabéticamente lista enlazada
}


// LISTA ENLAZADA STRINGS
typedef struct {
    char* str;
    int valor;
    NodoString* sig;
}NodoString;

void agregarString(NodoString* lista, char* str){
    NodoString* ultimo = lista;
    while(ultimo->sig != NULL){
        ultimo->sig = ultimo;
    }

    NodoString* nuevo = (NodoString*)malloc(sizeof(NodoString));
    nuevo->str = strdup(str);
    nuevo->sig = NULL;

    ultimo->sig = nuevo;
}

void agregarString(NodoString* lista, char* str, int valorAuxiliar(char*)){
    NodoString* ultimo = lista;
    while(ultimo->sig != NULL){
        ultimo->sig = ultimo;
    }

    NodoString* nuevo = (NodoString*)malloc(sizeof(NodoString));
    nuevo->str = strdup(str);
    nuevo->valor = valorAuxiliar(str);
    nuevo->sig = NULL;

    ultimo->sig = nuevo;
}


void ordenarStrings(NodoString* lista, int criterio(char*, char*)) {
    NodoString* aux = lista;
    int longLista = 0;

    while(aux->sig != NULL){
        aux->sig = aux;
        longLista++;
    }

    for(int i=0; i < longLista; i++){
        for(int j=0; j < longLista; j++){
            
        }
    }
}

void bubbleSort(NodoString *inicio, int criterio(char*, char*))
{
    int swapped, i;
    NodoString *ptr1;
    NodoString *lptr = NULL;
  
    if (inicio == NULL)
        return;
  
    do
    {
        swapped = 0;
        ptr1 = inicio;
  
        while (ptr1->sig != lptr)
        {
            if (criterio(ptr1->str, ptr1->sig->str) > 0)    //Ver si no va alrevés
            { 
                swap(ptr1, ptr1->sig);
                swapped = 1;
            }
            ptr1 = ptr1->sig;
        }
        lptr = ptr1;
    }
    while (swapped);
}
  
void swap(NodoString *a, NodoString *b)
{
    char* temp = a->str;
    a->str = b->str;
    b->str = temp;
}

//
