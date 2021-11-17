all: bison flex
	gcc bison.tab.c lex.yy.c listas.c reporte.c parametrosFunciones.c verificarSuma.c errores.c -Iinclude -w -O2 -DNDEBUG -g -O0 -o "bin/tpIntegrador.out"

bison: 
	bison -d bison.y --report=state -W --warnings=none

flex: 
	flex flex.l

clean:
	rm bison.tab.c
	rm bison.tab.h
	rm lex.yy.c