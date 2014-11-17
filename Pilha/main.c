#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include "pilha.h"
	
int main(){

	
	int tmili, i, dado;	 
	float n=100.0, a;
	struct timeval inicio, final;
    	pilha p;
	
	iniciar(&p);
	
	//gettimeofday(&inicio, NULL);

	while ( empilhar(&p, n) ) {
		printf("Empilha %.1f\n", n);
		n= rand() % 100;
    	}
	
	//ordenar(pilha &p);
	//procurar(pilha p, float dado)
	

	//gettimeofday(&final, NULL);
    	//tmili = (int) (1000 * (final.tv_sec - inicio.tv_sec) + (final.tv_usec - inicio.tv_usec) / 1000);
    	//printf("tempo decorrido: %d\n", tmili);    	
	
	elementoTopo(p, &a);
	
		 	
	while ( desempilhar(&p, &n) ) 
		printf("Desempilha %.1f\n", n);
	
	
	
}
