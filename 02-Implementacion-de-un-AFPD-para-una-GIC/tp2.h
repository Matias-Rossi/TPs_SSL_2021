#ifndef TP2_H
#define TP2_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define q0    0
#define q1    1
#define q2    2
#define _     3
#define __   ""

typedef struct nodo 
{
    char info;
    struct nodo* sig;
} Nodo;

typedef struct{
    int  proximoEstado;
    char simbolosAPila[3];
}   ESTADO;

static const ESTADO TABLA_DE_MOVIMIENTOS [7][5] = {
//                      0            [1-9]         {+,-,*,/}           (               )
/* (q0 , $)   */    {{_ , __},      {q1, "$"},     {_ , __},       {q0, "R$"},     {_ , __}},
/* (q1 , $)+  */    {{q1, "$"},     {q1, "$"},     {q0, "$"},      {_ , __},       {_ , __}},
/* (q0 , R)   */    {{_ , __},      {q1, "R"},     {_ , __},       {q0, "RR"},     {_ , __}},
/* (q1 , R)   */    {{q1, "R"},     {q1, "R"},     {q0, "R"},      {_ , __},       {q2, __}},
/* (q2 , R)   */    {{_ , __},      {_ , __},      {q0, "R"},      {_ , __},       {q2, __}},
/* (q2 , $)+  */    {{_ , __},      {_ , __},      {q0, "$"},      {_ , __},       {_ , __}},
/* (_  ,'')   */    {{_ , __},      {_ , __},      {_ , __},       {_ , __},       {_ , __}},
};

//Definidas en pila.c
void inicializarPila(Nodo**);
void push(Nodo**, char);
char pop(Nodo**);
void vaciarPila(Nodo**);
char cimaDePila(Nodo*);
void mostrarPila(Nodo*);
int  pilaVacia(Nodo*);

//Definidas en automata.c
ESTADO nuevoEstado(int, char, Nodo*, int);
int estadoCima_fila(int, char);
int caracter_columna(char);
void actualizarPila(ESTADO, Nodo**);
ESTADO volverAEstadoInicial();

//Definidas en utils.c
char* sacarEspacios (char *);
void errorHandler(int, int);

#endif