#include<stdio.h>
#include<stdlib.h>

int main(){

	float vetor[10], *v;
	int i;

	for(i=0;i<10;i++){

		v = &vetor[i];		
		
		printf("%p\n", v);
	}

	return 0;
}
