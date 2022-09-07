output.txt: parse.out test.c 
	./parse.out < test.c > output.txt

parse.out: lex.yy.c 20CS30030_20CS30024_parser.c definitions.h
	gcc lex.yy.c 20CS30030_20CS30024_parser.c -lfl -o parse.out

lex.yy.c: 20CS30030_20CS30024_flex_tool.l
	flex 20CS30030_20CS30024_flex_tool.l

clean: 
	rm ./parse.out lex.yy.c output.txt