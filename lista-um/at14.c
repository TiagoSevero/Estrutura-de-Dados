#include<stdio.h>
#include<stdlib.h>



int main(){

	int vetor[6] = {2,3,4,5,6,7};
	int i, *p;	

	p = &vetor[0];

	for(i=0;i<6;i++)
		printf("%d ", vetor[i]);
	
	for(i=0;i<6;i++){
		*p+=1;
		 p++;
	}

	printf("\n");	
	
	for(i=0;i<6;i++)
		printf("%d ", vetor[i]);

	
	printf("\n");
	return 0;
}
