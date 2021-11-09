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
    struct list* sgte;
} list;

typedef struct variable
{
    char* nombre_variable;
    int tipo;
    int puntero;
} variable;

typedef struct funcion
{
    char* nombre_funcion;
    list* params;
    int tipo_salida;
    int puntero;
} funcion;

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
int funcionEstaDeclarada(char*, list*);
void agregar_token_no_reconocido(listaTokensNoReconocidos*, char*, int);

//reporte.c
void  nuevaCategoria              (char*);
//TODO: Completar
char* sacar_ultimo_caracter(char*);

//Otros
list* listaVariables;
list* listaFunciones;
list* auxListaParametrosConTipos;
list* auxListaParametrosSinTipos;
listaTokensNoReconocidos* listaTokensNR; 
char* parametrosFuncion;
int aux_tIdentificador;
int analisisCorrecto;
