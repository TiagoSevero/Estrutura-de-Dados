#include<stdio.h>	

void mm(int *vet, int *a, int *b){

	int i;	
	int aux;
		
	for(i= 1;i<5;i++){
	
		if(vet[i-1]>vet[i]){
			
			aux= vet[i];
			vet[i]=vet[i-1];
			vet[i-1]=aux;		
		}
	}	
	

	

	*a = vet[0];
	*b = vet[4];

}


int main(){

	int a, b;
	int vetor[] = {8,4,6,9,5};
	
	mm(vetor, &a, &b);
		
	printf(" A= %d\nB= %d\n", a, b);

}
