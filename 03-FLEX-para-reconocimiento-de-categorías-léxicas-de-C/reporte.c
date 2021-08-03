#include "categorias-lexicas.h"


/* --- Creación del reporte --- */

void nuevaCategoria(FILE* reporte, char* seccion){
        fprintf(reporte,"\n\n--%s--\n", seccion);
    }

    void crearListadoIdentificadores(FILE* reporte, ListaIdentificadores* identificadores){
        if(identificadores->pri != NULL){
            ordenarIdentificadores(identificadores, ordenarAlfabeticamente);
            Identificador* aux = identificadores->pri;

            nuevaCategoria(reporte, "IDENTIFICADORES");
            while(aux->sig != NULL) {
                fprintf(reporte, "%s: %d veces\n" ,aux->nombre, aux->ocurrencias);
                aux = aux->sig;
            }
            fprintf(reporte, "%s: %d veces\n" ,aux->nombre, aux->ocurrencias);
        }
    }

    void crearListadoLiteralesCadena(FILE* reporte, ListaStrings* cadenas){
        if(cadenas->pri != NULL){
            nuevaCategoria(reporte, "LITERALES CADENA");
            ordenarStrings(cadenas, ordenarPorLongitud);

            //Acá y en la funcion crearLsitadoPalabrasReservadas se repite lógica, por el momento dejo así hasta que funcione
            NodoString* aux = cadenas->pri;
            while(aux->sig != NULL) {
                fprintf(reporte, "%s\n", aux->str);
                aux = aux->sig;
            }
            fprintf(reporte, "%s\n", aux->str);
        }
    }

    void crearListadoPalabrasReservadas(FILE* reporte, ListaStrings* palabrasReservadas){
        if(palabrasReservadas->pri != NULL){
            nuevaCategoria(reporte, "PALABRAS RESERVADAS");

            NodoString* aux = palabrasReservadas->pri;
            while(aux->sig != NULL) {
                fprintf(reporte, "%s\n", aux->str);
                aux = aux->sig;
            }
            fprintf(reporte, "%s\n", aux->str);
        }
    }

//todo: estas 3 funciones repiten lógica
    void crearListadoCtesOctales(FILE* reporte, ListaInt* octales){
        if(octales->pri != NULL){
            nuevaCategoria(reporte, "CONSTANTES OCTALES");

            NodoInt* aux = octales->pri;
            while(aux->sig != NULL) {
                fprintf(reporte, "%d\n", aux->valor);
                aux = aux->sig;
            }
            fprintf(reporte, "%d\n", aux->valor);
        }
    }

    void crearListadoCtesHexadecimales(FILE* reporte, ListaInt* hexadecimales){
        if(hexadecimales->pri != NULL){
            nuevaCategoria(reporte, "CONSTANTES HEXADECIMALES");

            NodoInt* aux = hexadecimales->pri;
            while(aux->sig != NULL) {
                fprintf(reporte, "%d\n", aux->valor);
                aux = aux->sig;
            }
            fprintf(reporte, "%d\n", aux->valor);
        }
    }

    void crearListadoCtesDecimales(FILE* reporte, ListaInt* decimales, int acumuladorDecimal){
        if(decimales->pri != NULL){
            nuevaCategoria(reporte, "CONSTANTES DECIMALES");

            NodoInt* aux = decimales->pri;
            while(aux->sig != NULL) {
                fprintf(reporte, "%d\n", aux->valor);
                aux = aux->sig;
            }
            fprintf(reporte, "%d\n", aux->valor);
            fprintf(reporte, "La suma de todas las constantes decimales es %d", acumuladorDecimal);
        }
    }

//todo: a partir de acá falta adaptar a estructuras de datos con memoria dinámica

    void crearListadoCtesReales(FILE* reporte, double reales[], int realesEncontrados){
        if(realesEncontrados){
            nuevaCategoria(reporte, "CONSTANTES REALES");
            for(int i=0; i<realesEncontrados; i++){
                int parteEntera = (int)reales[i];
                double mantisa = reales[i] - parteEntera;
                fprintf(reporte, "Mantisa: %f // Parte entera: %d\n", mantisa, parteEntera);
            }
        }
    }

    void crearListadoCtesCaracter(FILE* reporte, char caracteres[], int caracteresEncontrados){
        if(caracteresEncontrados){
            nuevaCategoria(reporte, "CONSTANTES CARACTER");
            for(int i=0; i<caracteresEncontrados; i++){
                fprintf(reporte, "%c\n", caracteres[i]);
            }
        }
    }

    void crearListadoComentarios(FILE* reporte, ListaStrings* comentarios){
        if(comentarios->pri != NULL){
            nuevaCategoria(reporte, "COMENTARIOS");
            NodoString* aux = comentarios->pri;

            while(aux->sig != NULL) {
                if(aux->valor == 0) {
                    fprintf(reporte, "Comentario de una linea: ");
                } else {
                    fprintf(reporte, "Comentario de multiples lineas: ");
                }
                fprintf(reporte, "%s", aux->str);
                aux = aux->sig;
            }
            if(aux->valor == 0) {
                fprintf(reporte, "Comentario de una linea: ");
            } else {
                fprintf(reporte, "Comentario de multiples lineas: ");
            }
            fprintf(reporte, "%s", aux->str);
        }
    }

    void crearListadoOperadoresCtesPuntuacion(FILE* reporte, ListaStrings* lista) {
        if(lista->pri != NULL) {
            nuevaCategoria(reporte, "OPERADORES / CARACTERES DE PUNTUACION");
            NodoString* aux = lista->pri;

            while(aux->sig != NULL) {
                fprintf(reporte, "%s aparece %d veces\n", aux->str, aux->valor);
                aux = aux->sig;
            }
            fprintf(reporte, "%s aparece %d veces\n", aux->str, aux->valor);
        }
    }
    
    
    void crearListadoNoReconocidos(FILE* reporte, ListaStrings* noReconocidos){
       if(noReconocidos->pri != NULL) {
            nuevaCategoria(reporte, "TOKENS NO RECONOCIDOS");
            NodoString* aux = noReconocidos->pri;

            while(aux->sig != NULL) {
                fprintf(reporte, "Token no reconocido en linea %d: \t%s\n", aux->valor, aux->str);
                aux = aux->sig;
            }
            fprintf(reporte, "Token no reconocido en linea %d: \t%s\n", aux->valor, aux->str);

       }
   }
