#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "pilha.h"


void iniciar(pilha *p){

 	p->topo=-1;
}

int pilhaVazia(pilha p){

	return (p.topo == -1);
}

int pilhacheia(pilha p){

	return (p.topo == MAX-1);
}

bool empilhar(pilha *p,float dado){

	if(pilhacheia(*p))
		return false;

    	p->P[++(p->topo)]=dado;
		
	return true;
}

int desempilhar(pilha *p, float * dado){

	if(pilhaVazia(*p))
		return 0;
    	
    
	return *dado= p->P[p->topo --];
}


