#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int yylineno;
int yyerror(const char *msg);

typedef struct Identificador{
    char* nombre;
    char* tipo;
    struct Identificador* sig;
} Identificador;

typedef struct {
    struct Identificador* pri;
    int cantElementos;
} ListaIdentificadores;

typedef struct Sentencia{
    char* tipo;
    int linea;
    struct Sentencia* sig;
} Sentencia;

typedef struct {
    Sentencia* pri;
    int cantElementos;
} ListaSentencias;

//listas.c
ListaIdentificadores* inicializarListaIdentificadores      (ListaIdentificadores*);
void                  agregarIdentificador                 (ListaIdentificadores*, char*, char*);
int                   ordenarIdentificadores               (ListaIdentificadores*, int criterio(char*, char*));
void                  swapId                               (Identificador*, Identificador*);
void                  intercambiarIdentificadores          (Identificador*, Identificador*);
void                  liberarListaIdentificadores          (ListaIdentificadores*);
ListaSentencias*      inicializarListaSentencias           (ListaSentencias*);
void                  agregar_sentencia                    (ListaSentencias*, char*, int);

//reporte.c
void  nuevaCategoria              (FILE*, char*);
void  crearListadoIdentificadores (FILE*, ListaIdentificadores*, char*);
void  crearListadoSentencias(FILE*, ListaSentencias*, char*);
char* sacar_ultimo_caracter(char*);

ListaIdentificadores* identificadores_variables;
ListaIdentificadores* identificadores_funciones;
ListaSentencias*      lista_sentencias;
char*                 aux_tIdentificador;
int                   analisisCorrecto;



/************* TP 5 *************/

/* Control de doble declaración de variables */
//Para variables se hace uso de ListaIdentificadores

