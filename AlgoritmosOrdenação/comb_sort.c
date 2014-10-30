/*

	Descrição:
		
		 	É um algoritmo de ordenação semelhante ao Bubble Sort, porem ele é mais eficiente,
			pois inicialmente faz a comparacao do primeiro com o ultimo e depois utilizando um gap (espaco)
			ele vai varrendo o vetor, trocando sempre o menor para as posicoes inciais.
			O gap vai reduzindo, por conta de um fator de encolhimento (normalmente atribuido 1,3),
			e proporciona as trocas pelo vetor, com um gap cade vez menor, ate que por fim o gap eh 1,
			fazendo trocas sucessivas (Bubble Sort). 
			Porem o vetor ja esta melhor organizado, resultando em uma maior eficiencia.
			
	Complexidade: 
		
		.PIOR CASO: O(n²)
 		.PIOR CASO - MÉDIO: O(n²)
		.PIOR MELHOR CASO: O(n²)
	
	Vantagens:
			
		Facil implementacao e mais eficiente que o BubbleSort
	
	Desvantagens: 
		
		Ordem de complexidade quadratica, indicando grande numero de comparacoes.	



*/

#include<stdio.h>
#include<stdlib.h>
#define tamanho 10
int main (int argc, char *argv[]) {
    int vetor[tamanho] = {3,2,10,14,4,5,8,18,22,7};
	float encolhimento = 1.247330950103979;
    int gap = tamanho, flag = 1, aux, i, k;
 
    while ((gap > 1) || flag) {
        if (gap > 1)
           gap = gap / encolhimento;
 
        flag = 0;
        i = 0;
 
        while ((gap + i) < tamanho) {
            if (vetor[i] - vetor[i + gap] > 0) {
                aux = vetor[i];
                vetor[i] = vetor[i + gap];
                vetor[i + gap] = aux;
                flag = 1;
            }
            ++i;
        }
    }

	for(k=0;k<tamanho;k++)
		printf("%d ", vetor[k]);
	printf("\n");
	return 0;
}
