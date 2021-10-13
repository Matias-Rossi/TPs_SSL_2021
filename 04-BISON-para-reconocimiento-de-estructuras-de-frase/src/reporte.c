#include"tp4.h"

void inicializarPila(nodo** p) 
{
    (*p) = (nodo*) malloc(sizeof(nodo));
    (*p)->sig = NULL;
}

void push(nodo** p, char* c, int idVar)
{
    //Declaro el nuevo nodo
    nodo* nuevo = (nodo*) malloc(sizeof(nodo) + strlen(c));
    
    //Le cargo los valores
    strcpy(nuevo->var, c);
    nuevo->var_size = strlen(c);
    nuevo->idVar = idVar;

    //Coloco el nodo en la pila
    nuevo->sig = *p;
    (*p) = nuevo;
}

nodo_out* pop(nodo** p) 
{
    if((*p) != NULL)
    {
        //Creo un nodo_out para devolver los valores
        nodo_out *valor = malloc(sizeof(nodo_out));

        //Cargo la informacion en el nodo_out
        strcpy(valor->var, (*p)->var);
        valor->var_size = strlen((*p)->var);
        valor->tDato = (*p)->tDato;

        //Hago que la pila apunte al siguiente nodo
        nodo* aux = *p;
        (*p) = (*p)->sig;
        free(aux);

        //Devuelvo el valor
        return valor;
    }
}

void imprimirEnReporte(FILE* fpReporte, nodo *p)
{
    nodo* aux = p;

    for(int i=0; aux != NULL; i++)
    {
        fputs("\nNombre: \t", fpReporte);
        fputs(p->var, fpReporte);
        fputs("\nTipo: \t", fpReporte);
        fputs(tipo_de_dato(p->tDato), fpReporte);
        aux = aux->sig;
    }
}

char* obtener_tipo(nodo *p, int idVar){
    for (int i = 0; i <= idVar; i++)
    {
        /* code */
    }
    
}

char* tipo_de_dato (int tDato){
    switch (tDato)
    {
    case 1:
        return "Int";
        break;
    case 2:
        return "Char";
        break;
    case 3:
        return "Long";
        break;
    case 4:
        return "Double";
        break;
    case 5:
        return "Short";
        break;
    case 6:
        return "Signed";
        break;
    case 7:
        return "Unsigned";
        break;
    case 8:
        return "Enum";
        break;
    case 9:
        return "Void";
        break;
    default:
        return "TAD";
        break;
    }
}

