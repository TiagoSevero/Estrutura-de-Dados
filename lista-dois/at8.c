#include<stdio.h>


void maximoMinimo(int *v, int N, int *maximo, int *minimo){


	int i;	
	int aux;
		
	for(i= 1;i<N;i++){
	
		if(v[i-1]>v[i]){
			
			aux= v[i];
			v[i]=v[i-1];
			v[i-1]=aux;		
		}
	}	
	

	*minimo = v[0];
	*maximo = v[N-1];

}


int main(){

	int minimo, maximo;
	int tamanho = 13;
	int vet[] = {1,3,4,5,6,8,9,18,0,6,11,5,70};

	maximoMinimo(vet, tamanho, &minimo, &maximo);

	printf("Maximo= %d  e Minimo= %d\n",maximo, minimo );
}	
