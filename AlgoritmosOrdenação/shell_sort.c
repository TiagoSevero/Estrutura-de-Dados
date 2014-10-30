/*
	Descrição:
	
			O algoritmo difere do método de inserção direta pelo fato de no lugar de considerar o array a ser 
		ordenado como um único segmento, ele considera vários segmentos sendo aplicado o método de inserção direta 
		em cada um deles. Basicamente o algoritmo passa várias vezes pela lista dividindo o grupo maior em menores. 
		Nos grupos menores é aplicado o método da ordenação por inserção
	
	Complexidade:

		.PIOR CASO: O(n log²n)
		.CASO MÉDIO: depende da sequência do gap
		.MELHOR CASO: O(n)

	Vantagens: 
		
		.É uma ótima opção para arquivos de tamanho moderado. 
		.Sua implementação é simples e requer uma quantidade de código pequena.
	
	Desvantagens:

		O tempo de execução do algoritmo é sensível à ordem inicial do arquivo.  
*/


#include <stdio.h>

void shellSort(int numbers[], int array_size);


int main(){


	int i, NUM_ITEMS = 100;
	int numbers[100];

	numbers[100] = {12,2,6,9,5,7,16,55,32,15}; 		  	

	shellSort(numbers, NUM_ITEMS);

	printf("Números ordenados:\n");
	
	for (i = 0; i < NUM_ITEMS; i++)
		printf("%i\n", numbers[i]);

	return 0;
}


void shellSort(int numbers[], int array_size){

	int i, j, increment, temp;

	increment = 3;
	while (increment > 0){
		for (i=0; i < array_size; i++){
			j = i;
			temp = numbers[i];
			while ((j >= increment) && (numbers[j-increment] > temp)){
				numbers[j] = numbers[j - increment];
				j = j - increment;
			}
			numbers[j] = temp;
		}
		if (increment/2 != 0)
			increment = increment/2;
		else if (increment == 1)
			increment = 0;
		else
			increment = 1;
	}
}
