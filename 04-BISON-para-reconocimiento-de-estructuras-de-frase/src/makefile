all: bison flex
	gcc bison.tab.c lex.yy.c listas.c reporte.c -Iinclude

bison: 
	bison -d bison.y

flex: 
	flex -l flex.l

clean:
	rm bison.tab.c
	rm bison.tab.h
	rm lex.yy.c