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

typedef struct Funcion
{
    char* nombre;
    char* tipo;
    ListaIdentificadores* parametros;
    struct Funcion* sig;
} Funcion;

typedef struct {
    struct Funcion* pri;
    int cantElementos;
} ListaFunciones;


//listas.c
ListaIdentificadores* inicializarListaIdentificadores      (ListaIdentificadores*);
int                   identificadorYaExiste                (ListaIdentificadores*, char*);
void                  agregarIdentificador                 (ListaIdentificadores*, char*, char*);
int                   ordenarIdentificadores               (ListaIdentificadores*, int criterio(char*, char*));
void                  swapId                               (Identificador*, Identificador*);
void                  intercambiarIdentificadores          (Identificador*, Identificador*);
void                  liberarListaIdentificadores          (ListaIdentificadores*);
ListaSentencias*      inicializarListaSentencias           (ListaSentencias*);
void                  agregar_sentencia                    (ListaSentencias*, char*, int);

//reporte.c
void  nuevaCategoria              (char*);
void  crearListadoIdentificadores (ListaIdentificadores*, char*);
void  crearListadoSentencias(ListaSentencias*, char*);
char* sacar_ultimo_caracter(char*);

ListaIdentificadores* identificadores_variables;
ListaIdentificadores* identificadores_funciones;
ListaFunciones*       lista_funciones;
ListaSentencias*      lista_sentencias;
char*                 aux_tIdentificador;
char*                 aux_nombreFuncion;
int                   analisisCorrecto;


/************* TP 5 *************/

ListaFunciones* inicializarListaFunciones(ListaFunciones*);

ListaFunciones* agregarFuncion(ListaFunciones*, char*, char*);

void agregarParametro(ListaFunciones*, char*, char*, char*);


/* Reporte tp5 */
void mostrarListadoFunciones(ListaFunciones* lista);
void mostrarFuncion(Funcion* funcion);
void mostrarParametros(ListaIdentificadores* parametros);
char* cortarIdentificadorFuncion(char* cadena);



/* Control de doble declaración de variables */
//Para variables se hace uso de ListaIdentificadores

