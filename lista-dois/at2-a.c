/*

	O código abaixo apresenta um erro relacionado a relação entre um ponteiro e um inteiro, ou seja, para que um ponteiro possa receber o 	conteudo de uma varável é necessario que o mesmo seja dereferenciado antes de se atribuir o conteudo de uma variável a este inteiro.

	void main() { 
		int x, *p; 
		x = 100; 
		p = x;  
		printf(“Valor de p: %d.\n”, *p); 
	} 
	
	Para que o código funcione corretamente é necessário dereferenciar o ponteiro antes da atribuição. O código abaixo apresenta a alteração

*/

#include <stdio.h>

	void main() { 
		int x, *p; 
		x = 100; 
		*p = x;  
		printf("Valor de p: %d.\n", *p); 
	} 

