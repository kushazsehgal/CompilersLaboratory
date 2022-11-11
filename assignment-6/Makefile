
parser.out: lex.yy.o y.tab.o asgn6_20CS30030_20CS30024_translator.o asgn6_20CS30030_20CS30024_target_translator.o
	g++ lex.yy.o y.tab.o asgn6_20CS30030_20CS30024_translator.o asgn6_20CS30030_20CS30024_target_translator.o -lfl -o parser.out

asgn6_20CS30030_20CS30024_target_translator.o: asgn6_20CS30030_20CS30024_target_translator.cxx asgn6_20CS30030_20CS30024_translator.h
	g++ -c asgn6_20CS30030_20CS30024_target_translator.cxx

asgn6_20CS30030_20CS30024_translator.o: asgn6_20CS30030_20CS30024_translator.cxx asgn6_20CS30030_20CS30024_translator.h
	g++ -c asgn6_20CS30030_20CS30024_translator.cxx

lex.yy.o: lex.yy.c
	g++ -c lex.yy.c

y.tab.o: y.tab.c
	g++ -c y.tab.c

lex.yy.c: asgn6_20CS30030_20CS30024.l y.tab.h asgn6_20CS30030_20CS30024_translator.h
	flex asgn6_20CS30030_20CS30024.l

y.tab.c y.tab.h: asgn6_20CS30030_20CS30024.y
	bison -dty --report=all asgn6_20CS30030_20CS30024.y

libass2_20CS30030.a: ass2_20CS30030.o
	ar -rcs libass2_20CS30030.a ass2_20CS30030.o

ass2_20CS30030.o: ass2_20CS30030.c myl.h
	gcc -c ass2_20CS30030.c

clean:
	rm libass2_20CS30030.a ass2_20CS30030.o parser.out asgn6_20CS30030_20CS30024_translator.o asgn6_20CS30030_20CS30024_target_translator.o lex.yy.* y.tab.* y.output test*

test: parser.out libass2_20CS30030.a
	@echo "Generating assembly files\n"
	./parser.out asgn6_20CS30030_20CS30024_test1 > asgn6_20CS30030_20CS30024_quads1.out
	./parser.out asgn6_20CS30030_20CS30024_test2 > asgn6_20CS30030_20CS30024_quads2.out
	./parser.out asgn6_20CS30030_20CS30024_test3 > asgn6_20CS30030_20CS30024_quads3.out
	./parser.out asgn6_20CS30030_20CS30024_test4 > asgn6_20CS30030_20CS30024_quads4.out
	./parser.out asgn6_20CS30030_20CS30024_test5 > asgn6_20CS30030_20CS30024_quads5.out
	./parser.out asgn6_20CS30030_20CS30024_test6 > asgn6_20CS30030_20CS30024_quads6.out
	./parser.out asgn6_20CS30030_20CS30024_test7 > asgn6_20CS30030_20CS30024_quads7.out
	@echo "Compiling assembly files\n"
	gcc asgn6_20CS30030_20CS30024_test1.s -L. -lass2_20CS30030 -no-pie -o test1
	gcc asgn6_20CS30030_20CS30024_test2.s -L. -lass2_20CS30030 -no-pie -o test2
	gcc asgn6_20CS30030_20CS30024_test3.s -L. -lass2_20CS30030 -no-pie -o test3
	gcc asgn6_20CS30030_20CS30024_test4.s -L. -lass2_20CS30030 -no-pie -o test4
	gcc asgn6_20CS30030_20CS30024_test5.s -L. -lass2_20CS30030 -no-pie -o test5
	gcc asgn6_20CS30030_20CS30024_test6.s -L. -lass2_20CS30030 -no-pie -o test6
	gcc asgn6_20CS30030_20CS30024_test7.s -L. -lass2_20CS30030 -no-pie -o test7
	@echo "Binaries generated. Run using ./test<num>\n\n"
	@echo "Running test1:\n"
	@./test1
	@echo "Running test2:\n"
	@./test2
	@echo "Running test3:\n"
	@./test3
	@echo "Running test4:\n"
	@./test4
	@echo "Running test5:\n"
	@./test5
	@echo "Running test6:\n"
	@./test6
	@echo "Running test7:\n"
	@./test7