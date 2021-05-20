#include "tp2.h"

int main(){

    char *leido;
    ESTADO estado = {q0, "$"};
    int error = 0;

    Nodo *pila = NULL;
    inicializarPila(&pila);

    printf("Ingrese una expresion: ");
    gets(leido);
    char *expresionAnalizar = sacarEspacios(leido);

    printf("La expresion CON ESPACIOS es: %s\n" , leido);
    printf("La expresion SIN ESPACIOS es: %s\n" , expresionAnalizar);
    printf("strlen(expresionAnalizar): %d\n", strlen(expresionAnalizar));

    int lenExpresion = strlen(expresionAnalizar);

    for(int i=0; i < lenExpresion ; i++){
        printf("\ni: %d\n", i);

        mostrarPila(pila);
        printf("T(%c,", expresionAnalizar[i]);
        printf(" %d,", estado.proximoEstado);
        printf(" %c) = ", cimaDePila(pila));

        estado = nuevoEstado(estado.proximoEstado, expresionAnalizar[i], pila);
        actualizarPila(estado, &pila);

        printf("(%d, ", estado.proximoEstado);
        printf("%c)\n", cimaDePila(pila));

        if(pilaVacia(pila))
        {
            error = 1;
            printf("La expresion no es valida, error en pos. %d\n", i);
        }
        else if(estado.proximoEstado == _)
        {
            error = 1;
            printf("La expresion no es valida, error en pos. %d\n", i);
        }
    }

    printf("FIN DE EVALUACION, PILA: \n");
    mostrarPila(pila);

    pop(&pila);

    if(pilaVacia(pila)==0 && !error)
    {
        printf("Quedaron cosas en la pila\n");
    }
    else if (error == 0)
    {
        printf("La cadena es sintacticamente correcta");
    }

    free(expresionAnalizar);
    free(leido);

    return 0;
}


