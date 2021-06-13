#include "tp2.h"

int main(){

    char leido[40];
    ESTADO estadoInicial = {q0, "$"};
    ESTADO estado = estadoInicial;
    int error;

    Nodo *pila = NULL;

    int error = 0;
    int lenExpresion;

    printf("Ingrese una expresion: ");
    scanf("%[^\n]", leido);
    fflush(stdin);

    //printf("La expresion CON ESPACIOS es: %s\n" , leido);
    //printf("La expresion SIN ESPACIOS es: %s\n" , expresionAnalizar);
    //printf("strlen(expresionAnalizar): %d\n", strlen(expresionAnalizar));

    int i;
    int continuar = 1;

    while(continuar != 0){

        inicializarPila(&pila);
        char *expresionAnalizar = sacarEspacios(leido);
        int lenExpresion = strlen(expresionAnalizar);
        error = 0;

        for(i=0; i < lenExpresion ; i++){
            
            //printf("\nPOS: %d\n", i+1);
            //printf("T(%d,", estado.proximoEstado);
            //printf(" %c,", expresionAnalizar[i]);
            //printf(" %c) -> ", cimaDePila(pila));

            if(error == 0)
            {
            estado = nuevoEstado(estado.proximoEstado, expresionAnalizar[i], pila, i);
            actualizarPila(estado, &pila);
            

            //printf("(%d, ", estado.proximoEstado);
            //printf("%s)\n", estado.simbolosAPila);
            //printf("PILA: \n");
            //mostrarPila(pila);

            if(estado.proximoEstado == _)
                //error = errorHandler(2, i);
            if(pilaVacia(pila))
                error = errorHandler(1, i);
            }
        }

        pop(&pila);

        if(error == 0){
            if(pilaVacia(pila)==0)
                error = errorHandler(3, lenExpresion);
            else if(estado.proximoEstado == q0)
                error = errorHandler(6, lenExpresion);
        }
        
        if(error == 0)
            printf("La cadena es sintacticamente correcta\n");


        //Reinicio
        free(expresionAnalizar);
        estado = estadoInicial;
        vaciarPila(&pila);
        inicializarPila(&pila);


        //Preguntar si continuar
        char inputContinuar = 'N';
        printf("\nDesea continuar ingresando expresiones? (Y/N)\n");
        scanf("%c", &inputContinuar);
        fflush(stdin);
        

        //Ingresar entrada nuevamente
        if(inputContinuar == 'Y' || inputContinuar == 'y')
        {
            printf("\nIngrese una expresion: ");
            scanf("%[^\n]", leido);
            fflush(stdin);

        }
        else
            continuar = 0;
    }

    //free(expresionAnalizar);
    //free(leido);

    return 0;
}

/* 
Que se hizo en el commit:
 - Se revirtió 1 versión
 - Se implementó un bucle para poder ingresar una cadena tras otra, confirmación por medio (como en el video tutorial)
 - errorHandler ahora devuelve un valor, para así evitar mostrar múltiples errores (ver implementación).
*/


/*
Entradas que causan errores y lo que retornan: 
"(1 + 8)("      ->  ERROR 1: tenes que abrir el parentesis antes de cerrarlo
"(1++4)*5+3"    ->  ERROR 1: tenes que abrir el parentesis antes de cerrarlo
*/