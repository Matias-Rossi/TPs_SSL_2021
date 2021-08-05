#include "categorias-lexicas.h"


/* --- Creación del reporte --- */

    //Crea un separador a modo de título
    void nuevaCategoria(FILE* reporte, char* seccion){
        fprintf(reporte,"\n\n--%s--\n", seccion);
    }

    void crearListadoIdentificadores(FILE* reporte, ListaIdentificadores* identificadores){
        if(identificadores->pri != NULL){                                                       //Si la lista no esta vacía
            ordenarIdentificadores(identificadores, ordenarAlfabeticamente);
            Identificador* aux = identificadores->pri;

            nuevaCategoria(reporte, "IDENTIFICADORES");
            while(aux->sig != NULL) {                                                           //Itera por los nodos
                fprintf(reporte, "%s: %d veces\n" ,aux->nombre, aux->ocurrencias);              //El while podría reemplazarse por un do{}(while)
                aux = aux->sig;
            }
            fprintf(reporte, "%s: %d veces\n" ,aux->nombre, aux->ocurrencias);

            liberarListaIdentificadores(identificadores);
        }
    }

    void crearListadoLiteralesCadena(FILE* reporte, ListaStrings* cadenas){
        if(cadenas->pri != NULL){
            nuevaCategoria(reporte, "LITERALES CADENA");
            ordenarStrings(cadenas, ordenarPorLongitud);

            //Acá y en la funcion crearListadoPalabrasReservadas se repite lógica, por el momento dejo así hasta que funcione
            NodoString* aux = cadenas->pri;
            while(aux->sig != NULL) {
                fprintf(reporte, "%s\n", aux->str);
                aux = aux->sig;
            }
            fprintf(reporte, "%s\n", aux->str);
        }
        liberarListaStrings(cadenas);
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
        liberarListaStrings(palabrasReservadas);
    }

    //Funcion igual al resto que toma un par de parámetros adicionales para evitar repetir (más) lógica
    void crearListadoCtesInt(FILE* reporte, ListaInt* lista, int base, int* acumuladorDecimal){
        if(lista->pri != NULL){
            switch(base){
                case 8: nuevaCategoria(reporte, "CONSTANTES OCTALES"); break;
                case 10: nuevaCategoria(reporte, "CONSTANTES DECIMALES"); break;
                case 16: nuevaCategoria(reporte, "CONSTANTES HEXADECIMALES"); break;
                default: printf("Error de base en crearListadoCtesInt\n");
            }

            NodoInt* aux = lista->pri;
            while(aux->sig != NULL) {
                fprintf(reporte, "%d\n", aux->valor);
                aux = aux->sig;
            }
            fprintf(reporte, "%d\n", aux->valor);

            if(base == 10) {
                fprintf(reporte, "La suma de todas las constantes decimales es %d\n", *acumuladorDecimal);
            }
        }
        liberarListaInt(lista);

    }

    void crearListadoCtesReales(FILE* reporte, ListaDouble* reales){
        if(reales->pri > 0){
            nuevaCategoria(reporte, "CONSTANTES REALES");

            NodoDouble* iterador = reales->pri;
            NodoDouble* siguiente = iterador->sig;
            while(siguiente){
                int parteEntera = iterador->valor;
                double mantisa = iterador->valor - parteEntera;
                fprintf(reporte, "Mantisa: %f // Parte entera: %d\n", mantisa, parteEntera);

                iterador = siguiente;
                siguiente = iterador->sig;
            }
            int parteEntera = iterador->valor;
            double mantisa = iterador->valor - parteEntera;
            fprintf(reporte, "Mantisa: %f // Parte entera: %d\n", mantisa, parteEntera);
        }
        liberarListaDouble(reales);
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
                    fprintf(reporte, "Comentario de multiples lineas: \n");
                }
                fprintf(reporte, "%s\n", aux->str);
                aux = aux->sig;
            }
            if(aux->valor == 0) {
                fprintf(reporte, "Comentario de una linea: ");
            } else {
                fprintf(reporte, "Comentario de multiples lineas: ");
            }
            fprintf(reporte, "%s\n", aux->str);
        }
        liberarListaStrings(comentarios);
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
        liberarListaStrings(lista);
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
        liberarListaStrings(noReconocidos);

   }


/*** Liberación de memoria ***/

void liberarListaIdentificadores(ListaIdentificadores* lista){
    //Lista vacía
    if(lista->pri == NULL) {    
        free(lista);

    //Lista con elementos
    } else {                    
        Identificador* borrador = lista->pri;
        Identificador* siguiente;

        //Minetras haya más elementos
        while(borrador->sig) {  
            siguiente = borrador->sig;
            free(borrador->nombre);
            free(borrador);
            borrador = siguiente;
        }
        //Para el último elemento
        siguiente = borrador->sig;
        free(borrador->nombre);
        free(borrador);
    }
}

void liberarListaStrings(ListaStrings* lista){
    //Lista vacía
    if(lista->pri == NULL) {    
        free(lista);

    //Lista con elementos
    } else {                    
        NodoString* borrador = lista->pri;
        NodoString* siguiente;

        //Minetras haya más elementos
        while(borrador->sig) {  
            siguiente = borrador->sig;
            free(borrador->str);
            free(borrador);
            borrador = siguiente;
        }
        //Para el último elemento
        siguiente = borrador->sig;
        free(borrador->str);
        free(borrador);
    }
}

void liberarListaInt(ListaInt* lista){
    //Lista vacía
    if(lista->pri == NULL) {    
        free(lista);

    //Lista con elementos
    } else {                    
        NodoInt* borrador = lista->pri;
        NodoInt* siguiente;

        //Minetras haya más elementos
        while(borrador->sig) {  
            siguiente = borrador->sig;
            free(borrador);
            borrador = siguiente;
        }
        //Para el último elemento
        siguiente = borrador->sig;
        free(borrador);
    }
}

void liberarListaDouble(ListaDouble* lista) {
    //Lista vacía
    if(lista->pri == NULL) {    
        free(lista);

    //Lista con elementos
    } else {                    
        NodoDouble* borrador = lista->pri;
        NodoDouble* siguiente;

        //Minetras haya más elementos
        while(borrador->sig) {  
            siguiente = borrador->sig;
            free(borrador);
            borrador = siguiente;
        }
        //Para el último elemento
        siguiente = borrador->sig;
        free(borrador);
    }
}

/* 
La vida sería más hermosa si C tuviera templates 
                                    -Paulo Coelho 
*/