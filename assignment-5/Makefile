parser.out: lex.yy.o y.tab.o asgn5_20CS30030_20CS30024_translator.o
	g++ lex.yy.o y.tab.o asgn5_20CS30030_20CS30024_translator.o -lfl -o parser.out

asgn5_20CS30030_20CS30024_translator.o: asgn5_20CS30030_20CS30024_translator.cxx asgn5_20CS30030_20CS30024_translator.h
	g++ -c asgn5_20CS30030_20CS30024_translator.cxx

lex.yy.o: lex.yy.c
	g++ -c lex.yy.c 

y.tab.o: y.tab.c
	g++ -c y.tab.c

lex.yy.c: asgn5_20CS30030_20CS30024.l y.tab.h asgn5_20CS30030_20CS30024_translator.h
	flex asgn5_20CS30030_20CS30024.l

y.tab.c y.tab.h: asgn5_20CS30030_20CS30024.y
	bison -dty asgn5_20CS30030_20CS30024.y

clean:
	rm parser.out asgn5_20CS30030_20CS30024_translator.o lex.yy.* y.tab.* y.output

# test: parser.out
# 	@echo "Running test 1 (Arithmetic, shift, and bit expressions)"
# 	./parser.out < asgn5_20CS30030_20CS30024_test1.c > asgn5_20CS30030_20CS30024_quads1.out
# 	@echo "Test 1 complete\n"

# 	@echo "Running test 2 (Unary expressions and operators)"
# 	./parser.out < asgn5_20CS30030_20CS30024_test2.c > asgn5_20CS30030_20CS30024_quads2.out
# 	@echo "Test 2 complete\n"

# 	@echo "Running test 3 (Relational and boolean operators with if-else blocks)"
# 	./parser.out < asgn5_20CS30030_20CS30024_test3.c > asgn5_20CS30030_20CS30024_quads3.out
# 	@echo "Test 3 complete\n"

# 	@echo "Running test 4 (Arrays and pointers)"
# 	./parser.out < asgn5_20CS30030_20CS30024_test4.c > asgn5_20CS30030_20CS30024_quads4.out
# 	@echo "Test 4 complete\n"

# 	@echo "Running test 5 (Declarations and assignments)"
# 	./parser.out < asgn5_20CS30030_20CS30024_test5.c > asgn5_20CS30030_20CS30024_quads5.out
# 	@echo "Test 5 complete\n"

# 	@echo "Running test 6 (Loops)"
# 	./parser.out < asgn5_20CS30030_20CS30024_test6.c > asgn5_20CS30030_20CS30024_quads6.out
# 	@echo "Test 6 complete\n"

# 	@echo "Running test 7 (Function calls)"
# 	./parser.out < asgn5_20CS30030_20CS30024_test7.c > asgn5_20CS30030_20CS30024_quads7.out
# 	@echo "Test 7 complete\n"

# 	@echo "Running test 8 (General file)"
# 	./parser.out < asgn5_20CS30030_20CS30024_test8.c > asgn5_20CS30030_20CS30024_quads8.out
# 	@echo "Test 8 complete\n"