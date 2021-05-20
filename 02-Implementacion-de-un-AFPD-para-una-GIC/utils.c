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