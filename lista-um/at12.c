#include<stdio.h>
#include<stdlib.h>


int valores(int *vetor, int *min, int *max){

	int i, j, aux, n;
	n = 6;	

	for(i= 0;i < 6;i++){
		
		for(j= 1; j< n-i; j++){

			if(vetor[j-1]>vetor[j]){
			
				aux= vetor[j];
				vetor[j]=vetor[j-1];
				vetor[j-1]=aux;		
			}
		}
	}		

 
	*max = vetor[i-1];
	*min = vetor[0];
	
	printf("O menor valor eh: %d\n", *min);	
	printf("O maior valor eh: %d\n", *max);
 	
	
}

int main(){

	
	
	int min, max ;
	int vetor[6] = {4,3,9,16,1,8};

	valores(vetor, &min, &max);

	return 0;


}
