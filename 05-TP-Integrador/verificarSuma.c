#include "tp5.h"


/* Verificación operación binaria */

int contieneIgual(char* linea) {
    for(int i = 0; i < strlen(linea); i++) {
        if(linea[i] == '=') {
            return 1;
        }
    }
    return 0;
}

int chequearSuma(char* linea, ListaIdentificadores* ultimas_constantes) {

    //Obtener operandos
    char* cuenta;
    if(contieneIgual(linea)) {
        cuenta = sacarEspacios(substringDesde(linea, '='));
    } else {
        cuenta = sacarEspacios(linea);
    }
    char* primerOperando = substringHastaCaracter(cuenta, '+');
    char* segundoOperando = substringDesde(cuenta, '+');


    //Validar operandos
    int primerOperandoOK = 0;
    int segundoOperandoOK = 0;

    //Buscar en lista de variables
    char* tipoObtenidoDesdeLista =  obtenerTipoDesdeLista(identificadores_variables, sacarEspacios(primerOperando));
    if (tipoObtenidoDesdeLista) {

        //Variable estaba en lista
        if(strcmp(tipoObtenidoDesdeLista, "int") == 0) primerOperandoOK = 1;

    } else {

        //Variable es una constante
        char* strTipo = obtenerElementoTipoPosicion(ultimas_constantes, ultimas_constantes->cantElementos - 2);
        

        //En el caso que flex diga que se trata de un identificador
        if(strcmp(strTipo, "identificador") == 0) printf("[ERROR] La variable %s no ha sido declarada\n", primerOperando);

        else primerOperandoOK = 1;
    }

    //Se repite el proceso
    tipoObtenidoDesdeLista =  obtenerTipoDesdeLista(identificadores_variables, sacarEspacios(segundoOperando));
    if (tipoObtenidoDesdeLista) {
        if(strcmp(tipoObtenidoDesdeLista, "int") == 0) segundoOperandoOK = 1;
    } else {
        char* strTipo = obtenerElementoTipoPosicion(ultimas_constantes, ultimas_constantes->cantElementos - 1);
        if(strcmp(strTipo, "identificador") == 0) printf("[ERROR] La variable %s no ha sido declarada\n", segundoOperando);
        else segundoOperandoOK = 1;
    }

    if(primerOperandoOK && segundoOperandoOK) {
        printf("[LOG] Suma válida encontrada: %s + %s\n", primerOperando, segundoOperando);
    }

    return primerOperandoOK && segundoOperandoOK;
}

char* substringHastaCaracter(char* cadena, char caracter) {
    char* cadenaSinCaracter = (char*)malloc(sizeof(char)*strlen(cadena));
    int i = 0;
    int j = 0;

    int continuar = 1;
    while(cadena[i] != '\0' && continuar == 1){
        if(cadena[i] != caracter){
            cadenaSinCaracter[j] = cadena[i];
            j++;
            continuar = 0;
        }
        i++;
    }
    cadenaSinCaracter[j] = '\0';
    return cadenaSinCaracter;
}


