#include "tp2.h"

ESTADO nuevoEstado(int estado, char leido, Nodo* pila) {
   char cima = cimaDePila(pila);
   
   int columna = caracter_columna(leido);
   int fila    = estadoCima_fila(estado, cima);

    if(columna == 5){
        printf("ERROR: no se reconoce el caracter ingresado");
        exit(1);
    }
    if(fila == 6){
        printf("ERROR");
        exit(1);
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
    else cima = '\0'; //todo revisar
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

//todo revisar
void actualizarPila(ESTADO estado, Nodo** pila)
{
    pop(pila);

    for(int i = strlen(estado.simbolosAPila)-1 ; i >= 0 ; i--)
    {
        if(strlen(estado.simbolosAPila) == 2)
        {
            push(pila, estado.simbolosAPila[1]);
            //printf("Agregando %c a pila\n", estado.simbolosAPila[1]);
            push(pila, estado.simbolosAPila[0]);
            //printf("Agregando %c a pila\n", estado.simbolosAPila[0]);
        }
        else{
            if(estado.simbolosAPila[0] != 'e'){
                //printf("Agregando %c a pila\n", estado.simbolosAPila[0]);
                push(pila, estado.simbolosAPila[0]);
            }
        }
        //mostrarPila(pila);
    }
}