all: hash

hash: hash.o main.o
	gcc hash.o main.o -o hash

main.o: hash.h hash.c main.c
	gcc -c hash.c main.c

hash.0: hash.h hash.c
	gcc -c hash.c

clean:
	rm *.o *.*~
