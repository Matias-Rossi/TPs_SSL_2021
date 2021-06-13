#include "tp2.h"

int main(){

    char leido[40];
    ESTADO estadoInicial = {q0, "$"};
    ESTADO estado = estadoInicial;
    int error = 0;

    Nodo *pila = NULL;

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

            if(estado.proximoEstado == _){
                errorHandler(2, i);             //todo: revisar estos dos errores (1 y 2). Ver comentario al final del programa
                error = 2;
            }

            if(pilaVacia(pila) && error == 0){
                errorHandler(1, i);
                error = 1;
            }
            }
        }

        pop(&pila);


        if(error == 0){
            if(pilaVacia(pila)==0){
                errorHandler(3, lenExpresion);
                error = 3;
            }
            else if(estado.proximoEstado == q0) {
                errorHandler(6, lenExpresion);
                error = 6;
            }
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
Entradas que causan errores y lo que retornan: 
"4 + 3)"        ->  ERROR 2: Expresión inválida
"(1 + 8)("      ->  ERROR 2: Expresion invalida
"( + 8)("       ->  ERROR 2: expresion invalida (En realidad falta una constante)

Claramente hay un problema entre el error 1 y 2, dependen mucho del orden en que se ejecuta cada evaluación.
Hay que encontrar una manera de hacer que solo se muestre uno, y cuando corresponda.
*/