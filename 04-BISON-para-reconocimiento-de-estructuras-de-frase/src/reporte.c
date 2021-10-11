#define INT 1
#define CHAR 2
#define LONG 3
#define DOUBLE 4
#define SIGNED 5
#define UNSIGNED 6
#define ENUM 7
#define VOID 8


typedef struct 
{
    char* var;
    int var_size;
    int tDato;
    struct nodo* sig;
} nodo;

typedef struct 
{
    char* var;
    int var_size;
    int tDato;
} nodo_out;

void inicializarPila(nodo** p) 
{
    (*p) = (nodo*) malloc(sizeof(nodo));
    (*p)->sig = NULL;
}

void push(nodo** p, char* c, int tDato)
{
    //Declaro el nuevo nodo
    nodo* nuevo = (nodo*) malloc(sizeof(nodo) + strlen(c));
    
    //Le cargo los valores
    strcpy(nuevo->var, c);
    nuevo->var_size = strlen(c);
    nuevo->tDato = tDato;

    //Coloco el nodo en la pila
    nuevo->sig = (*p);
    (*p) = nuevo;
}

nodo_out* pop(nodo** p) 
{
    if((*p) != NULL)
    {
        nodo_out valor* = malloc(sizeof(nodo_out));
        strcpy(valor->var, (*p)->var);
        valor->var_size = strlen((*p)->var);
        valor->tDato = (*p)->tDato;
        return valor;
    }
}













void vaciarPila(Nodo** p)
{
    while((*p) != NULL)
    {
        Nodo* aux = *p;
        (*p) = (*p)->sig;
        free(aux);
    }
}

char cimaDePila(Nodo* p)
{
    if(p != NULL)
    {
        return p->info;
    }
}

void mostrarPila(Nodo *p)
{
    int i;
    Nodo* aux = p;

    for(int i=0; aux != NULL; i++)
    {
        printf("\t\t\t\t\t|%c|\n", aux->info);
        aux = aux->sig;
    }

    printf("\t\t\t\t\t----\n");
}

int pilaVacia(Nodo *p)
{
    return p==NULL? 1 : 0;
}