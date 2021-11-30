#include "tp5.h"

char* sacarSimbolos(char* cadena) {
    char* cadenaSinSimbolos = (char*)malloc(sizeof(char)*strlen(cadena));
    int i = 0;
    int j = 0;
    while(cadena[i] != '\0'){
        if(cadena[i] != '+' && cadena[i] != '-' && cadena[i] != '*' && cadena[i] != '/' && cadena[i] != '=' && cadena[i] != ';'){
            cadenaSinSimbolos[j] = cadena[i];
            j++;
        }
        i++;
    }
    cadenaSinSimbolos[j] = '\0';
    return cadenaSinSimbolos;
}

char ultimo_caracter(char* cadena) {
    int i = 0;
    while (cadena[i] != '\0') {
        i++;
    }
    return cadena[i - 1];
}

void validarIdentificador(char* cadena) {
    if(ultimo_caracter(cadena) == '(') {
        //Es funcion
        char* nombreFuncion = sacar_ultimo_caracter(cadena);
        Funcion* f = buscarFuncion(lista_funciones, nombreFuncion);

        //printf("Analizando funcion %s \n", nombreFuncion);

        if(f) {
            //printf("Encontrada funcion %s\n", f->nombre);
            if(f->definida == 0) {
                char* errorMsg = (char*)calloc(sizeof(char), 120);
                sprintf(errorMsg, "[ERROR-Semántico] Línea %d: No se encontró una definición para la función %s\n", yylineno, nombreFuncion);
                agregarError(erroresSemanticos, errorMsg);

            } 
            return;
        } else {
            char* errorMsg = (char*)calloc(sizeof(char), 120);
            sprintf(errorMsg, "[ERROR-Semántico] Línea %d: La función %s no se encuentra definida\n", yylineno, nombreFuncion);
            agregarError(erroresSemanticos, errorMsg);
        }
        return;

    } else {
        //No es funcion

        Identificador* aux = identificadores_variables->pri;
        char* nombreVariable = calloc(sizeof(char), strlen(cadena));
        strcpy(nombreVariable, sacarSimbolos(sacarEspacios(cadena)));
        
        while(aux){
            //printf("aux->nombre: %s\n", aux->nombre);
            if(strcmp(aux->nombre, nombreVariable) == 0){
                return;
            }
            aux = aux->sig;
        }
        char* errorMsg = (char*)calloc(sizeof(char), 100);
        sprintf(errorMsg, "[ERROR-Semántico] Línea %d: La variable %s no ha sido declarada\n", yylineno, nombreVariable/*, cadena*/);   //agregar %s para debug
        agregarError(erroresSemanticos, errorMsg);
    }
}