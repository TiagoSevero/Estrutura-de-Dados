#include<stdio.h>
#include<stdlib.h>



int main(){

	int vetor[5],*v;
	int i,j;

	v= &vetor[0];
	
	for(i=0;i<5;i++){
		
		scanf("%d", v);
		v++;
	}
	v-=5;
	for(i=0;i<5;i++){
		printf("%d ", *v * 2);		
		v++;
	}

	
	return 0;

}

