#include <stdio.h>
#include <stdlib.h>

int main(){

	int i, n;
	int *a;

	printf("Digite a quantidade de elementos:");
	scanf("%d",&n);

	a = (int*)calloc(n, sizeof(int));
	
	printf("Digite %d numeros:\n",n);
	
	for( i=0 ; i < n ; i++ ) {
		scanf("%d",&a[i]);
	}

	printf("O(s) número(s) digitados são: ");
	  
	for( i=0 ; i < n ; i++ ) {
		printf("%d ",a[i]);
	}

	printf("\n");	
	   
	return(0);
}
