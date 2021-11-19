//#include<stdio.h>

char prueba(char ab, int* ac, float ad);

char prueba(char c, int* d, float e) {
    return c;
}

void sumar(float a, int b);

int hola();

void sumar(float a, int b) {
    printf("a + b");
}

int hola() {
    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}


void saludar(char* nombre) {
    printf("Hola %s\n", nombre);
}

void saludar(char* nombre) {
    printf("Hola %s\n", nombre);
}

int main() {
    
    int a;
    float f;
    int g;

    sumar(f, g);
    sumar(f, f);

    hola();
    hola(a);

    saludar(485);
    saludar("Mundo");


    prueba(f, g, f);

    return 0;
}

