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

void nuevoIdentificador(ListaIdentificadores* lista, char* cadena) {
    //Crea el identificador (nodo)
    Identificador* nuevo = malloc(sizeof(Identificador));
    nuevo->nombre = malloc(strlen(cadena)*sizeof(char));
    strcpy(nuevo->nombre, cadena);
    nuevo->sig = NULL;
    nuevo->ocurrencias = 1;

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

//Funcion modificada de https://stackoverflow.com/questions/43569069/how-to-linked-list-pointer-sorting
int ordenarIdentificadores(ListaIdentificadores* lista, int criterio(char*, char*)) {
    Identificador *pTail = lista->pri;
    while(pTail->sig) {
        pTail = pTail->sig;
    }

    Identificador *pHead;                    /* ptr to first node */
    Identificador *pEnd;                     /* ptr to end of unsorted part of list */
    Identificador *pnEnd;                    /* pEnd for next pass */
    Identificador *pNext;                    /* ptr to next node */
    Identificador **ppCurr;                  /* ptr to ptr to curr node */
    if(lista->pri == NULL || lista->pri->sig == NULL) /* if empty list or single node */
        return 0;           /*  return pTail */
    pHead = lista->pri;
    pEnd  = NULL;  /* change to normal list */
    do{
        ppCurr = &pHead;        /* set ppCurr to start of list */
        pnEnd = pHead->sig;    /* set pnEnd to 2nd node */
        while((pNext = (*ppCurr)->sig) != pEnd){
            if(ordenarAlfabeticamente((*ppCurr)->nombre, pNext->nombre) > 0){ /* if out of order swap */
                (*ppCurr)->sig = pNext->sig;
                pnEnd = pNext->sig = *ppCurr;
                *ppCurr = pNext;
            }
            ppCurr = &(*ppCurr)->sig; /* advance to next node */
        }
        if(pEnd == NULL)        /* if first time, set pTail */
            pTail = *ppCurr;    /*  in case last two nodes swapped */
        pEnd = pnEnd;           /* update pEnd since rest of list is sorted */
    }while(pEnd != pHead->sig); /* loop until pEnd => 2nd node */

    return pTail;
}

int ordenarAlfabeticamente(char* a, char* b) {
    return (strcmp(a,b) > 0)? 1 : -1;
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

void agregarString(ListaStrings* lista, char* str){
    agregarStringAux(lista, str, 0);
}

//Agrega un String a la lista enlazada, cuyo valor auxiliar está determinado por la función pasada como parámetro
void agregarStringAuxFuncion(ListaStrings* lista, char* str, int valorAuxiliar(char*)){
    agregarStringAux(lista, str, valorAuxiliar(str));
}

//Agrega un String a la lista enlazada, cuyo valor auxiliar es asignado directamente como es pasado
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

    lista->cantElementos++;
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

    lista->cantElementos++;
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
    return strlen(str) - 2;         //(-2).strlen :P
}