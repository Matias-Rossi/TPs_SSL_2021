all: bison flex
	gcc bison.tab.c lex.yy.c listas.c reporte.c listasTp5.c controlarSuma.c -Iinclude -Wall -O2 -DNDEBUG -g -O0

bison: 
	bison -d bison.y --report=state --debug

flex: 
	flex flex.l

clean:
	rm bison.tab.c
	rm bison.tab.h
	rm lex.yy.c