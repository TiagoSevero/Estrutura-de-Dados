#include<stdio.h>
#include<stdlib.h>

void printar(int *vetor){

	int *v, i;

	v = &vetor[0];
	
		for(i=0;i<5;i++){
											
			printf("%d ", *v);
			v++;
  		}
		
	printf("\n");
}


int main(){

	int vetor[5] = {4,3,5,6,7};
	
	printar(vetor);


	return 0;
}

