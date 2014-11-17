#include <stdio.h>
#include "pilha.h"

int elementoTopo(pilha p, float *valor){

	if(pilhaVazia(p))
		return 0;
	*valor = p.P[p.topo];
   	return *valor;
}

void ordenar(pilha *p){

	int i, j, flag; 
	float aux;
	
	for(i = 0 ; i <= (p->topo) ; i++){
		for(j=1 ; j <= (p->topo) ; j++){
			if( (p->P[j-1]) > (p->P[j]) ){
				aux = p->P[j-1];
				p->P[j-1]=p->P[j];
				p->P[j] = aux;
				flag = 1;			
			}
		}
		if(flag == 0)
			break;		
	}
}

int procurar(pilha p, float dado){
	
	static int i;

	for(i = 0 ; i <= (p.topo) ; i++){
		if(p.P[i] == dado)
			return i;			
	}
}

