#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void copiarCadena(FILE *fpEntrada, FILE *fpSalida);
char nuevoEstado(char estado, char caracter);
int estadoAFila(char estado);
int caracterAColumna(char caracter);
void estadoFinal(char estado, FILE *fpSalida);

char matrizTransicion[7][24] = {
                    //           '0'  '1'  '2'  '3'  '4'  '5'  '6'  '7'  '8'  '9'  'A'  'B'  'C'  'D'  'E'  'F'  'a'  'b'  'c'  'd'  'e'  'f'  'x'  'X'
                    /*  R   */  {'S', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
                    /*  S   */  {'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 'U', 'U'},
                    /*  T   */  {'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
                    /*  U   */  {'V', 'V', 'V', 'V', 'V', 'V', 'V', 'V', 'V', 'V', 'V', 'V', 'V', 'V', 'V', 'V', 'V', 'V', 'V', 'V', 'V', 'V', '-', '-'},
                    /*  V   */  {'V', 'V', 'V', 'V', 'V', 'V', 'V', 'V', 'V', 'V', 'V', 'V', 'V', 'V', 'V', 'V', 'V', 'V', 'V', 'V', 'V', 'V', '-', '-'},
                    /*  W   */  {'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
                    /*  -   */  {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-'}
                                };

int main() {
    FILE *fpEntrada, *fpSalida;

    int tamanioPalabra;

    char nuevoCaracter, estado='R';
    char *palabra;

    fpEntrada = fopen("entrada.txt", "r");
    fpSalida  = fopen("salida.txt", "w+");


    if(!fpEntrada || !fpSalida){

        return (-1);
    }
    else{
        
        fputs("NRO recibido\t\tEn base\n", fpSalida);

        copiarCadena(fpEntrada, fpSalida);
        nuevoCaracter = fgetc(fpEntrada);

        while (!feof(fpEntrada))
        {
            if(nuevoCaracter == ','){

                estadoFinal(estado, fpSalida);
                copiarCadena(fpEntrada, fpSalida);
                estado = 'R';
            }
            else{
                estado = nuevoEstado(estado, nuevoCaracter);
            }

            nuevoCaracter = fgetc(fpEntrada);
        }

        estadoFinal(estado, fpSalida);
    }

    fclose(fpEntrada);
    fclose(fpSalida);

    return 0;  
}

char nuevoEstado(char estado, char caracter){
    int i = estadoAFila(estado);
    int j = caracterAColumna(caracter);

    return matrizTransicion[i][j];
}

int estadoAFila(char estado){
    if(estado >= 82 && estado <=87){
        return estado - 82;
    }
    else{
        return 6;
    }
}

int caracterAColumna(char nuevoCaracter){

    //[0;9]
    if(nuevoCaracter < 58) {
        return nuevoCaracter - 48; 
    }
    
    //[A;F] U [a;f]
    else if (nuevoCaracter >= 65 && nuevoCaracter <= 70){
        return nuevoCaracter - 55;
    }
    else if (nuevoCaracter >= 97 && nuevoCaracter <= 102) {
        //Cambiando por 81 se corresponde con la matriz original, 87 con las mayusculas
        return nuevoCaracter - 81;
    }

    //{x, X}
    else if(nuevoCaracter = 120){
        return nuevoCaracter - 98;
    }
    else if(nuevoCaracter = 88){
        return nuevoCaracter - 65;
    }
    else{
        printf("Algo salió mal :c");
    }
}

void estadoFinal(char estado, FILE *fpSalida){

    printf("Recibi: %c\n", estado);

    switch (estado)
    {
        case 'S':
            fputs("\t\t\tOCTAL\n", fpSalida);
            break;
        case 'T':
            fputs("\t\t\tDECIMAL\n", fpSalida);
            break;
        case 'V':
            fputs("\t\t\tHEXADECIMAL\n", fpSalida);
            break;
        case 'W':
            fputs("\t\t\tOCTAL\n", fpSalida);
            break;
        
        default:
            fputs("\t\t\tNO RECONOCIDA\n", fpSalida);
            break;
    }
}

void copiarCadena(FILE *fpEntrada, FILE *fpSalida){
    char c  = fgetc(fpEntrada);
    int len = 1;

    while (c != ',' && !feof(fpEntrada))
    {
        len++;
        fprintf(fpSalida, "%c", c);
        c = fgetc(fpEntrada);
        
    }

    if(c==',')
        fseek(fpEntrada, -len, SEEK_CUR);
    else
        fseek(fpEntrada, -len+1, SEEK_CUR);
    
    return;
}
