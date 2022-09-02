output.txt: parse trial_test.c 
	./parse < trial_test.c > output.txt

parse: lex.yy.c parser.c definitions.h
	gcc lex.yy.c parser.c -lfl -o parse

lex.yy.c: flex_tool.l
	flex flex_tool.l

clean: 
	rm ./parse lex.yy.c output.txt