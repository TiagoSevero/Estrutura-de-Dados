all: pilha

pilha: pilha.o main.o metodosAlternativos.o
	gcc pilha.o main.o metodosAlternativos.o -o pilha 

main.o: pilha.h pilha.c main.c metodosAlternativos.c
	gcc -c pilha.c main.c metodosAlternativos.c	

metodosAlternativos.o: pilha.h metodosAlternativos.c
	gcc -c metodosAlternativos.c

pilha.o: pilha.h pilha.c
	gcc -c pilha.c
clean: 
	rm *~ *.o
