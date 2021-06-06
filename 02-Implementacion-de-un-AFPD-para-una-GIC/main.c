#include "tp2.h"

int main(){

    char *leido;
    ESTADO estado = {q0, "$"};

    Nodo *pila = NULL;
    inicializarPila(&pila);

    int error = 0;
    int lenExpresion;

    printf("Ingrese una expresion: ");
    gets(leido);
    char *expresionAnalizar = sacarEspacios(leido);

    while (strcmp(expresionAnalizar, "exit"))
    {

        //printf("La expresion CON ESPACIOS es: %s\n" , leido);
        //printf("La expresion SIN ESPACIOS es: %s\n" , expresionAnalizar);
        //printf("strlen(expresionAnalizar): %d\n", strlen(expresionAnalizar));

        lenExpresion = strlen(expresionAnalizar);

        for(int i=0; i < lenExpresion ; i++){
            
            //printf("\nPOS: %d\n", i+1);
            //printf("T(%d,", estado.proximoEstado);
            //printf(" %c,", expresionAnalizar[i]);
            //printf(" %c) -> ", cimaDePila(pila));

            estado = nuevoEstado(estado.proximoEstado, expresionAnalizar[i], pila, i);
            actualizarPila(estado, &pila);

            //printf("(%d, ", estado.proximoEstado);
            //printf("%s)\n", estado.simbolosAPila);
            //printf("PILA: \n");
            //mostrarPila(pila);

            if(estado.proximoEstado == _){
                errorHandler(2, i);
                error = 1;
            }
            if(pilaVacia(pila)){
                errorHandler(1, i);
                error = 1;
            }
        }

        pop(&pila);

        if(pilaVacia(pila)==0){
            errorHandler(3, lenExpresion);
            error = 1;
        }
        else if(estado.proximoEstado == q0){
            errorHandler(6, lenExpresion);
            error = 1;
        }
        else if(error == 0)
            printf("La cadena es sintacticamente correcta\n");

        //free(expresionAnalizar);
        //free(leido);
        
        printf("Ingrese una expresion: ");
        gets(leido);
        expresionAnalizar = sacarEspacios(leido);
    }

    free(expresionAnalizar);
    free(leido);

    return 0;
}


