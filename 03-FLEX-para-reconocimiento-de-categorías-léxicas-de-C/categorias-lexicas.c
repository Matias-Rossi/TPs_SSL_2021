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
    int indice = -1;

    if(lista->cantElementos > 0)
    buscarIdentificador(lista->pri, cadena);

    if(indice != -1) {
        Identificador* aux;
        for(int i=0; i<indice; i++){
            aux = aux->sig;
        }
            aux->ocurrencias++;
    }
    else {
        nuevoIdentificador(lista->pri, cadena);
    }
}

int buscarIdentificador(Identificador* lista, char* cadena){
    Identificador* aux = lista;
    int pos = 0;

    while(aux->sig != NULL) {
        if(strcmp(lista->nombre, cadena)){
            return pos;
        } else {
            pos++;
            aux = aux -> sig;
        }
    }
    return -1;
}

void nuevoIdentificador(Identificador* lista, char* cadena) {
    Identificador* ultimo = lista;
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
    //todo: PEND. Ordenar alfabéticamente lista enlazada
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

//todo: Estas tres funciones a continuación seguramente puedan anidarse de alguna manera para no repetir lógica, queda pendiente

void agregarString(ListaStrings* lista, char* str){
    NodoString* nuevo = (NodoString*)malloc(sizeof(NodoString));
    nuevo->str = strdup(str);
    nuevo->sig = NULL;

    if(lista->pri != NULL) {
        NodoString* aux = lista->pri;
        NodoString* ultimo = aux;
        while(ultimo->sig != NULL){
            ultimo->sig = ultimo;
        }
        ultimo->sig = nuevo;
    }
    else
    lista->pri = nuevo;
}

void agregarStringAuxFuncion(ListaStrings* lista, char* str, int valorAuxiliar(char*)){
    NodoString* nuevo = (NodoString*)malloc(sizeof(NodoString));
    nuevo->str = strdup(str);
    nuevo->valor = valorAuxiliar(str);
    nuevo->sig = NULL;

    if(lista->pri != NULL){
        NodoString* ultimo = lista->pri;
        while(ultimo->sig != NULL){
            ultimo->sig = ultimo;
        }
        ultimo->sig = nuevo;
    }
    else
    lista->pri = nuevo;
}

void agregarStringAux(ListaStrings* lista, char* str, int valorAuxiliar){
    NodoString* nuevo = (NodoString*)malloc(sizeof(NodoString));
    nuevo->str = strdup(str);
    nuevo->valor = valorAuxiliar;
    nuevo->sig = NULL;

    if(lista->pri != NULL){
        NodoString* ultimo = lista->pri;
        while(ultimo->sig != NULL){
            ultimo->sig = ultimo;
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

int ordenarPorLongitud(char* a, char* b) {
    return strlen(a) - strlen(b);
}


/* --- Lista enlazada INTs --- */


//TODO: Arreglar esta funcion que es un asco
void agregarInt(ListaInt* lista, int* num){
    if(lista->pri == NULL) {
        NodoInt* nuevoNodo = (NodoInt*)malloc(sizeof(nuevoNodo));
        nuevoNodo->valor = (int*)malloc(sizeof(int));
        nuevoNodo->sig = (NodoInt*)malloc(sizeof(NodoInt));

        lista->pri = nuevoNodo;
    }
    else {
        NodoInt* ultimoNodo = lista->pri;
        while(ultimoNodo->sig != NULL){
            ultimoNodo->sig = ultimoNodo;
        }

        if(ultimoNodo->valor == NULL) {
            int* nuevoValor = (int*)malloc(sizeof(int));
            nuevoValor = num;
            ultimoNodo->valor = nuevoValor;
        }
        else {
            NodoInt* nuevoNodo = (NodoInt*)malloc(sizeof(nuevoNodo));
            nuevoNodo->valor = (int*)malloc(sizeof(int));
            nuevoNodo->sig = (NodoInt*)malloc(sizeof(NodoInt));

            ultimoNodo->sig = nuevoNodo;
        }
    }
}

//constantes caracter, entiendo que se enumeran UNA VEZ segun orden de aparicion. Cambiable fácilmente.

int caracterYaEstaRegistrado(char caracteres[], int length, char caracter) {
    for(int i=0; i<length; i++) {
        if (caracteres[i] == caracter) {
            return 1;
        }
    }
    return 0;
}


//Para los strings uso los NodoString, usando el valor auxiliar int en 0 para indicar comentarios de una linea, y 1 para los de varias


/* --- Creación del reporte --- */

void nuevaCategoria(FILE* reporte, char* seccion){
        fprintf(reporte,"\n--%s--\n", seccion);
    }

    void crearListadoIdentificadores(FILE* reporte, ListaIdentificadores* identificadores){
        if(identificadores->pri != NULL){
            //ordernarIdentificadores(identificadores);
            Identificador* aux = identificadores->pri;

            nuevaCategoria(reporte, "IDENTIFICADORES");
            while(aux->sig != NULL) {
                fprintf(reporte, "%s: %d veces\n" ,aux->nombre, aux->ocurrencias);
                aux = aux->sig;
            }
            fprintf(reporte, "%s: %d veces\n" ,aux->nombre, aux->ocurrencias);
        }
    }

    void crearListadoLiteralesCadena(FILE* reporte, ListaStrings* cadenas){
        if(cadenas->pri != NULL){
            nuevaCategoria(reporte, "LITERALES CADENA");
            ordenarStrings(cadenas, ordenarPorLongitud);

            //Acá y en la funcion crearLsitadoPalabrasReservadas se repite lógica, por el momento dejo así hasta que funcione
            NodoString* aux = cadenas->pri;
            while(aux->sig != NULL) {
                fprintf(reporte, "%s\n", aux->str);
                aux = aux->sig;
            }
            fprintf(reporte, "%s\n", aux->str);
        }
    }

    void crearListadoPalabrasReservadas(FILE* reporte, ListaStrings* palabrasReservadas){
        if(palabrasReservadas->pri != NULL){
            nuevaCategoria(reporte, "PALABRAS RESERVADAS");

            NodoString* aux = palabrasReservadas->pri;
            while(aux->sig != NULL) {
                fprintf(reporte, "%s\n", aux->str);
                aux = aux->sig;
            }
            fprintf(reporte, "%s\n", aux->str);
        }
    }

//todo: estas 3 funciones repiten lógica
    void crearListadoCtesOctales(FILE* reporte, ListaInt* octales){
        if(octales->pri != NULL){
            nuevaCategoria(reporte, "CONSTANTES OCTALES");

            NodoInt* aux = octales->pri;
            while(aux->sig != NULL) {
                fprintf(reporte, "%s\n", aux->valor);
                aux = aux->sig;
            }
            fprintf(reporte, "%s\n", aux->valor);
        }
    }

    void crearListadoCtesHexadecimales(FILE* reporte, ListaInt* hexadecimales){
        if(hexadecimales->pri != NULL){
            nuevaCategoria(reporte, "CONSTANTES HEXADECIMALES");

            NodoInt* aux = hexadecimales->pri;
            while(aux->sig != NULL) {
                fprintf(reporte, "%s\n", aux->valor);
                aux = aux->sig;
            }
            fprintf(reporte, "%s\n", aux->valor);
        }
    }

    void crearListadoCtesDecimales(FILE* reporte, ListaInt* decimales, int acumuladorDecimal){
        if(decimales->pri != NULL){
            nuevaCategoria(reporte, "CONSTANTES DECIMALES");

            NodoInt* aux = decimales->pri;
            while(aux->sig != NULL) {
                fprintf(reporte, "%s\n", aux->valor);
                aux = aux->sig;
            }
            fprintf(reporte, "%s\n", aux->valor);
        }
        fprintf(reporte, "La suma de todas las constantes decimales es %d", acumuladorDecimal);
    }

//todo: a partir de acá falta adaptar a estructuras de datos con memoria dinámica

    void crearListadoCtesReales(FILE* reporte, double reales[], int realesEncontrados){
        if(realesEncontrados){
            nuevaCategoria(reporte, "CONSTANTES decimales");
            for(int i=0; i<realesEncontrados; i++){
                int parteEntera = (int)reales[i];
                double mantisa = reales[i] - parteEntera;
                fprintf(reporte, "Mantisa: %f // Parte entera: %d", mantisa, parteEntera);
            }
        }
    }

    void crearListadoCtesCaracter(FILE* reporte, char caracteres[], int caracteresEncontrados){
        if(caracteresEncontrados){
            nuevaCategoria(reporte, "CONSTANTES CARACTER");
            for(int i=0; i<caracteresEncontrados; i++){
                fprintf(reporte, "%c\n", caracteres[i]);
            }
        }
    }

    void crearListadoComentarios(FILE* reporte, ListaStrings* comentarios){
        if(comentarios->pri != NULL){
            nuevaCategoria(reporte, "COMENTARIOS");
            NodoString* aux = comentarios->pri;

            while(aux->sig != NULL) {
                if(aux->valor == 0) {
                    fprintf(reporte, "Comentario de una linea: ");
                } else {
                    fprintf(reporte, "Comentario de multiples lineas: ");
                }
                fprintf(reporte, aux->str);
                aux = aux->sig;
            }
            if(aux->valor == 0) {
                fprintf(reporte, "Comentario de una linea: ");
            } else {
                fprintf(reporte, "Comentario de multiples lineas: ");
            }
            fprintf(reporte, aux->str);
        }
    }

    /* PEND
    crearListadoOperadoresCtesPuntuacion(); PEND
    crearListadoNoReconocidos(); PEND
    */

/* Otros */

int strlenMenosDos(char* str) {
    return strlen(str) - 2;
}