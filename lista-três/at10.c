#include<stdio.h>
#include<stdlib.h>

int *p, cont = 0;

int multiplo(int x){

	int i;
	printf("MÚLTIPLOS: ");	
	for(i=0;i<5;i++){
		
		if ((p[i]%x)== 0){
			printf("%d ",p[i]);			
			cont++;	
		}

	}
		
	return cont;
}

int main(){
		
	int x= 2,i,j, valor;
		
	p = (int*) malloc( 5 * sizeof(int));
	
	for(i=0;i<5;i++)
		scanf("%d", &p[i]);	
	
	valor = multiplo(x);
	printf("\nO número de múltiplos encontrados foi: %d\n\n", valor);

	return 0;
}
