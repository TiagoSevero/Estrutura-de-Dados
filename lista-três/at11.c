#include<stdio.h>
#include<stdlib.h>

// TERMINAR

int main(){

	int n, m, maior1=0;
	printf("Digite a quantidade de linhas e colunas da matriz: ");
	
	scanf("%d", &n);	
	scanf("%d", &n);

	int *pt = (int *) malloc (n*m* sizeof(int));
		
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
			scanf("%d", &pt[i][j]);
	}
	
		
		
	return 0;
}

