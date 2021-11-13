#include"tp5.h"

void nuevaCategoria(char* seccion){
    printf("\n\n--%s--\n", seccion);
}

void crearListadoIdentificadores(ListaIdentificadores* identificadores, char* tListado){
    if(identificadores->pri != NULL){                                                       //Si la lista no esta vacía
        ordenarIdentificadores(identificadores, strcmp);
        Identificador* aux = identificadores->pri;

        nuevaCategoria(tListado);
        printf("NOMBRE\t\t\tTIPO DE DATO\n");
        while(aux->sig != NULL) {                                                           //Itera por los nodos
            printf("%s\t\t\t%s\n" ,aux->nombre, aux->tipo);              
            aux = aux->sig;
        }
        printf("%s\t\t\t%s\n" ,aux->nombre, aux->tipo);

        liberarListaIdentificadores(identificadores);
    }
}

void crearListadoSentencias(ListaSentencias* lSentencias, char* tListado){
    if(lSentencias->pri != NULL){                                                       //Si la lista no esta vacía
        Sentencia* aux = lSentencias->pri;

        nuevaCategoria(tListado);
        printf("TIPO DE SENTENCIA\t\tNUMERO DE LINEA\n");
        while(aux->sig != NULL) {                                                           //Itera por los nodos
            printf("%s\t\t%d\n" ,aux->tipo, aux->linea);              
            aux = aux->sig;
        }                          //Itera por los nodos
        printf("%s\t\t%d\n" ,aux->tipo, aux->linea);

        //liberarListaIdentificadores(lSentencias);
    }
}

char * sacar_ultimo_caracter(char* var){
    char* min_var = malloc(strlen(var));
    memcpy(min_var, var, strlen(var) - 1);
    min_var[strlen(var)-1]='\0';

    return min_var;
}

/*** TP5 ***/

void mostrarListadoFunciones(ListaFunciones* lista) {
    if(lista->pri != NULL){                                                       //Si la lista no esta vacía
        Funcion* aux = lista->pri;

        nuevaCategoria("FUNCIONES");

        printf("NOMBRE\t\t\tRETORNA\t\t\tCANT/TIPO PARAMETROS\n");
        while(aux->sig != NULL) {                                                           //Itera por los nodos
            mostrarFuncion(aux);
            //printf("%s\t\t\t%s\n" ,aux->nombre, aux->tipo);              
            aux = aux->sig;
        }                          
        printf("%s\t\t\t%s\n" ,aux->nombre, aux->tipo);

        
    } else {
        printf("\n>:(");
    }
}

void mostrarFuncion(Funcion* funcion) {
    printf("%s\t\t\t%s\t\t\t%d / ", funcion->nombre, funcion->tipo, funcion->parametros->cantElementos);
    mostrarParametros(funcion->parametros);
}

void mostrarParametros(ListaIdentificadores* parametros) {
    if(parametros->pri != NULL){                                                       //Si la lista no esta vacía
        Identificador* aux = parametros->pri;
        while(aux->sig != NULL) {                                                           //Itera por los nodos
            printf("%s, ", aux->tipo);              
            aux = aux->sig;
        }
    }
    printf("\n");
}