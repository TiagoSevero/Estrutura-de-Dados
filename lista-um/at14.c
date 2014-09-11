#include<stdio.h>
#include<stdlib.h>


 void incrementar(int *vetor){
	
	int i;	

	for(i=0;i<6;i++){

		vetor[i]= vetor[i]+1;
	}

}



int main(){

	int vetor[6] = {2,3,4,5,6,7};
	int i;	

	for(i=0;i<6;i++){

		printf("%d ", vetor[i]);
	}
	
	
	printf("\n");	

	incrementar(vetor);


	for(i=0;i<6;i++){

		printf("%d ", vetor[i]);
	}
	
	printf("\n");
	return 0;
}
