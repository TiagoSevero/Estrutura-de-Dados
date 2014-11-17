#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <sys/time.h>
#include "fila.h"


int main(){

	fila f;
	int n=0, s = 100,  tmili;

	struct timeval inicio, final;

	criarFila(&f);
	
	
	while ( (n < 5) && enfileirar(&f, s) ) {	
	  //  	printf("Enfileira %d\n", n);
	 	s = rand()%100;   	
		n+= 1;
    	}
	
		
	gettimeofday(&inicio, NULL);	
	//tamanhoFila(f);	
	imprimir(f);	
	gettimeofday(&inicio, NULL);	
	ordenar(f);	
	gettimeofday(&final, NULL);
    	tmili = (int) (1000 * (final.tv_sec - inicio.tv_sec) + (final.tv_usec - inicio.tv_usec) / 1000);
    	printf("tempo decorrido: %d\n", tmili);
		
		
	//buscarFila(f, 10);
	//limparFila(&f);
	
	
    	
        //while ( desenfileirar(&f, &n) ) 
    	//	printf("Desenfileira %d\n", n);

	
}
