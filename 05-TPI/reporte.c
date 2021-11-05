#include"tp5.h"

void nuevaCategoria(char* seccion){
    printf("\n\n--%s--\n", seccion);
}

/* Reporte TP integrador */

//Lista de variables declaradas indicando el tipo de cada una. (Utilizar TS)
void imprimirVariables(list* listaVariables) {
    if(listaVariables->data == NULL) return;        //Salir si la lista está vacía
    nuevaCategoria('Variables');
    
    list* iterador = listaVariables;
    do {
        variable* data = listaVariables->data;
        if(data->puntero) {
            print("%s* %s\n", data->tipo, data->nombre_variable);
        }
        else {
            print("%s %s\n", data->tipo, data->nombre_variable);
        }

        listaVariables = listaVariables->sgte;
    } while(listaVariables != NULL);
    
}


//Lista de funciones declaradas indicando el tipo de parámetro que devuelve y cantidad y tipos de parámetros que recibe. (Utilizar TS)
void imprimirFunciones(list* listaFunciones) {
    if(listaFunciones->data == NULL) return;        //Salir si la lista está vacía
    nuevaCategoria('Funciones');
    
    list* iterador = listaFunciones;
    do {
        funcion* data = listaFunciones->data;
        char* tipo_funcion;
        if(data->puntero) {
            sprintf(tipo_funcion, "*%s", data->tipo_salida);
        } else {
            strcpy(tipo_funcion, data->tipo_salida);
        }

        printf("Función %s retorna %s y recibe %d parámetros de tipo ", data->nombre_funcion, tipo_funcion, listaFunciones->cantElementos);
        
        //Cortar si no recibe parámetros
        if(data->params != NULL) {
            printf('<No recibe>\n');
        } else {

            //Imprimir parametros uno a uno
            list* aux = data->params;
            do {
                variable* data_parametro = aux->data;

                char* tipo_parametro;
                if(data_parametro->puntero) {
                    sprintf(tipo_parametro, "*%s", data_parametro->tipo);
                } else {
                    strcpy(tipo_parametro, data_parametro->tipo);
                }
                printf("%s, ", tipo_parametro);

                aux = aux->sgte;
            }while(aux != NULL);

            printf("\n");
        }

        listaFunciones = listaFunciones->sgte;
    } while(listaFunciones != NULL);
    
}

//Error léxicos encontrados (si los hay) - (Implementar en Flex, archivo.L)
void imprimirTokensNoReconocidos(listaTokensNoReconocidos* lTokens,  char* tListado){
    if(lTokens->pri != NULL){
        tokensNoReconocidos* aux = lTokens->pri;

        nuevaCategoria(tListado);
        printf("TOKEN NO RECONOCIDO\t\tNUMERO DE LINEA\n");

        while(aux->sig != NULL) {
            printf("%s\t\t%d\n" ,aux->token, aux->linea);              
            aux = aux->sig;
        }                          //Itera por los nodos
        printf("%s\t\t%d\n" ,aux->token, aux->linea);

        //liberarLista(lTokens);
    }
}

//TODO: Funciones reporte errores
//Errores sintácticos encontrados (si los hay) (Implementar en Bison, utilizar token error)
//Errores semánticos encontrados (si los hay) (Implementar Rutinas Semánticas con TS)









/* Fin Reporte TP integrador */

/* Errores */


char * sacar_ultimo_caracter(char* var){
    char* min_var = malloc(strlen(var));
    memcpy(min_var, var, strlen(var) - 1);
    min_var[strlen(var)-1]='\0';

    return min_var;
}