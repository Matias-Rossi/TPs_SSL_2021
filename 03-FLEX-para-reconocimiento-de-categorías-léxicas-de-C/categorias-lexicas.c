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

//todo: esta funcion rompe
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
    //todo: no funciona
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

//todo: Estas tres funciones a continuación seguramente puedan anidarse de alguna manera para no repetir lógica, queda pendiente

void agregarString(ListaStrings* lista, char* str){
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
}

void agregarStringAuxFuncion(ListaStrings* lista, char* str, int valorAuxiliar(char*)){
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


//TODO: Arreglar esta funcion que es un asco. encima no anda
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
        fprintf(reporte,"\n\n--%s--\n", seccion);
    }

    void crearListadoIdentificadores(FILE* reporte, ListaIdentificadores* identificadores){
        if(identificadores->pri != NULL){
            ordenarIdentificadores(identificadores, ordenarAlfabeticamente);
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
                fprintf(reporte, "%d\n", aux->valor);
                aux = aux->sig;
            }
            fprintf(reporte, "%d\n", aux->valor);
        }
    }

    void crearListadoCtesHexadecimales(FILE* reporte, ListaInt* hexadecimales){
        if(hexadecimales->pri != NULL){
            nuevaCategoria(reporte, "CONSTANTES HEXADECIMALES");

            NodoInt* aux = hexadecimales->pri;
            while(aux->sig != NULL) {
                fprintf(reporte, "%d\n", aux->valor);
                aux = aux->sig;
            }
            fprintf(reporte, "%d\n", aux->valor);
        }
    }

    void crearListadoCtesDecimales(FILE* reporte, ListaInt* decimales, int acumuladorDecimal){
        if(decimales->pri != NULL){
            nuevaCategoria(reporte, "CONSTANTES DECIMALES");

            NodoInt* aux = decimales->pri;
            while(aux->sig != NULL) {
                fprintf(reporte, "%d\n", aux->valor);
                aux = aux->sig;
            }
            fprintf(reporte, "%d\n", aux->valor);
            fprintf(reporte, "La suma de todas las constantes decimales es %d", acumuladorDecimal);
        }
    }

//todo: a partir de acá falta adaptar a estructuras de datos con memoria dinámica

    void crearListadoCtesReales(FILE* reporte, double reales[], int realesEncontrados){
        if(realesEncontrados){
            nuevaCategoria(reporte, "CONSTANTES DECIMALES");
            for(int i=0; i<realesEncontrados; i++){
                int parteEntera = (int)reales[i];
                double mantisa = reales[i] - parteEntera;
                fprintf(reporte, "Mantisa: %f // Parte entera: %d\n", mantisa, parteEntera);
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
                fprintf(reporte, "%s", aux->str);
                aux = aux->sig;
            }
            if(aux->valor == 0) {
                fprintf(reporte, "Comentario de una linea: ");
            } else {
                fprintf(reporte, "Comentario de multiples lineas: ");
            }
            fprintf(reporte, "%s", aux->str);
        }
    }

    void crearListadoOperadoresCtesPuntuacion(FILE* reporte, ListaStrings* lista) {
        if(lista->pri != NULL) {
            nuevaCategoria(reporte, "OPERADORES / CARACTERES DE PUNTUACION");
            NodoString* aux = lista->pri;

            while(aux->sig != NULL) {
                fprintf(reporte, "%s aparece %d veces\n", aux->str, aux->valor);
                aux = aux->sig;
            }
            fprintf(reporte, "%s aparece %d veces\n", aux->str, aux->valor);
        }
    }
    
    
    void crearListadoNoReconocidos(FILE* reporte, ListaStrings* noReconocidos){
       if(noReconocidos->pri != NULL) {
            nuevaCategoria(reporte, "TOKENS NO RECONOCIDOS");
            NodoString* aux = noReconocidos->pri;

            while(aux->sig != NULL) {
                fprintf(reporte, "Token no reconocido en linea %d: \t%s\n", aux->valor, aux->str);
                aux = aux->sig;
            }
            fprintf(reporte, "Token no reconocido en linea %d: \t%s\n", aux->valor, aux->str);

       }
   }

/* Otros */

int strlenMenosDos(char* str) {
    return strlen(str) - 2;
}