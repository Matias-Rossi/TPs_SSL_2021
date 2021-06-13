#include"tp2.h"

char* sacarEspacios (char *cadena){

    char *cadenaSinEspacios;
    int cantEspacios = 0, contadorCadena = 0;

    for(int i=0; i < strlen(cadena); i++){
        if(cadena[i] == ' ')
            cantEspacios++;
    }

    cadenaSinEspacios = malloc(strlen(cadena) - cantEspacios + 1);

    for(int i=0; i < strlen(cadena); i++){

        if(cadena[i] != ' '){
            cadenaSinEspacios[contadorCadena] = cadena[i];
            contadorCadena++;
        }
    }

    cadenaSinEspacios[contadorCadena]='\0';

    return cadenaSinEspacios;
}

int errorHandler(int errorType, int pos){

    if(errorType!=0){
        for (int i = 0; i < pos + strlen("Ingrese una expresion: "); i++)
            printf(" ");
        printf("^\n");
    }

    printf("ERROR %d: ", errorType);

    switch (errorType)
    {
    case 1:
        printf("tenes que abrir el parentesis antes de cerrarlo\n");
        break;
    case 2:
        printf("expresion invalida\n");
        break;
    case 3:
        printf("quedaron parentesis sin cerrar\n");
        break;
    case 4:
        printf("el caracter no es reconocido por el lenguaje\n");
        break;
    case 5:
        printf("estado desconocido\n");
        break;
    case 6:
        printf("falta una constante\n");
        break;
    default:
        printf("error desconocido\n");
        break;
    }
    return 1;
}

int limpiarInputBuffer(void) {
    int ch;
    while (((ch = getchar()) != EOF) && (ch != '\n')) /* void */;
    return ch;
}