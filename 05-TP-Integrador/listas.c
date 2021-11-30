#include"tp5.h"

/* --- Lista enlazada IDENTIFICADORES --- */

ListaIdentificadores* inicializarListaIdentificadores(ListaIdentificadores* lista){
    lista = (ListaIdentificadores*)malloc(sizeof(ListaIdentificadores));
    lista->cantElementos = 0;
    lista->pri = NULL;
    return lista;
}

int identificadorYaExiste(ListaIdentificadores* lista, char* identificador){
    Identificador* aux = lista->pri;
    //if(aux) printf("Primer nodo %p, tipo: %s, nombre %s\n", aux, aux->tipo, aux->nombre);
    while(aux){
        //printf("aux->nombre: %s\n", aux->nombre);
        if(strcmp(aux->nombre, identificador) == 0){
            char* errorMsg = (char*)calloc(sizeof(char), 70);
            sprintf(errorMsg, "[ERROR-Semántico] Línea %d: La variable %s ya ha sido declarada\n", yylineno, identificador);
            agregarError(erroresSemanticos, errorMsg);
            return 1;
        }
        aux = aux->sig;
    }
    return 0;
}

void agregarIdentificador(ListaIdentificadores* lista, char* cadena, char* tDato){
    //printf("[LOG] %d Agregando variable %s de tipo %s a la lista\n", yylineno, cadena, tDato);

    Identificador* nuevo = malloc(sizeof(Identificador));
    nuevo->nombre = malloc(strlen(cadena)*sizeof(char)+1);
    strcpy(nuevo->nombre, sacarEspacios(cadena));
    //printf("nuevo->nombre: %s\n", nuevo->nombre);
    
    nuevo->tipo = malloc(strlen(tDato)*sizeof(char)+1);
    strcpy(nuevo->tipo, sacarEspacios(tDato));
    //printf("nuevo->tipo: >%s<\n", nuevo->tipo);
    
    nuevo->sig = NULL;

    //Lo posiciona al final de la lista
    if(!lista->pri){
        lista->pri = nuevo;
        //printf("EL IDENTIFICADOR NUEVO ES: %s\n",lista->pri->nombre);
    }
    else {
        Identificador* aux = lista->pri;
        //printf("Intentando acceder a aux(%p)\n", aux);
        //printf("Intentando acceder a aux->sig(%p)\n", aux->sig);
        while(aux->sig != NULL) {
            aux=aux->sig;
        }
        aux->sig = nuevo;
        //printf("EL IDENTIFICADOR AGREGADO ES: %s\n",aux->sig->nombre);
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

ListaIdentificadores* trasladarListaIdentificadores(ListaIdentificadores* listaOriginal) {
    //Copia a nueva
    ListaIdentificadores* listaNueva = inicializarListaIdentificadores(listaNueva);
    Identificador* aux = listaOriginal->pri;

    while(aux) {
        agregarIdentificador(listaNueva, aux->nombre, aux->tipo);
        aux = aux->sig;
    }

    //Limpieza original
    //liberarListaIdentificadores(listaOriginal);
    //listaOriginal = inicializarListaIdentificadores(listaOriginal);

    return listaNueva;
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

        lista->pri = NULL;
        free(lista);
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

char* obtenerTipoDesdeLista(ListaIdentificadores* lista, char* identificador){
    //("Buscando tipo del identificador >%s<\n", identificador);
    Identificador* aux = lista->pri;
    while(aux != NULL){
        //printf("Comparando con variable \"%s\" con tipo \"%s\"\n", aux->nombre, aux->tipo);
        if(strcmp(aux->nombre, identificador) == 0){
            //printf("Estoy retornando el tipo %s\n",aux->tipo);
            return aux->tipo;
        }
        aux = aux->sig;
    }
    //printf("[ERROR] La variable %s no ha sido declarada\n", identificador);   
    return NULL;
}

char* obtenerElementoTipoPosicion(ListaIdentificadores* lista, int posicion){
    Identificador* aux = lista->pri;
    for(int i=0; i<posicion; i++){
        aux = aux->sig;
    }

    return aux->tipo;
}