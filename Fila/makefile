all: fila

fila: fila.o metodosAlternativos.o main.o
	gcc fila.o main.o metodosAlternativos.o -o fila 

main.o: fila.h  fila.c main.c metodosAlternativos.c 
	gcc -c fila.c main.c metodosAlternativos.c	

metodosAlternativos.o: metodosAlternativos.c fila.h 
	gcc -c metodosAlternativos.c 

fila.o: fila.h fila.c
	gcc -c fila.c
clean: 
	rm *~ *.o
