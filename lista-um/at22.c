#include<stdio.h>
#include<stdlib.h>

void adicionar(int *vetor, int n){


	int *v, i;
	
	v = &vetor[0];
	i=0;

	
	while(i<5){
		
		*(v+i) = n;
		i++;

	}
}



int main(){
	
	int vetor[5], n, i ;

	scanf("%d", &n);

	adicionar(vetor, n);

	for(i=0;i<5;i++){
		printf("%d ", vetor[i]);
		
	}
	printf("\n");
	return 0;
}
