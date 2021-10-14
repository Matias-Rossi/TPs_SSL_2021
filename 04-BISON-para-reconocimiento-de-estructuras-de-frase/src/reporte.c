#include"tp4.h"

void nuevaCategoria(FILE* reporte, char* seccion){
    fprintf(reporte,"\n\n--%s--\n", seccion);
}

void crearListadoIdentificadores(FILE* reporte, ListaIdentificadores* identificadores, char* tListado){
    if(identificadores->pri != NULL){                                                       //Si la lista no esta vacía
        ordenarIdentificadores(identificadores, strcmp);
        Identificador* aux = identificadores->pri;

        nuevaCategoria(reporte, tListado);
        fprintf(reporte, "NOMBRE\tOCURRENCIAS\t\tTIPO DE DATO\n");
        while(aux->sig != NULL) {                                                           //Itera por los nodos
            fprintf(reporte, "%s\t\t%d\t\t\t\t%s\n" ,aux->nombre, aux->ocurrencias, tDatoItoC(aux->tipo));              
            aux = aux->sig;
        }
        fprintf(reporte, "%s\t\t%d\t\t\t\t%s\n" ,aux->nombre, aux->ocurrencias, tDatoItoC(aux->tipo));

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

        liberarListaIdentificadores(lSentencias);
    }
}




char* tDatoItoC(int tDato){
    switch (tDato)
    {
        case 1:
            return "int";
            break;
        case 2:
            return "char";
            break; 
        case 3:
            return "long";
            break;
        case 4:
            return "double";
            break;
        case 5:
            return "short";
            break;
        case 6:
            return "signed";
            break;
        case 7:
            return "unsigned";
            break;
        case 8:
            return "enum";
            break;
        case 9:
            return "void";
            break;
        case 10:
            return "float";
            break;
        default:
            return "TAD";
            break;
    }
}