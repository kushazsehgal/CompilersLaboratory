output.txt: parser trial_test.c 
	./parser < trial_test > output.txt

parser: lex.yy.c parser.c
	gcc lex.yy.c parser.c -lfl -o parse
lex.yy.c: flex_tool.l 
	flex flex_tool.l 

clean: 
	rm parser lex.yy.c output.txt