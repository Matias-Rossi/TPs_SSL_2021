#include "tp5.h"

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

        printf("Analizando funcion %s \n", nombreFuncion);

        if(f) {
            printf("Encontrada funcion %s\n", f->nombre);
            if(f->definida == 0) {
                char* errorMsg = (char*)calloc(sizeof(char), 120);
                sprintf(errorMsg, "[ERROR-Semántico] Línea %d: No se encontró una definición para la función %s\n", yylineno, nombreFuncion);
                agregarError(listaErrores, errorMsg);

            } 
            return;
        } else {
            char* errorMsg = (char*)calloc(sizeof(char), 120);
            sprintf(errorMsg, "[ERROR-Semántico] Línea %d: La función %s no se encuentra definida\n", yylineno, nombreFuncion);
            agregarError(listaErrores, errorMsg);
        }
        return;

    } else {
        //No es funcion

        Identificador* aux = identificadores_variables->pri;
        
        while(aux){
            //printf("aux->nombre: %s\n", aux->nombre);
            if(strcmp(aux->nombre, cadena) == 0){
                return;
            }
            aux = aux->sig;
        }
        char* errorMsg = (char*)calloc(sizeof(char), 70);
        sprintf(errorMsg, "[ERROR-Semántico] Línea %d: La variable %s no ha sido declarada\n", yylineno, cadena);
        agregarError(listaErrores, errorMsg);
    }
}