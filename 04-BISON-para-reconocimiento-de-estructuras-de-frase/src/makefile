all: bison flex
	gcc bison.tab.c lex.yy.c

bison: 
	bison -d bison.y

flex: 
	flex flex.l

clean:
	rm bison.tab.c
	rm bison.tab.h
	rm lex.yy.c