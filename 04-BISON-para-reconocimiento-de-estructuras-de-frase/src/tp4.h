enum tipo {Int = 1, Char = 2, Long = 3, Double = 4, Short = 5, Signed = 6, Unsigned = 7, Enum = 8, Void = 9, Float = 10};

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
void                  agregarIdentificador                 (ListaIdentificadores*, char*, char*);
int                   identificadorIncrementarSiRegistrado (Identificador* lista, char*);
void                  nuevoIdentificador                   (ListaIdentificadores*, char*, char*);
int                   ordenarIdentificadores               (ListaIdentificadores*, int criterio(char*, char*));
void                  swapId                               (Identificador*, Identificador*);
void                  intercambiarIdentificadores          (Identificador*, Identificador*);
void                  liberarListaIdentificadores          (ListaIdentificadores*);

//reporte.c
void nuevaCategoria              (FILE*, char*);
void crearListadoIdentificadores (FILE*, ListaIdentificadores*);
char* tDatoItoC(int);

ListaIdentificadores* identificadores_variables;
ListaIdentificadores* identificadores_funciones;
char*                 aux_tIdentificador;