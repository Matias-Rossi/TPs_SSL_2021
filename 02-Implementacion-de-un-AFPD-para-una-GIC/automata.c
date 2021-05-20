#include "tp2.h"

ESTADO nuevoEstado(int estado, char leido, Nodo* pila, int pos) {
   char cima = cimaDePila(pila);
   
   int columna = caracter_columna(leido);
   int fila    = estadoCima_fila(estado, cima);

    if(columna == 5){
        errorHandler(4, pos);
    }

    return TABLA_DE_MOVIMIENTOS[fila][columna];
}

int estadoCima_fila(int estado, char cima){
    int fila = 0;

    if(cima == '$')
    {
        switch(estado)
        {
            case q0: fila = 0;
            break;
            case q1: fila = 1;
            break;
            case q2: fila = 5;
            break;
            default: fila = 6;
        };
    }
    else if(cima == 'R')
    {
        switch(estado)
        {
            case q0: fila = 2;
            break;
            case q1: fila = 3;
            break;
            case q2: fila = 4;
            break;
            default: fila = 6;
        };
    }

    return fila;
}

int caracter_columna(char leido){

    int columna;

    if(leido == '0'){
        columna = 0;
    }
    else if(leido >= '1' && leido <= '9'){
        columna = 1;
    }
    else if(leido == '+' || leido == '-' || leido == '*' || leido == '/'){
        columna = 2;
    }
    else if(leido == '('){
        columna = 3;
    }
    else if(leido == ')'){
        columna = 4;
    }
    else{
        //ERROR: no se reconoce el caracter ingresado
        columna = 5;
    }

    return columna;
}

void actualizarPila(ESTADO estado, Nodo** pila, int pos)
{
    pop(pila);

    for(int i = strlen(estado.simbolosAPila)-1 ; i >= 0 ; i--)
        push(pila, estado.simbolosAPila[i]);

    return;
}