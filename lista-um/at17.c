#include<stdio.h>
#include<stdlib.h>

int main(){

	float vetor[10], *v;
	int i;
	v = &vetor[0];
	
	for(i=0;i<10;i++){
	    printf("%p\n", v);
	    v++;
	}

	return 0;
}
