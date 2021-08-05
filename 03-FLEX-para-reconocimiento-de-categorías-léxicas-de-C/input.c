#include "tp2.h"

int main(){

    char *leido;
    ESTADO estadoInicial = {q0, "$"};
    ESTADO estado = estadoInicial;
    int error = 0;
    int i;
    Nodo *pila = NULL;
    int lenExpresion;

    //Ingreso de datos
    printf("Ingrese una expresion: ");
    scanf("%[^\n]", leido);
    fflush(stdin);

    int continuar = 1;

    while(continuar != 0){

        inicializarPila(&pila);
        int lenExpresion = strlen(leido);
        error = 0;

        for(i=0; i < lenExpresion ; i++){
        
            if(leido[i] != ' '){

                //printf("\nPOS: %d\n", i+1);
                //printf("T(%d,", estado.proximoEstado);
                //printf(" %c,", leido[i]);
                //printf(" %c) -> ", cimaDePila(pila));

                if(error == 0)
                {
                    estado = nuevoEstado(estado.proximoEstado, leido[i], pila, i, &error);
                    actualizarPila(estado, &pila);
                    

                    //printf("(%d, ", estado.proximoEstado);
                    //printf("%s)\n", estado.simbolosAPila);
                    //printf("PILA: \n");
                    //mostrarPila(pila);

                    if(estado.proximoEstado == _){
                        errorHandler(2, i);       
                        error = 2;
                    }

                    if(pilaVacia(pila) && error == 0){
                        errorHandler(1, i);
                        error = 1;
                    }
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

    free(leido);

    return 0;
}
/*
    Fin del programa
*/

/* Todo esto acá abajo está a modo de prueba para el reporte y no es C válido */

0xFF
045
10FD
'a'
'a'
'a
$
$$$$$
$
'%%'
&
"asdfsa
'dsadas
#define NUM 5
0.456
.85
10e1
20.4