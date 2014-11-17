#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "fila.h"


no * buscarFila(fila f, int valor){

	int flag = 0;	
	no *aux;	
	aux=f.inicio;
	     
	if (aux==NULL)
		return NULL;
	else{
		while (aux!=NULL){
			if (aux->dado== valor){
				flag=1; 
				return aux;  
			}
			else
				aux=aux->prox; 	
		}
		if (flag==0)
			return NULL;
	}
}

void imprimir(fila f){

	no *aux;
	aux=f.inicio;

	while (aux!= NULL){

		printf("%d ", aux->dado);
		aux=aux->prox;
	}
	printf("\n");
}

int tamanhoFila(fila f){
	
	no *aux;
	int cont = 0;
	
	aux=f.inicio;
	
	if (aux==NULL)
		return 0;	
	else{
		while (aux!= NULL){
			cont++;
			aux=aux->prox;
		}
	}
	return cont;
}

void ordenar(fila f){

	no *aux1, *aux2;
	int numero, i, flag;

	aux1 = f.inicio;
	aux2 = f.inicio->prox;
		
	while(flag!=0){
		aux1 = f.inicio;
		aux2 = f.inicio->prox;		
		flag = 0;	
		while( aux2 != NULL){
			if((aux1->dado)>(aux2->dado)){
				numero = aux2->dado;
				aux2->dado = aux1->dado;
				aux1->dado = numero;	
				flag = 1;	
			}
			imprimir(f);		
			aux1 = aux2;
			aux2 = aux2->prox;	
		}
	}
}
