#include <stdio.h>
#include <stdlib.h>

typedef struct nodo 
{
    char info;
    struct nodo* sig;
}Nodo;

void inicializarPila(Nodo** p) 
{
    (*p) = (Nodo*) malloc(sizeof(Nodo));
    (*p)->info = '$';
    (*p)->sig = NULL;
}

void push(Nodo** p, char c) 
{
    Nodo* nuevo = (Nodo*) malloc(sizeof(Nodo));
    nuevo->info = c;
    nuevo->sig = (*p);
    (*p) = nuevo;
}

char pop(Nodo** p) 
{
    if((*p) != NULL)
    {
        char valor = (*p)->info;
        Nodo* aux = *p;
        (*p) = (*p)->sig;
        free(aux);
        return valor;
    }
}

char cimaDePila(Nodo* p)
{
    if(p != NULL)
    {
        return p->info;
    }
}

void mostrarPila(Nodo *p)
{
    int i;
    Nodo* aux = p;

    for(int i=0; aux != NULL; i++)
    {
        printf("-- %c --\n", p->info);
        aux = aux->sig;
    }

    printf("----");
}

int estaVacia(Nodo *p)
{
    return p==NULL? 1 : 0;
}


