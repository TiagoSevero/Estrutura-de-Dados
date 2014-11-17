#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "fila.h"

void criarFila(fila *l){
 
	l->inicio=NULL;
	l->fim=NULL;
}

bool filaVazia (fila *l){

	return ((l->inicio==NULL) && (l->fim==NULL));
}

bool limparFila(fila *l){

	no *aux;

	while(l->inicio!=NULL){
		aux= l->inicio;		
		l->inicio=l->inicio->prox;
		free(aux);		
	}
	
	l->inicio=NULL;
	l->fim = NULL;
	
	return true;
}

no* alocaNovoNo(int n) {

	no *novoNo = (no*) malloc(sizeof(no));
	
	if ( novoNo != NULL) {
		novoNo->dado = n;
		novoNo->prox = NULL;
	}
	return novoNo;
}

bool enfileirar(fila *l, int n){

   	no *novoNo = alocaNovoNo(n);
			
	if (novoNo == NULL)
		return false;
	
	if (l->inicio==NULL){
		l->inicio=novoNo;
		l->fim=novoNo;
	}
	else {
		l->fim->prox 	= novoNo;			
		l->fim 		= novoNo;
	}
	return true;
}

bool desenfileirar(fila *l, int *dado){

	no* aux;

    	if ( (l->inicio==NULL) && (l->fim==NULL) )
      		return false;
		
	*dado = l->inicio->dado;
	aux = l->inicio;		
			
	if (l->inicio==l->fim){
		l->inicio=NULL;
		l->fim=NULL;
	}
			
	else 	
		l->inicio=l->inicio->prox;

	free(aux);
	return true;
}
