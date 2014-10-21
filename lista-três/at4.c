#include <stdio.h>
#include <stdlib.h>

int main(){

	int i, n, cont1=0, cont2=0;
	int *a;
	
	printf("Digite a quantidade de números a ser lido: ");
	scanf("%d", &n);

	a = (int*)calloc(n, sizeof(int));

	for( i=0 ; i < n ; i++ ) {
		scanf("%d",&a[i]);
	}
	
	printf("PARES:");

	for( i=0 ; i < n ; i++ ) {
		if((a[i]%2) == 0)		
			cont1++;
	}

	printf("%d\n", cont1);
	printf("ÍMPARES:");
	
	for( i=0 ; i < n ; i++ ) {
		if((a[i]%2) != 0)		
			cont2++;
	}

	printf("%d\n", cont2);
	
	free(a);

	return 0;
}

