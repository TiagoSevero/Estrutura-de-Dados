all: processo

processo: processo.o main.o
	gcc processo.o main.o -o processo

main.o: main.c processo.h processo.c
	gcc -c main.c

processo.o: processo.h processo.c
	gcc -c processo.c
clean: 
	rm *~ *.o 
