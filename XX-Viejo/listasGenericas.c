#include"tp5.h"

/*-------------------------------LISTAS GENERICAS----------------------------------*/

list* inicializarLista(list* lista){
    lista = (list*) malloc(sizeof(list));
    lista->cantElementos = 0;
    lista->data = NULL;

    return lista;
}

void agregarElemento(list* lista, void* data, int data_size){
    //printf("\nDir de data que me llego: %p\n", data);
    
    

    //printf("\nDir de data que agregue: %p\n", nuevoElemento->data);

    if(lista->data == NULL){
        printf("\n%p\n", lista->data);
        lista->data = data;     //Se supone que data ya está alocado en memoria
        printf("\n%p\n", lista->data);
        int a;
        scanf("%d", &a);
    } else {

        list* nuevoElemento = malloc(sizeof(list));
        nuevoElemento->data = malloc(data_size);
        memcpy(nuevoElemento->data, data, data_size);
        nuevoElemento->sgte = NULL;

        if(!lista->sgte){
            lista->sgte = nuevoElemento;
            
        }
        else {
            list* aux = lista->sgte;
            while(aux->sgte) {
                aux=aux->sgte;
            }
            aux->sgte = nuevoElemento;
        }
    }

    
    lista->cantElementos++;
}


/*-------------------------------VARIABLES----------------------------------*/

int variableEstaDeclarada(char* id, list* lista){
    list* aux = lista->sgte;

    for(int i=0; i<lista->cantElementos; i++){
        variable* data = aux->data;
        if(!strcmp(data->nombre_variable, id)){
            return 1;
        }
        aux = lista->sgte;
    }
    return 0;
}

/*-------------------------------FUNCIONES----------------------------------*/

int funcionEstaDeclarada(char* id, list* lista){
    list* aux = lista->sgte;

    for(int i=0; i<lista->cantElementos; i++){
        funcion* data = aux->data;
        if(!strcmp(data->nombre_funcion, id)){
            return 1;
        }
        aux = lista->sgte;
    }
    return 0;
}

/*-------------------------------TOKENS NO RECONOCIDOS----------------------------------*/

listaTokensNoReconocidos* inicializarListaDeTokensNoReconocidos(listaTokensNoReconocidos* lista) {
    lista = (listaTokensNoReconocidos*) malloc(sizeof(listaTokensNoReconocidos));
    lista->cantElementos = 0;
    lista->pri = NULL;
    return lista;
}

void agregar_token_no_reconocido(listaTokensNoReconocidos** lista, char* token, int linea){
    tokensNoReconocidos* nuevo = (tokensNoReconocidos*) malloc(sizeof(tokensNoReconocidos));
    nuevo->token = token;
    nuevo->linea = linea;
    nuevo->sig = NULL;
    if((*lista)->pri != NULL){
        tokensNoReconocidos* ultimo = (*lista)->pri;
        while(ultimo->sig != NULL){
            ultimo = ultimo->sig;
        }
        ultimo->sig = nuevo;
    }
    else 
    (*lista)->pri = nuevo;

    (*lista)->cantElementos++;
    printf("\nseg\n");
}

//todo: hacer frees