#include <stdio.h>
#include <stdlib.h>

int main(){

	int i;
	int *a;

	a = (int*)calloc(5, sizeof(int));

	for( i=0 ; i < 5 ; i++ ) {
		scanf("%d",&a[i]);
	}
	
	for( i=0 ; i < 5 ; i++ ) {
		printf("%d ",a[i]);
	}
	
	printf("\n");
	
	free(a);

	return 0;
}

