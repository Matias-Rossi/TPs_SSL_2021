#include "tp2.h"

int main(){

    char *leido;
    ESTADO estado;

    Nodo *pila = NULL;
    inicializarPila(&pila);

    printf("Ingrese una expresion: ");
    scanf("%s", leido);
    printf("La expresion es %s" , leido);

    for(int i = 0; i < strlen(leido); i++){
        estado = nuevoEstado(estado.proximoEstado, leido[i], pila);
        actualizarPila(estado, pila);

        if(pilaVacia(pila))
            printf("La expresion no es valida, error en pos. %d\n", i);
        else if(estado.proximoEstado == ERROR)
            printf("La expresion no es valida");
        
    }

    if(pop(&pila) != '$')
    {
        printf("Quedaron cosas en la pila\n");
    }


    return 0;
}


