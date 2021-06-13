#include"tp2.h"

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

void vaciarPila(Nodo** p)
{
    while((*p) != NULL)
    {
        Nodo* aux = *p;
        (*p) = (*p)->sig;
        free(aux);
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
        printf("\t\t\t\t\t|%c|\n", aux->info);
        aux = aux->sig;
    }

    printf("\t\t\t\t\t----\n");
}

int pilaVacia(Nodo *p)
{
    return p==NULL? 1 : 0;
}