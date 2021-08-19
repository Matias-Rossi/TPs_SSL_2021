#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* ### LISTA ENLAZADA IDENTIFICADORES ### */
typedef struct Identificador{
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
int identificadorIncrementarSiRegistrado(Identificador* lista, char* cadena);
void nuevoIdentificador(ListaIdentificadores*, char*);
int ordenarIdentificadores(ListaIdentificadores* lista, int criterio(char*, char*));
void swapId(Identificador *a, Identificador *b);
void intercambiarIdentificadores(Identificador* a, Identificador* b);



/* ### LISTA ENLAZADA STRINGS ### */
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
void agregarString(ListaStrings*, char*);
void agregarStringAuxFuncion(ListaStrings*, char*, int (char*));
void agregarStringAux(ListaStrings*, char*, int);
void ordenarStrings(ListaStrings*, int (char*, char*));
void swap(NodoString *, NodoString *);
int ordenarPorLongitud(char*, char*);
int stringYaEstaRegistrado(ListaStrings*, int, char*);



/* ### LISTA ENLAZADA INTs ### */
typedef struct {
    struct NodoInt* pri;
    int cantElementos;
}ListaInt;

typedef struct {
    int valor;
    struct NodoInt* sig;
}NodoInt;

ListaInt* inicializarListaInt(ListaInt*);
void agregarInt(ListaInt* , int);



/* ### LISTA ENLAZADA DOUBLEs ### */
typedef struct {
    struct NodoDouble* pri;
    double cantElementos;
}ListaDouble;

typedef struct {
    double valor;
    struct NodoDouble* sig;
}NodoDouble;

ListaDouble* inicializarListaDouble(ListaDouble*);
void agregarDouble(ListaDouble* , double);



/* ### OTROS ### */
int caracterYaEstaRegistrado(char [], int , char);



/* REPORTE */

void nuevaCategoria(FILE*, char*);
void crearListadoIdentificadores(FILE*, ListaIdentificadores*);
void crearListadoLiteralesCadena(FILE*, ListaStrings*);
void crearListadoPalabrasReservadas(FILE*, ListaStrings*, char*);
void crearListadoCtesInt(FILE*, ListaInt*, int, int*);
void imprimirEnBase(FILE*, int, int);
void crearListadoCtesReales(FILE*, ListaDouble*);
void crearListadoCtesCaracter(FILE*, char [], int);
void crearListadoComentarios(FILE*, ListaStrings*);
void crearListadoOperadoresCtesPuntuacion(FILE*, ListaStrings*);
void crearListadoDirectivas(FILE*, ListaStrings*);
void crearListadoNoReconocidos(FILE*, ListaStrings*);
//Liberación de memoria
void liberarListaIdentificadores(ListaIdentificadores*);
void liberarListaStrings(ListaStrings*);
void liberarListaInt(ListaInt*);
void liberarListaDouble(ListaDouble*);



/* Otros */
int strlenMenosDos(char*);