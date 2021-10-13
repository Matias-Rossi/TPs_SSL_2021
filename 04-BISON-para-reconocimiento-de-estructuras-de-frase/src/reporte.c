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
            fprintf(reporte, "%s\t%d\t%s\n" ,aux->nombre, aux->ocurrencias, tDatoItoC(aux->tipo));              
            aux = aux->sig;
        }
        fprintf(reporte, "%s\t%d\t%s\n" ,aux->nombre, aux->ocurrencias, tDatoCtoI(aux->tipo));

        liberarListaIdentificadores(identificadores);
    }
}

int tDatoCtoI (char* tDato){
    if(strcmp("INT", tDato) == 0)
        return 1;
    else if(strcmp("CHAR", tDato) == 0)
        return 2;
    else if(strcmp("LONG", tDato) == 0)
        return 3;
    else if(strcmp("DOUBLE", tDato) == 0)
        return 4;
    else if(strcmp("SHORT", tDato) == 0)
        return 5;
    else if(strcmp("SIGNED", tDato) == 0)
        return 6;
    else if(strcmp("UNSIGNED", tDato) == 0)
        return 7;
    else if(strcmp("ENUM", tDato) == 0)
        return 8;
    else if(strcmp("VOID", tDato) == 0)
        return 9;
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
        default:
            return "TAD";
            break;
    }
}