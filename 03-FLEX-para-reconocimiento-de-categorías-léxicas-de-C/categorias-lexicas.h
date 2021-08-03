#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* ESTRUCTURAS (podría separarse en dos archivos) */


// LISTA ENLAZADA IDENTIFICADORES
typedef struct {
    char* nombre;
    int ocurrencias;
    struct Identificador* sig;
} Identificador;

typedef struct {
    struct Identificador* pri;
    int cantElementos;
} ListaIdentificadores;

ListaIdentificadores* inicializarListaIdentificadores(ListaIdentificadores*);

void agregarIdentificador(ListaIdentificadores*, char*);

int buscarIdentificador(Identificador*, char*);

void nuevoIdentificador(Identificador*, char*);

void ordernarIdentificadores(Identificador**);


// LISTA ENLAZADA STRINGS
typedef struct {
    struct NodoString* pri;
    int cantElementos;
}ListaStrings;
typedef struct nodoString {
    char* str;
    int valor;
    struct NodoString* sig;
}NodoString;

ListaStrings* inicializarListaStrings(ListaStrings* lista);

//todo: Estas tres funciones a continuación seguramente puedan anidarse de alguna manera para no repetir lógica, queda pendiente

void agregarString(ListaStrings*, char*);

void agregarStringAuxFuncion(ListaStrings*, char*, int valorAuxiliar(char*));

void agregarStringAux(ListaStrings*, char*, int );

void ordenarStrings(ListaStrings*, int criterio(char*, char*));
  
void swap(NodoString *, NodoString *);

int ordenarPorLongitud(char*, char* );

// LISTA ENLAZADA INTs       Falta agregar chequeo de NULL para cuando lsita esta vacia, etc

typedef struct {
    struct NodoInt* pri;
    int cantElementos;
}ListaInt;
typedef struct {
    int* valor;
    struct NodoInt* sig;
}NodoInt;

ListaInt* inicializarListaInt(ListaInt* );

void agregarInt(ListaInt* , int* );

int caracterYaEstaRegistrado(char caracteres[], int , char );



/* REPORTE */ //todo: testear, AGREGAR LIBERACIÓN DE MEMORIA

    void nuevaCategoria(FILE* reporte, char* seccion);
    void crearListadoIdentificadores(FILE* reporte, ListaIdentificadores* identificadores);
    void crearListadoLiteralesCadena(FILE* reporte, ListaStrings* cadenas);
    void crearListadoPalabrasReservadas(FILE* reporte, ListaStrings* palabrasReservadas);

//todo: estas 3 funciones repiten lógica
    void crearListadoCtesOctales(FILE* reporte, ListaInt* octales);
    void crearListadoCtesHexadecimales(FILE* reporte, ListaInt* hexadecimales);
    void crearListadoCtesDecimales(FILE* reporte, ListaInt* decimales, int acumuladorDecimal);

//todo: a partir de acá falta adaptar a estructuras de datos con memoria dinámica
    void crearListadoCtesReales(FILE* reporte, double reales[], int realesEncontrados);
    void crearListadoCtesCaracter(FILE* reporte, char caracteres[], int caracteresEncontrados);
    void crearListadoComentarios(FILE* reporte, ListaStrings* comentarios);
    void crearListadoNoReconocidos(FILE* reporte, ListaStrings* noReconocidos);


    /* PEND
    crearListadoOperadoresCtesPuntuacion(); PEND
    crearListadoNoReconocidos(); PEND
    */

/* Otros */

int strlenMenosDos(char* str);