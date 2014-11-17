#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 10

typedef struct tno{
    
	float P[MAX];
	int topo;

}pilha;

void iniciar(pilha *p);


int pilhaVazia(pilha p);


int pilhacheia(pilha p);


bool empilhar(pilha *p,float dado);


int desempilhar(pilha *p, float * dado);


int elementoTopo(pilha p, float *valor);


void ordenar(pilha *p);


int procurar(pilha p, float dado);
