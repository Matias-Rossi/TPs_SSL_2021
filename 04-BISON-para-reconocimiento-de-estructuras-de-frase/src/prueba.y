%{
    //DEFINICIONES Y DECLARACIONES DE C

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int yylex(void);
int yywrap(){
    return(1);
}
void yyerror (char const *s) {
    fprintf (stderr, "%s\n", s);
}
extern FILE* yyin;
extern int yylineno;
int analisisCorrecto = 1;

%}
//DEFINICIONES DE BISON

%union{
    int ival;
    double dval;
    char* cval;
}

%token <cval> IDENTIFICADOR
%token <cval> NOMBRE_TIPO
%token <cval> CONSTANTE_STRING
%token <ival> CONSTANTE_NUMERO
%token <cval> OPER_ASIGNACIONES
%token <cval> OPER_IGUALDADES
%token <cval> OPER_COMPARATIVAS
%token <cval> OPER_BASICAS
%token <cval> OPER_MULTIPLICATIVAS
%token <cval> OPER_INCREMENTALES
%token <cval> OPER_UNARIO

%token <cval> OPCIONAL //listaArgumentos(op)


%%

expresion: expAsignacion
           ;

expAsignacion: expCondicional
               | expUnaria OPER_ASIGNACIONES expAsignacion
               ;

expCondicional: expOr
                | expOr '?' expresion ':' expCondicional
                ;

expOr:  expAnd
        | expOr '||' expAnd
        ;

expAnd: expIgualdad
        | expAnd '&&' expIgualdad
        ;

expIgualdad:    expRelacional
                | expIgualdad OPER_IGUALDADES expRelacional
                ;

expRelacional:  expAditiva
                | expRelacional OPER_COMPARATIVAS expAditiva
                ;

expAditiva: expMultiplicativa
            | expAditiva OPER_BASICAS expMultiplicativa
            ;

expMultiplicativa:  expUnaria
                    | expMultiplicativa OPER_MULTIPLICATIVAS expUnaria
                    ;

expUnaria:  expPostfijo
            | OPER_INCREMENTALES expUnaria
            | OPER_UNARIO expUnaria
            | 'sizeof(' NOMBRE_TIPO ')'
            ;

expPostfijo:    expPrimaria
                | expPostfijo '[' expresion ']'
                | expPostfijo '(' listaArgumentos ')' | OPCIONAL
                ;

listaArgumentos:    expAsignacion
                    | listaArgumentos ',' expAsignacion
                    ;

expPrimaria:    IDENTIFICADOR
                | CONSTANTE_NUMERO
                | CONSTANTE_STRING
                | '(' expresion ')'
                ;


%%

// DECLARACIONES

//CÓDIGO C DE USUARIO -> Código C que ejecuta el analizado     léxico
int yyerror(const char* msg){
    printf("Fallo del analisis en la linea %d %s", yylineno, msg);
    analisisCorrecto = 0;
    return 0;
}

int main (int argc, char **argv)
{
    yyin = fopen(argv[1], "r");
    yyparse();
    fclose(yyin);

    if(analisisCorrecto){
        printf("Analisis finalizado correctamente");
    }

    return 0;
}