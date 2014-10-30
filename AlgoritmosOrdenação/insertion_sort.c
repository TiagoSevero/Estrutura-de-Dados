/*
	Descrição:
		
		 Em termos gerais, ele percorre um vetor de elementos da esquerda para a direita e à medida que avança vai deixando os elementos mais à esquerda ordenados. 

	Complexidade: 
		
		.PIOR CASO: O(n²)
 		.PIOR CASO - MÉDIO: O(n²)
		.PIOR MELHOR CASO: O(n)
	
	Vantagens:
	
		 . A principal vantagem da ordenação por inserção é a sua simplicidade, além de mostrar um bom desempenho em listas pequenas

	Desvantagens:

		A desvantagem é que não possui um desempenho tão bom quanto outros algoritmos de ordenação. Com n² passos necessários para funcionar, o insertion sort também não funciona bem com listas grandes.
*/

#include<stdlib.h>

void insertionSort(int *vetor) {

	int i, j, tmp;
		
	for (i = 1; i < n; i++) {
		j = i;
		while (j > 0 && vetor[j - 1] > vetor[j]) {

			tmp = vetor[j];
			vetor[j] = vetor[j - 1];
			vetor[j - 1] = tmp;
			j--;
		}
	}
}

int main(){
	
	int i, vetor[5] = {5,4,3,2,1};
	
	insertionSort(vetor);

	for (i = 0; i < 5; i++)
		printf("%d ", vetor[i]);
	printf("\n");
	return 0;
}
