#include<stdio.h>
#include<stdlib.h>


int maior_valor(int *vetor){

	int maior, i, aux;

	for(i= 1;i<10;i++){
	
		if(vetor[i-1]>vetor[i]){
			
			aux= vetor[i];
			vetor[i]=vetor[i-1];
			vetor[i-1]=aux;		
		}
	}	
	
		maior= vetor[9];

	return maior;
}

int main(){

	int vetor[10] = {0,9,8,15,11,12,8,12,15,9};
	int maior;
	

	maior = maior_valor(vetor);

	printf("O maior eh: %d\n", maior);
}
