#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int yylineno;
int yyerror(const char *msg);

typedef struct list
{
    void* data;
    int cantElementos;
    struct list* sgte
} list;

typedef struct variable
{
    char* nombre_variable;
    int tipo;
    int ambito;
    int puntero;
    struct variable* sgte;
} variable;

typedef struct funcion
{
    char* nombre_funcion;
    lista_parametros* params;
    int tipo_salida;
    int puntero;
    struct funcion* sgte;
} funcion;

typedef struct lista_parametros
{
    int tipo;
    char *nombre;
    int puntero;
    struct lista_parametros* sgte;
} lista_parametros;

typedef struct NoReconocidos{
    char* nombre;
    int cantElementos;    
} Lista_TokensNoRec;

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





typedef struct tokensNoReconocidos{
    char* token;
    int linea;
    struct tokensNoReconocidos* sig;
} tokensNoReconocidos;

typedef struct {
    Sentencia* pri;
    int cantElementos;
} listaTokensNoReconocidos;



//listas.c
ListaIdentificadores* inicializarListaIdentificadores      (ListaIdentificadores*);
void                  agregarIdentificador                 (ListaIdentificadores*, char*, char*);
int                   ordenarIdentificadores               (ListaIdentificadores*, int criterio(char*, char*));
void                  swapId                               (Identificador*, Identificador*);
void                  intercambiarIdentificadores          (Identificador*, Identificador*);
void                  liberarListaIdentificadores          (ListaIdentificadores*);
ListaSentencias*      inicializarListaSentencias           (ListaSentencias*);
void                  agregar_sentencia                    (ListaSentencias*, char*, int);

//listasGenercias.c
list* inicializarLista(list*);
void agregarElemento(list*, void*, int);
int variableEstaDeclarada(char*, list*);
void agregar_token_no_reconocido(listaTokensNoReconocidos*, char*, int);

//reporte.c
void  nuevaCategoria              (FILE*, char*);
void  crearListadoIdentificadores (FILE*, ListaIdentificadores*, char*);
void  crearListadoSentencias(FILE*, ListaSentencias*, char*);
char* sacar_ultimo_caracter(char*);

ListaIdentificadores* identificadores_variables;
ListaIdentificadores* identificadores_funciones;
ListaSentencias*      lista_sentencias;
int                   aux_tIdentificador;
int                   analisisCorrecto;