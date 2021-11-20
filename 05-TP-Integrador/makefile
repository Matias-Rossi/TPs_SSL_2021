# CAMBIAR ".OUT" POR ".EXE" PARA WINDOWS. No commitear dicho cambio por favor.
all: bison flex
	gcc bison.tab.c lex.yy.c listas.c reporte.c parametrosFunciones.c verificarOperaciones.c errores.c validarIdentificadores.c -Iinclude -w  -O2 -DNDEBUG -g -O0 -o "bin/tpIntegrador.out"

# PARA ACTIVAR O DESACTIVAR DEBUG, CAMBIAR ENTRE 1 y 0 LA VARIABLE QUE APARECE EN EL MAIN DE BISON.Y
bison: 
	bison -d bison.y --report=state -W --debug

flex: 
	flex flex.l

clean:
	rm bison.tab.c
	rm bison.tab.h
	rm lex.yy.c