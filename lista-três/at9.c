#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int i, j, n = 3;
	float **p;	
	
	p = (float **) malloc (n * sizeof(float));
	
	for(i=0;i<n; i++)
		p[i] = (float*) malloc(n * sizeof(float));		
		
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			scanf("%f", &p[i][j]);
	}	

	for(i=0; i<n; i++) // linhas
		printf("   %d", i);

	printf("\n");
	
	for(i=0; i<n; i++){
		printf("%d  ",i); // colunas	
		
		for(j=0; j<n; j++){
			printf("%.0f   ", p[i][j]);// melhorar	
		}
		printf("\n");	
	}


	
	return 0;
}
