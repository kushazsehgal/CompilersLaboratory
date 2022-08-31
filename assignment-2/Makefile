createTest:	main.o	libass2_20CS30030.a
			cc main.o -L. -lass2_20CS30030 -o test.out

main.o: main.c myl.h
			cc -Wall -c main.c

libass2_20CS30030.a: ass2_20CS30030.o
			ar -rcs libass2_20CS30030.a ass2_20CS30030.o

ass2_20CS30030.o: ass2_20CS30030.c
			cc -Wall -c ass2_20CS30030.c

clean:
	rm	test.out main.o libass2_20CS30030.a ass2_20CS30030.o

