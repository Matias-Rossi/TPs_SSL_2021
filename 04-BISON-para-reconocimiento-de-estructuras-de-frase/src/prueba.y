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
    int int;
    double double;
    string string;
}

%type <string> expresion
%type <string> expAsignacion
%type <string> expCondicional
%type <string> expOr
%type <string> expAnd
%type <string> expIgualdad
%type <string> expRelacional
%type <string> expAditiva
%type <string> expMultiplicativa
%type <string> expUnaria
%type <string> expPostfijo
%type <string> listaArgumentos
%type <string> expPrimaria

%token <string> IDENTIFICADOR
%token <string> NOMBRE_TIPO
%token <string> CONSTANTE_STRING
%token <int> CONSTANTE_NUMERO
%token <string> OPER_ASIGNACIONES
%token <string> OPER_IGUALDADES
%token <string> OPER_COMPARATIVAS
%token <string> OPER_BASICAS
%token <string> OPER_MULTIPLICATIVAS
%token <string> OPER_INCREMENTALES
%token <string> OPER_UNARIO

%token <string> OPCIONAL //listaArgumentos(op)


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