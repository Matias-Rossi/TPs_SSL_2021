#include "tp2.h"

int main(){

    char leido[40];
    ESTADO estado = {q0, "$"};
    int error = 0;

    Nodo *pila = NULL;
    inicializarPila(&pila);

    printf("Ingrese una expresion: ");
    scanf("%s", leido);
    fflush(stdin);
    
    char *expresionAnalizar = sacarEspacios(leido);

    printf("La expresion es %s\n" , expresionAnalizar);

    for(int i = 0; i < strlen(leido); i++){
        estado = nuevoEstado(estado.proximoEstado, leido[i], pila);
        actualizarPila(estado, pila);
        //printf("%c,%c: %d\n",leido[i], cimaDePila(pila) ,estado.proximoEstado);

        //TODO pendiente
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
    //mostrarPila(pila);

    //todo pendiente
    pop(&pila);
    if(pilaVacia(pila)==0)
    {
        printf("Quedaron cosas en la pila\n");
    }
    if (error == 0)
    {
        printf("La cadena es sintacticamente correcta");
    }
    else if (error == 1)
    printf("La cadena es sintacticamente INCORRECTA");
    //---

    free(expresionAnalizar);

    return 0;
}


