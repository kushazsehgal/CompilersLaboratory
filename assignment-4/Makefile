asgn4_20CS30024_20CS30030_output.txt: parser asgn4_20CS30024_20CS30030_test.c
	./parser < asgn4_20CS30024_20CS30030_test.c > asgn4_20CS30024_20CS30030_output.txt

parser: lex.yy.o y.tab.o asgn4_20CS30024_20CS30030_main.o
	gcc lex.yy.o y.tab.o asgn4_20CS30024_20CS30030_main.o -lfl -o parser

asgn4_20CS30024_20CS30030_main.o: asgn4_20CS30024_20CS30030_main.c
	gcc -c asgn4_20CS30024_20CS30030_main.c

lex.yy.o: lex.yy.c
	gcc -c lex.yy.c

y.tab.o: y.tab.c
	gcc -c y.tab.c

lex.yy.c: asgn4_20CS30024_20CS30030.l y.tab.h
	flex asgn4_20CS30024_20CS30030.l

y.tab.c y.tab.h: asgn4_20CS30024_20CS30030.y
	bison -dty --report=all asgn4_20CS30024_20CS30030.y

clean:
	rm parser asgn4_20CS30024_20CS30030_main.o lex.yy.* y.tab.* y.output
