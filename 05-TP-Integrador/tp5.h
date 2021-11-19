#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include"bison.tab.h"

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
    int definida;
    int declarada;
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
ListaIdentificadores* trasladarListaIdentificadores(ListaIdentificadores* listaOriginal);
void                  liberarListaIdentificadores          (ListaIdentificadores*);
ListaSentencias*      inicializarListaSentencias           (ListaSentencias*);
void                  agregar_sentencia                    (ListaSentencias*, char*, int);
char* obtenerTipoDesdeLista(ListaIdentificadores* lista, char* identificador);

//reporte.c
void  nuevaCategoria              (char*);
void  crearListadoIdentificadores (ListaIdentificadores*, char*);
void  crearListadoSentencias(ListaSentencias*, char*);
char* sacar_ultimo_caracter(char*);
char* obtenerElementoTipoPosicion(ListaIdentificadores* lista, int posicion);

ListaIdentificadores* identificadores_variables;
ListaIdentificadores* identificadores_funciones;
ListaFunciones*       lista_funciones;
ListaSentencias*      lista_sentencias;
char*                 aux_tIdentificador;
char*                 aux_nombreFuncion;
int                   analisisCorrecto;
char*                 aux_tFuncion;
char*                 aux_nParametro;
ListaIdentificadores* lista_parametros;
ListaIdentificadores* ultimas_constantes;


/************* TP 5 *************/

ListaFunciones* inicializarListaFunciones(ListaFunciones*);

Funcion* agregarFuncion(ListaFunciones* lista, char* identificador, char* tipo, ListaIdentificadores* listaParametros);
int definirFuncion(ListaFunciones* lista, char* identificador);    //TODO
void agregarParametro(ListaIdentificadores* listaParametros, char* nombreParametro, char* tipoParametro, ListaIdentificadores* listaVariables);
char* cortarIdentificadorFuncion(char* cadena);
char* obtenerTipo(char* cadena);
ListaIdentificadores* existeFuncion(ListaFunciones* lista, char* nombreFuncion);
char* tipoFlexAString(enum yytokentype tipo);
char* substringDesde(char* cadena, char caracter);
char* sacarEspacios(char* cadena);
ListaIdentificadores* tokenizarParametros(char* cadena);
int comprobar_tipos_funcion(ListaFunciones* lista, char* linea);
int invokeFlex(char* str);
int contieneIgual(char* linea);
int chequearSuma(char* linea, ListaIdentificadores*);
void verificarDivisor(char* str);
char* substringHastaCaracter(char* cadena, char caracter);
ListaIdentificadores* tokenizarParametrosDesdeLinea(char* linea);
Funcion* buscarFuncion(ListaFunciones* lista, char* identificador);

/* Validar Identificadores */
void validarIdentificador(char* cadena);
char ultimo_caracter(char* cadena);


/* Reporte tp5 */
void mostrarListadoFunciones(ListaFunciones* lista);
void mostrarFuncion(Funcion* funcion);
void mostrarParametros(ListaIdentificadores* parametros);

typedef struct Error {
    char* mensaje;
    struct Error* sig;
} Error;

typedef struct ListaError {
    struct Error* pri;
    int cantElementos;
} ListaError;

void agregarError(struct ListaError*, char* mensaje);
ListaError* inicializarListaErrores(struct ListaError*);
struct ListaError* listaErrores;
void mostrarErrores(struct ListaError*);


/* Control de doble declaración de variables */
//Para variables se hace uso de ListaIdentificadores

