#ifndef TP2_H
#define TP2_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define q0    1
#define q1    2
#define q2    3
#define ERROR 0

typedef struct nodo 
{
    char info;
    struct nodo* sig;
} Nodo;

typedef struct{
    //int  estadoActual;
    //char caracterLeido;
    //char cimaDePila;
    int  proximoEstado;
    char simbolosAPila[3];
}   ESTADO;

ESTADO TABLA_DE_MOVIMIENTOS [7][5] = {
//                      0               [1-9]        {+,-,*,/}          (                  )
/* (q0 , $)   */    {{ERROR , ""},   {q1 , "$"},    {ERROR , ""},   {q0 , "R"},     {ERROR , ""}},
/* (q1 , $)+  */    {{q1 , "$"},     {q1 ,"$"},     {q0 , "$"},     {ERROR , ""},   {ERROR , ""}},
/* (q0 , R)   */    {{ERROR , "R"},  {q1 , "R"},    {ERROR , ""},   {q0 , "RR"},    {ERROR , ""}},
/* (q1 , R)   */    {{q1 , "R"},     {q1 , "R"},    {q0 , "R"},     {ERROR , ""},   {q2 , ""}},
/* (q2 , R)   */    {{ERROR , ""},   {ERROR , ""},  {q0 , "R"},     {ERROR , ""},   {q2 , ""}},
/* (q2 , $)+  */    {{ERROR , ""},   {ERROR , ""},  {q0 , "$"},     {ERROR , ""},   {ERROR , ""}},
/* (ERROR,'') */    {{ERROR , ""},   {ERROR , ""},  {ERROR , ""},   {ERROR , ""},   {ERROR , ""}},
};

//Definidas en pila.c
void inicializarPila(Nodo**);
void push(Nodo**, char);
char pop(Nodo**);
char cimaDePila(Nodo*);
void mostrarPila(Nodo*);
int  pilaVacia(Nodo*);

//Definidas en automata.c
ESTADO nuevoEstado(int, char, Nodo*);
int estadoCima_fila(int, char);
int caracter_columna(char);
void actualizarPila(ESTADO, Nodo*);

#endif