#include"tp4.h"

void nuevaCategoria(FILE* reporte, char* seccion){
    fprintf(reporte,"\n\n--%s--\n", seccion);
}

void crearListadoIdentificadores(FILE* reporte, ListaIdentificadores* identificadores){
    if(identificadores->pri != NULL){                                                       //Si la lista no esta vacía
        ordenarIdentificadores(identificadores, strcmp);
        Identificador* aux = identificadores->pri;

        nuevaCategoria(reporte, "VARIABLES");
        fprintf(reporte, "NOMBRE\tOCURRENCIAS\tTIPO DE DATO");
        while(aux->sig != NULL) {                                                           //Itera por los nodos
            fprintf(reporte, "%s\t%d\t%s\n" ,aux->nombre, aux->ocurrencias, aux->tipo);              
            aux = aux->sig;
        }
        fprintf(reporte, "%s\t%d\t%s\n" ,aux->nombre, aux->ocurrencias, aux->tipo);

        liberarListaIdentificadores(identificadores);
    }
}