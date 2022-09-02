output.txt: parse.out trial_test.c 
	./parse.out < trial_test.c > output.txt

parse.out: lex.yy.c parser.c definitions.h
	gcc lex.yy.c parser.c -lfl -o parse.out

lex.yy.c: flex_tool.l
	flex flex_tool.l

clean: 
	rm ./parse.out lex.yy.c output.txt