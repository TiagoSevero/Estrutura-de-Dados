#include <stdio.h>
#include <stdlib.h>
#include "hash.h"

int funcHash(int num){

	return (num % MAX) ;
}

void iniciarHash(tabela *t){

	int i;
	
	for(i = 0; i< MAX ; i++){
	
		t->vetor[i].prox = NULL;
		t->vetor[i].status = 'v'; 
	}
}

int inserirHash (tabela *t, int num ){

	int posicao;
	posicao = funcHash(num);
	
	if (t->vetor[posicao].status == 'v'){
	
		t->vetor[posicao].dado = num;
		t->vetor[posicao].prox = NULL;
		t->vetor[posicao].status = 'c';
		return 1;
	}
	
	no *novoNO = (no *) malloc (sizeof(no));	
	
	if(novoNO == NULL)
		return 0;
	else{
		
		novoNO->dado = t->vetor[posicao].dado;
		novoNO->prox = t->vetor[posicao].prox; 
		novoNO->status = t->vetor[posicao].status;
		t->vetor[posicao].prox = novoNO; 
		t->vetor[posicao].dado = num;	
		t->vetor[posicao].status = 'c';
	}
	return 1;
}

int removerHash(tabela *t, int num){

	int posicao, flag = 0;
	no *anterior, *atual;
	
	posicao = funcHash(num);
	
	anterior = &(t->vetor[posicao]);
	atual = t->vetor[posicao].prox;
		
	if(t->vetor[posicao].dado == num){
		t->vetor[posicao].dado = 0;
		t->vetor[posicao].status = 'v';
	}
	else{
		while(atual != NULL){
			anterior = atual;
			atual = atual ->prox;
			if(atual->dado == num){
				flag = 1;
				break;
			}
		}
		if (!flag)
			return 0;
		anterior->prox = atual->prox; 
		free(atual);
	}
	return 1;
}

no* buscarHash(tabela *t, int num){

	int posicao, flag = 0;
	no *aux;
	
	posicao = funcHash(num);
	aux = &(t->vetor[posicao]);
	
	while(aux!=NULL){
		if(aux->dado == num){
			flag = 1;
			break;
		}
		aux=aux->prox;
	}
	if(!flag){
		printf("Valor não encontrado\n");
		return 0;
	}	
	printf("%d\n", aux->dado);
	return aux;
}

void imprimir(tabela *t, int num){

	int posicao;
	no *aux;
	
	posicao = funcHash(num);
	aux = &(t->vetor[posicao]);
	while(aux!=NULL){
		printf("%d\n", aux->dado);
		aux=aux->prox;
	}
}
 
