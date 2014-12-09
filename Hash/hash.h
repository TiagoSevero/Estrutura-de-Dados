#include <stdio.h>
#include <stdlib.h>

#define MAX 10

typedef struct info{

	int dado;
	char status;
	struct info *prox;

}no;

typedef struct{ 
	
	no vetor[MAX];
}tabela;


int funcHash(int num);


void iniciarHash(tabela *t);


int inserirHash(tabela *t, int num);
	
	
int removerHash(tabela *t, int num);	


no* buscarHash(tabela *t, int num);


void imprimir(tabela *t, int num);


