#include"tp4.h"

/* --- Lista enlazada IDENTIFICADORES --- */
ListaIdentificadores* inicializarListaIdentificadores(ListaIdentificadores* lista){
    lista = (ListaIdentificadores*)malloc(sizeof(ListaIdentificadores));
    lista->cantElementos = 0;
    lista->pri = NULL;
    return lista;
}

void agregarIdentificador(ListaIdentificadores* lista, char* cadena, char* tDato){

    Identificador* nuevo = malloc(sizeof(Identificador));
    nuevo->nombre = malloc(strlen(cadena)*sizeof(char));
    strcpy(nuevo->nombre, cadena);
    nuevo->sig = NULL;
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

    
    lista->cantElementos++;
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
    char* auxNombre = a->nombre;
    a->nombre = b->nombre;
    b->nombre = auxNombre;

}

void liberarListaIdentificadores(ListaIdentificadores* lista){
    //Lista vacía
    if(lista->pri == NULL) {    
        free(lista);

    //Lista con elementos
    } else {                    
        Identificador* borrador = lista->pri;
        Identificador* siguiente;

        //Minetras haya más elementos
        while(borrador->sig) {  
            siguiente = borrador->sig;
            free(borrador->nombre);
            free(borrador);
            borrador = siguiente;
        }
        //Para el último elemento
        siguiente = borrador->sig;
        free(borrador->nombre);
        free(borrador);
    }
}


ListaSentencias* inicializarListaSentencias(ListaSentencias* lista) {
    lista = (ListaSentencias*)malloc(sizeof(ListaSentencias));
    lista->cantElementos = 0;
    lista->pri = NULL;
    return lista;
}

void agregar_sentencia(ListaSentencias* lista, char* tSentencia, int linea){
    Sentencia* nuevo = (Sentencia*) malloc(sizeof(Sentencia));
    nuevo->tipo = tSentencia;
    nuevo->linea = linea;
    nuevo->sig = NULL;

    if(lista->pri != NULL){
        Sentencia* ultimo = lista->pri;
        while(ultimo->sig != NULL){
            ultimo = ultimo->sig;
        }
        ultimo->sig = nuevo;
    }
    else 
    lista->pri = nuevo;

    lista->cantElementos++;
}