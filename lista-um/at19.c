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
	
	for(j=1;j<5;j++){	
		
		if((j%2) == 0){
			printf("%p\n", &vetor[j]);
			printf("%d\n", j);		
		}
	}
	

	
	return 0;

}

