all: bison flex
	gcc bison.tab.c lex.yy.c listas.c reporte.c listasTp5.c -Iinclude -w -O2 -DNDEBUG -g -O0

bison: 
	bison -d bison.y --report=state -W --warnings=none

flex: 
	flex flex.l

clean:
	rm bison.tab.c
	rm bison.tab.h
	rm lex.yy.c