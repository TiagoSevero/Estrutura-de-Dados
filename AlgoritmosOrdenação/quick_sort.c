/*

	Descrição:
		
		 	O Quicksort adota a estratégia de divisão e conquista. A estratégia consiste em rearranjar as chaves de modo que as chaves "menores" precedam as chaves "maiores". 
			Em seguida o Quicksort ordena as duas sublistas de chaves menores e maiores recursivamente até que a lista completa se encontre ordenada. 
			Os passos são:
            -Escolha um elemento da lista, denominado pivô;
            -Rearranje a lista de forma que todos os elementos anteriores ao pivô sejam menores que ele, e todos os elementos posteriores ao pivô sejam maiores que ele. 
            Ao fim do processo o pivô estará em sua posição final e haverá duas sublistas não ordenadas. Essa operação é denominada partição;
            -Recursivamente ordene a sublista dos elementos menores e a sublista dos elementos maiores;
            A base da recursão são as listas de tamanho zero ou um, que estão sempre ordenadas. 
            O processo é finito, pois a cada iteração pelo menos um elemento é posto em sua posição final e não será mais manipulado na iteração seguinte.
			
	Complexidade: 
		
		.PIOR CASO: O(n²)
 		.PIOR CASO - MÉDIO: O(n log2 n)
		.PIOR MELHOR CASO: O(n log2 n)
			
	Vantagens:
			
	   É extremamente eficiente para ordenar arquivos de dados.
       Necessita de apenas uma pequena pilha como memória auxiliar.
       Requer cerca de n log n comparações em média para ordenar n itens.
	
	Desvantagens: 
		
		Implementação delicada e difícil
		Tem um pior caso O(n²)
*/

#include<stdio.h>
#define MAX 20

int divide( int *vetor, int primeiro, int ultimo )
{
   int x,i,j,aux;
   x = vetor[primeiro];
   i = primeiro - 1;
   j = ultimo + 1;
   
   for(;;) 
   {
      do { j--; } while( vetor[j] > x );
      do { i++; } while( vetor[i] < x );
      
      if (i < j) 
      {
         aux = vetor[i];
         vetor[i] = vetor[j];
         vetor[j] = aux;
      }
      else
      {
         return j;
      }
   }
}

void quickSort( int *vetor, int primeiro, int ultimo )
{
   int pivot;
   if (primeiro < ultimo) 
   {
      pivot = divide( vetor, primeiro, ultimo);
      quickSort( vetor, primeiro, pivot);
      quickSort(vetor, pivot+1, ultimo);
   }
}


	int main(){
   
    int vetor[MAX],i,n;

    printf("Digite a quantidade de numeros que quer ordenar "); 
    scanf("%d",&n); 

    printf("Quais esses numeros?");
    for(i=0;i<n;i++){
         scanf("%d",&vetor[i]);
    }

    quickSort(vetor,0,n-1);  //chama funcao

    printf("A ordenacao é:");
    for(i=0;i<n;i++){
         printf("%d ",vetor[i]);
    }

   return 0;
	
}
