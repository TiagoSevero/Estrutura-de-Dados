/*

	Descrição:
		
		 	É um algoritmo de ordenação baseado em se passar sempre o menor valor do vetor para a 
		 primeira posição (ou o maior dependendo da ordem requerida), depois o de segundo menor valor para a 
		 segunda posição, e assim é feito sucessivamente com os (n-1) elementos restantes, até os últimos dois 
		 elementos.

	Complexidade: 
		
		.PIOR CASO: O(n²)
 		.PIOR CASO - MÉDIO: O(n²)
		.PIOR MELHOR CASO: O(n²)
	
	Vantagens:
			
		Funciona muito bem para listas pequenas e é de fácil implementação.
	
	Desvantagens: 
		
		Número muito grande de movimentações e ordem de complexidade quadrática.	



*/

#include<stdio.h>
#include<stdlib.h>

void selectionSort(int *ptr){

	int i, j, h, aux;
		
	for(i=0;i<4;i++){
		for(j=i+1;j<5;j++)
			if(ptr[i]>ptr[j]){
				aux = ptr[i];
				ptr[i]=ptr[j];
				ptr[j]= aux;
			}
			
		for(h=0;h<5;h++)
			printf("%d ", ptr[h]);	
		printf("\n");	
	}


}

int main(int argc, char *argv[]){

	int ptr[5] = {5,4,3,2,1};
	
	selectionSort(ptr);
		
	
	return 0;
}
