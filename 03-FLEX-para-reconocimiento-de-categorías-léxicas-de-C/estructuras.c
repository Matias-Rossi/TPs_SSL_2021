#include "categorias-lexicas.h"

/* --- Lista enlazada IDENTIFICADORES --- */
ListaIdentificadores* inicializarListaIdentificadores(ListaIdentificadores* lista){
    lista = (ListaIdentificadores*)malloc(sizeof(ListaIdentificadores));
    lista->cantElementos = (int)malloc(sizeof(int));
    lista->cantElementos = 0;
    lista->pri = NULL;

    return lista;
}

void agregarIdentificador(ListaIdentificadores* lista, char* cadena){
    int yaRegistrado = 0;

    if(lista->cantElementos > 0)
    yaRegistrado = identificadorIncrementarSiRegistrado(lista->pri, cadena);

    if(yaRegistrado == 0) {
        nuevoIdentificador(lista, cadena);
        lista->cantElementos++;
    }
}

//Se fija si ya esta el identificador en la lista enlazada. Si está, incrementa en 1 las ocurrencias y retorna 1. Si no, retorna 0.
int identificadorIncrementarSiRegistrado(Identificador* lista, char* cadena){
    Identificador* aux = lista;

    while(aux->sig != NULL) {
        //printf("\nCoinciden \"%s\" y \"%s\"?", cadena, aux->nombre);
        if(!strcmp(aux->nombre, cadena)){
            //printf("Si\n\n");
            aux->ocurrencias = aux->ocurrencias + 1;
            return 1;
        } else {
            aux = aux -> sig;
        }
    }
    if(!strcmp(aux->nombre, cadena)){
        //printf("Si\n\n");
        aux->ocurrencias = aux->ocurrencias + 1;
        return 1;
    } else {
        aux = aux -> sig;
    }
    return 0;
}

void nuevoIdentificador(ListaIdentificadores* lista, char* cadena) {

    Identificador* nuevo = malloc(sizeof(Identificador));
    nuevo->nombre = malloc(strlen(cadena)*sizeof(char));
    strcpy(nuevo->nombre, cadena);
    nuevo->sig = NULL;
    nuevo->ocurrencias = 1;

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

    lista->cantElementos++;
}

void ordenarIdentificadores(ListaIdentificadores* lista, int criterio(char*, char*))
{
    printf("Ordenando\n");
    struct Identificador* inicio = lista->pri;
    int swapped, i;
    struct Identificador* ptr1 = inicio;
    struct Identificador* lptr = NULL;
  
    if (inicio == NULL)
        return;
  
    do
    {
        swapped = 0;
        ptr1 = inicio;
  
        while (ptr1->sig != lptr)
        {
            if (criterio(ptr1->nombre, ptr1->sig->nombre) > 0)    //Ver si no va alrevés
            { 
                swapId(ptr1, ptr1->sig);
                swapped = 1;
            }
            ptr1 = ptr1->sig;
        }
        lptr = ptr1;
    }
    while (swapped);
}
  
void swapId(Identificador *a, Identificador *b)
{
    printf("Reordenando...\n");
    char* temp = a;
    a = b;
    b = temp;
}

int ordenarAlfabeticamente(char* a, char* b) {
    return (!strcmp(a,b) > 0)? 1 : -1;
}



/* --- Lista enlazada STRINGS --- */

struct NodoString {
    char* str;
    int valor;
    struct NodoString* sig;
};

ListaStrings* inicializarListaStrings(ListaStrings* lista) {
    lista = (ListaStrings*)malloc(sizeof(ListaStrings));
    lista->cantElementos = (int)malloc(sizeof(int));
    lista->pri = NULL;
    lista->cantElementos = 0;

    return lista;
}

//todo: Estas tres funciones a continuación quizás puedan anidarse de alguna manera para no repetir lógica, queda pendiente

void agregarString(ListaStrings* lista, char* str){
    agregarStringAux(lista, str, 0);
    /*
    NodoString* nuevo = (NodoString*)malloc(sizeof(NodoString));
    nuevo->str = strdup(str);
    nuevo->sig = NULL;

    if(lista->pri != NULL) {
        NodoString* ultimo = lista->pri;

        //No sale de este bucle
        while(ultimo->sig != NULL){
            ultimo = ultimo->sig;
            //printf("Direccion: %p -> %p\n",ultimo, ultimo->sig);
        }
        ultimo->sig = nuevo;

    }
    else{
    lista->pri = nuevo;
    }
    */
}

void agregarStringAuxFuncion(ListaStrings* lista, char* str, int valorAuxiliar(char*)){
    agregarStringAux(lista, str, valorAuxiliar(str));
    /*
    NodoString* nuevo = (NodoString*)malloc(sizeof(NodoString));
    nuevo->str = strdup(str);
    nuevo->valor = valorAuxiliar(str);
    nuevo->sig = NULL;

    if(lista->pri != NULL){
        NodoString* ultimo = lista->pri;
        while(ultimo->sig != NULL){
            ultimo = ultimo->sig;
        }
        ultimo->sig = nuevo;
    }
    else
    lista->pri = nuevo;
    */
}

void agregarStringAux(ListaStrings* lista, char* str, int valorAuxiliar){
    NodoString* nuevo = (NodoString*)malloc(sizeof(NodoString));
    nuevo->str = strdup(str);
    nuevo->valor = valorAuxiliar;
    nuevo->sig = NULL;

    if(lista->pri != NULL){
        NodoString* ultimo = lista->pri;
        while(ultimo->sig != NULL){
            ultimo = ultimo->sig;
        }
        ultimo->sig = nuevo;
    }
    else 
    lista->pri = nuevo;
}


void ordenarStrings(ListaStrings* lista, int criterio(char*, char*))
{
    NodoString* inicio = lista->pri;
    int swapped, i;
    NodoString *ptr1 = inicio;
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
                swapStr(ptr1, ptr1->sig);
                swapped = 1;
            }
            ptr1 = ptr1->sig;
        }
        lptr = ptr1;
    }
    while (swapped);
}
  
void swapStr(NodoString *a, NodoString *b)
{
    char* temp = a->str;
    a->str = b->str;
    b->str = temp;
}

int ordenarPorLongitud(char* a, char* b) {
    return strlen(a) - strlen(b);
}

//Se fija si ya esta el string en la lista enlazada. Si está, incrementa en 1 el valor auxiliar y retorna 1. Si no, retorna 0.
int stringIncrementarSiRegistrado(ListaStrings* lista, int length, char* str){
    if(lista->pri) {
        NodoString* aux = lista->pri;
        for(int i=0; i<length; i++) {
            if(!strcmp(aux->str, str)) {
                aux->valor = aux->valor + 1;
                return 1;
            }
            else {
                aux = aux->sig;
            }
        }
    }
    return 0;
}


/* --- Lista enlazada INTs --- */

ListaInt* inicializarListaInt(ListaInt* lista){
    lista = (ListaInt*)malloc(sizeof(ListaInt));
    lista->cantElementos = (int)malloc(sizeof(int));
    lista->cantElementos = 0;
    lista->pri = NULL;

    return lista;
}

void agregarInt(ListaInt* lista, int num){
    NodoInt* nuevo = malloc(sizeof(NodoInt));
    nuevo->valor = malloc(sizeof(int));
    nuevo->valor = num;
    nuevo->sig = NULL;

    if(lista->pri != NULL) {
        NodoInt* ultimo = lista->pri;

        while(ultimo->sig != NULL){
            ultimo = ultimo->sig;
        }
        ultimo->sig = nuevo;

    }
    else{
        lista->pri = nuevo;
    }

    lista->cantElementos++;
}


/* --- Lista enlazada DOUBLE --- */

ListaDouble* inicializarListaDouble(ListaDouble* lista){
    lista = (ListaDouble*)malloc(sizeof(ListaDouble));
    lista->cantElementos = 0;
    lista->pri = NULL;

    return lista;
}

void agregarDouble(ListaDouble* lista, double num){
    NodoDouble* nuevo = malloc(sizeof(NodoDouble));
    nuevo->valor = num;
    nuevo->sig = NULL;

    if(lista->pri != NULL) {
        NodoDouble* ultimo = lista->pri;

        while(ultimo->sig != NULL){
            ultimo = ultimo->sig;
        }
        ultimo->sig = nuevo;

    }
    else{
        lista->pri = nuevo;
    }
}


//CONSTANTES CARACTER, entiendo que se enumeran UNA VEZ segun orden de aparicion. Cambiable fácilmente.

int caracterYaEstaRegistrado(char caracteres[], int length, char caracter) {
    for(int i=0; i<length; i++) {
        if (caracteres[i] == caracter) {
            return 1;
        }
    }
    return 0;
}


//Para los strings uso los NodoString, usando el valor auxiliar int en 0 para indicar comentarios de una linea, y 1 para los de varias



/* Otros */

int strlenMenosDos(char* str) {
    return strlen(str) - 2;
}