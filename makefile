all: mystr.o
	gcc -o hello mystr.o

mystr.o:mystr.c
	gcc -c mystr.c

run:
	./hello

clear:
	rm *.o
