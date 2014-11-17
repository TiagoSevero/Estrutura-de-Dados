#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct tno{

	int dado;
	struct tno * prox;
}no;

typedef struct tfila{

	no * inicio;
	no * fim;
}fila;


void criarFila(fila *l);


bool filaVazia (fila *l);


bool limparFila(fila *l);


bool enfileirar(fila *l, int n);


bool desenfileirar(fila *l, int *dado);


no * buscarFila(fila f, int valor);


void imprimir(fila f);


int tamanhoFila(fila f);


void ordenar(fila f);


