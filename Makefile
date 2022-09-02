output.txt: parser trial_test.c 
	./parser < trial_test. > output.txt

parser: lex.yy.c
	gcc lex.yy.c -lfl -o parser
	
lex.yy.c: flex_tool.l parser.c definitions.h 
	flex flex_tool.l parser.c

clean: 
	rm parser lex.yy.c output.txt