#include<stdio.h>
#include<stdlib.h>

int main(){

	float vetor[3][3], *v;
	int i,j;

	i=0;	
	
	while(i<3){	

		for(j=0;j<3;j++){

			v = &vetor[i][j];		
		
			printf("%p\n", v);
		}	
		
		i++;	
	}
	return 0;
}
