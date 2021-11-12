all: bison flex
	gcc bison.tab.c lex.yy.c listas.c reporte.c listasGenericas.c -Iinclude -o "tp5.out"

bison: 
	bison -d bison.y --debug --report=state

flex: 
	flex -l flex.l

clean:
	rm bison.tab.c
	rm bison.tab.h
	rm lex.yy.c