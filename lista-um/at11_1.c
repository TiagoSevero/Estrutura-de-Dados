#include<stdio.h>
#include<stdlib.h>


void  operar_vetor(int n){

	int maior, i, aux;
	int vetor[n];
	
	for(i= 0;i <n;i++){
	
		scanf("%d", &vetor[i]);
	

	}

	for(i= 0;i < n;i++){

		printf("%d ", vetor[i]);
	
	}
		
	printf("\n");	
	
	for(i= 1;i < n;i++){
	
		if(vetor[i-1]>vetor[i]){
			
			aux= vetor[i];
			vetor[i]=vetor[i-1];
			vetor[i-1]=aux;		
		}
	}	
	
	
	printf("O maior valor eh: %d\n", vetor[i-1]);

	
}

int main(){


	int n;
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &n);
	
	operar_vetor(n);
	

	
}
