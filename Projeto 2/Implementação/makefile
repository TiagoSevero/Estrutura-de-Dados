all: projeto

projeto: projeto2.o main.o
	gcc projeto2.o main.o -o projeto2

main.o: projeto2.h projeto2.c main.c
	gcc -c projeto2.c main.c

projeto2.o: projeto2.h projeto2.c
	gcc -c projeto2.c

clean: 
	rm *~ *.o
