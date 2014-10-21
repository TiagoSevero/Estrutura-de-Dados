#include<stdio.h>
#include<stdlib.h>

typedef struct produtos{

	char nomeProduto[30];
	int codigoProduto;
	int precoReais;

} produto;

int main(){

	int *vetor, **tabela, i, j;
	char **texto;
	// LETRA "A"
		
	vetor = (int*) malloc ( 256 * sizeof(int));

	//LETRA "B"
	
	tabela = (int **) malloc (10 * sizeof (int) );

	for(i=0;i<10;i++)
		tabela[i] = (int*) malloc( 10 * sizeof (int) );
 
	//LETRA "C"

	produto *p = (produto*) malloc (50 * sizeof(produto));

	//LETRA D

	texto = (char **) malloc (100 * sizeof(char));
	
	for(j=0;j<100; j++)

		texto[j] = (char*) malloc (80 * sizeof(char));

	return 0;
}
