#include"tp4.h"

void nuevaCategoria(FILE* reporte, char* seccion){
    fprintf(reporte,"\n\n--%s--\n", seccion);
}

void crearListadoIdentificadores(FILE* reporte, ListaIdentificadores* identificadores, char* tListado){
    if(identificadores->pri != NULL){                                                       //Si la lista no esta vacía
        ordenarIdentificadores(identificadores, strcmp);
        Identificador* aux = identificadores->pri;

        nuevaCategoria(reporte, tListado);
        fprintf(reporte, "NOMBRE\t\t\tTIPO DE DATO\n");
        while(aux->sig != NULL) {                                                           //Itera por los nodos
            fprintf(reporte, "%s\t\t\t%s\n" ,aux->nombre, aux->tipo);              
            aux = aux->sig;
        }
        fprintf(reporte, "%s\t\t\t%s\n" ,aux->nombre, aux->tipo);

        liberarListaIdentificadores(identificadores);
    }
}

void crearListadoSentencias(FILE* reporte, ListaSentencias* lSentencias, char* tListado){
    if(lSentencias->pri != NULL){                                                       //Si la lista no esta vacía
        Sentencia* aux = lSentencias->pri;

        nuevaCategoria(reporte, tListado);
        fprintf(reporte, "TIPO DE SENTENCIA\t\tNUMERO DE LINEA\n");
        while(aux->sig != NULL) {                                                           //Itera por los nodos
            fprintf(reporte, "%s\t\t%d\n" ,aux->tipo, aux->linea);              
            aux = aux->sig;
        }                          //Itera por los nodos
        fprintf(reporte, "%s\t\t%d\n" ,aux->tipo, aux->linea);

        //liberarListaIdentificadores(lSentencias);
    }
}

char * sacar_ultimo_caracter(char* var){
    char* min_var = malloc(strlen(var));
    memcpy(min_var, var, strlen(var) - 1);
    min_var[strlen(var)-1]='\0';

    return min_var;
}