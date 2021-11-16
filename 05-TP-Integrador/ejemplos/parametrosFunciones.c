//#include<stdio.h>


void sumar(float a, int b) {
    printf("a + b");
}

int hola() {
    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}

char* prueba(char c, int* d, float e) {
    return c;
}


int main() {
    
    int a;
    float f;
    int g;
    
    //Comprobacion De Tipo Para Parametros de Funciones 
    sumar(f, g); 
    sumar(f, f);
    sumar(f , g , a); 

    hola();
    hola(a);

    return 0;
}

