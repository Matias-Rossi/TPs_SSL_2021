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
typedef struct 
{
    char* var;
    int var_size;
    int idVar;
    struct nodo* sig;
} nodo;

typedef struct 
{
    char* var;
    int var_size;
    int idVar;
} nodo_out;

void inicializarPila(nodo**); 
void push(nodo**, char*, int);
nodo_out* pop(nodo**);
void imprimirEnReporte(FILE*, nodo*);
 char* tipo_de_dato (int);

int idVar;


