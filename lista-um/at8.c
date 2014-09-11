#include<stdio.h>
#include<stdlib.h>

void verificar(int *vet, int *repeticao, int *maior){
	
	int i;	
	int aux;
	*repeticao = 0;
	
	for(i= 1;i<10;i++){
	
		if(vet[i-1]>vet[i]){
			
			aux= vet[i];
			vet[i]=vet[i-1];
			vet[i-1]=aux;		
		}
	}	
	
		*maior= vet[9];

	for(i=0;i<10;i++){
		
		if(vet[i] == *maior)
			*repeticao = *repeticao + 1;
	}
		


}


int main(){
	

	int vetor[10] = {0,9,8,15,11,12,8,12,15,9};
	int repeticao, maior;

	verificar(vetor, &repeticao, &maior);
	
	printf("O maior valor é: %d\n", maior);
	printf("O número de vezes que ele se repete é: %d\n", repeticao);
	
}
