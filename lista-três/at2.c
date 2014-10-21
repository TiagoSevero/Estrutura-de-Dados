#include <stdio.h>
#include <stdlib.h>

int main(){

	int i, c=0;
	int *a;

	a = (int*)calloc(15, sizeof(int));

	for( i=0 ; i < 15 ; i++ ) {
		scanf("%d",&a[i]);
		c++;
		if(a[i] < 0)
			break;
	}
	
	for( i=0 ; i < (c - 1) ; i++ ) {
		printf("%d ",a[i]);
	}

	printf("\n");	
	
	return 0;
}
