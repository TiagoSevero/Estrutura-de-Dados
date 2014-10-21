#include<stdio.h>
#include<stdlib.h>


int main(){

	int n, **p, i, j;
	int a, b;
	
	printf("Digite o número de cidades: ");
	scanf("%d", &n);
	
	p =  malloc(n *  (sizeof(int))); // alocando as colunas
	
	for(i=0;i<n;i++)
		p[i] = malloc (n*sizeof(int)); //alocando as linhas 

	
	// carregando as distâncias
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			scanf("%d", &p[i][j]);			
		}
	}
	for(i=0; i<n; i++) //colunas
		printf("   %d", i);

	printf("\n");
	
	for(i=0; i<n; i++){
		printf("%d  ",i); //linhas	
		for(j=0; j<n; j++){
			printf("%d   ", p[i][j]);// distâncias	
		}
		printf("\n");	
	
	}

	printf("Digite a cidades para saber a distância: ");
	scanf("%d", &a);
	scanf("%d", &b);

	printf("\nDISTÂNCIA: %d\n", p[a][b]);

	return 0;
}
