#define INT 1
#define CHAR 2
#define LONG 3
#define DOUBLE 4
#define SHORT 5
#define SIGNED 6
#define UNSIGNED 7
#define ENUM 8
#define VOID 9

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Identificador{
    char* nombre;
    int ocurrencias;
    int tipo;
    struct Identificador* sig;
} Identificador;

typedef struct {
    struct Identificador* pri;
    int cantElementos;
} ListaIdentificadores;

//listas.c
ListaIdentificadores* inicializarListaIdentificadores      (ListaIdentificadores*);
void                  agregarIdentificador                 (ListaIdentificadores*, char*, int);
int                   identificadorIncrementarSiRegistrado (Identificador* lista, char*);
void                  nuevoIdentificador                   (ListaIdentificadores*, char*, int);
int                   ordenarIdentificadores               (ListaIdentificadores*, int criterio(char*, char*));
void                  swapId                               (Identificador*, Identificador*);
void                  intercambiarIdentificadores          (Identificador*, Identificador*);

//reporte.c
void nuevaCategoria              (FILE*, char*);
void crearListadoIdentificadores (FILE*, ListaIdentificadores*);

ListaIdentificadores* identificadores_variables;
ListaIdentificadores* identificadores_funciones;
char*                 aux_tIdentificador;