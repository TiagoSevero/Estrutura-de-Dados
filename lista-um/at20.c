#include<stdio.h>
#include<stdlib.h>



int main(){

	int vetor[5] ,*v;
	int i,j;

	v= &vetor[0];
	
	for(i=0;i<5;i++){
		
		scanf("%d", v);
		v++;
	}
	
	v-=5;
			
	for(j=0;j<5;j++){	
		if((*v%2) == 0){
			printf("%p\n", v);
		}
		v++;
	}
	

	
	return 0;

}

