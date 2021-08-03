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
void ordenarIdentificadores(ListaIdentificadores* lista, int criterio(char*, char*));
void swapId(Identificador *a, Identificador *b);
int ordenarAlfabeticamente(char* a, char* b);



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
//todo: Estas tres funciones a continuación quizás puedan anidarse de alguna manera para no repetir lógica, queda pendiente
void agregarString(ListaStrings*, char*);
void agregarStringAuxFuncion(ListaStrings*, char*, int (char*));
void agregarStringAux(ListaStrings*, char*, int );
//
void ordenarStrings(ListaStrings*, int (char*, char*));
void swap(NodoString *, NodoString *);
int ordenarPorLongitud(char*, char* );
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

    void nuevaCategoria(FILE* reporte, char* seccion);
    void crearListadoIdentificadores(FILE* reporte, ListaIdentificadores* identificadores);
    void crearListadoLiteralesCadena(FILE* reporte, ListaStrings* cadenas);
    void crearListadoPalabrasReservadas(FILE* reporte, ListaStrings* palabrasReservadas);

    //todo: estas 3 funciones repiten lógica
    void crearListadoCtesOctales(FILE* reporte, ListaInt* octales);
    void crearListadoCtesHexadecimales(FILE* reporte, ListaInt* hexadecimales);
    void crearListadoCtesDecimales(FILE* reporte, ListaInt* decimales, int acumuladorDecimal);

    //todo: a partir de acá falta adaptar a estructuras de datos con memoria dinámica
    void crearListadoCtesReales(FILE* reporte, ListaDouble* reales);
    void crearListadoCtesCaracter(FILE* reporte, char caracteres[], int caracteresEncontrados);

    void crearListadoComentarios(FILE* reporte, ListaStrings* comentarios);
    void crearListadoOperadoresCtesPuntuacion(FILE* reporte, ListaStrings* lista);
    void crearListadoNoReconocidos(FILE* reporte, ListaStrings* noReconocidos);

    //Liberación de memoria
    void liberarListaIdentificadores(ListaIdentificadores*);
    void liberarListaStrings(ListaStrings*);
    void liberarListaInt(ListaInt*);
    void liberarListaDouble(ListaDouble* );



/* Otros */

int strlenMenosDos(char*);