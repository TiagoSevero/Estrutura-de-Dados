#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int n, m, **p, **p1;
	int i, j;

	printf("Digite dois numeros: ");
	scanf("%d", &n);	
	scanf("%d", &m);
	
	
	// ALOCAÇÃO DA MATRIZ	
	
	p = (int**) malloc (n*sizeof(int*));
	
	for(i=0;i<n; i++)
		p[i] = (int*) malloc(m * sizeof(int));
				
	// ALOCAÇÃO DA MATRIZ TRANSPOSTA

	p1 = (int**) malloc (m*sizeof(int*));
	
	for(i=0;i<m; i++)
		p1[i] = (int*) malloc(n * sizeof(int));
	
	// ESCRITA DOS ELEMENTOS DA MATRIZ
	
	printf("\nELEMENTOS DA MATRIZ:\n");	
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)	
			scanf("%d", &p[i][j]);
	}
	
	// IMPRIMIR A MATRIZ	

	printf("\n\tMATRIZ\n\n");	
	
	for(i=0; i<m; i++) // colunas
		printf("   %d", i);

	printf("\n");
	
	for(i=0; i<n; i++){
		printf("%d  ",i); // linhas	
		for(j=0; j<m; j++){
			printf("%d   ", p[i][j]);// melhorar	
		}
		printf("\n");	
	}
	
	

	for(i=0;i<n;i++){
		for(j=0;j<m;j++)	
			p1[j][i] = p[i][j];
	}	
			
	
	// IMPRIMIR A MATRIZ TRANSPOSTA	
	
	printf("\n\tMATRIZ TRANSPOSTA\n\n");
	
	
	for(i=0; i<n; i++) // colunas
		printf("   %d", i);

	printf("\n");
	
	for(i=0; i<m; i++){
		printf("%d  ",i); // linhas	
		for(j=0; j<n; j++){
			printf("%d   ", p1[i][j]);// melhorar	
		}
		printf("\n");	
	}
	
	return 0;
}
