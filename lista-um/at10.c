#include <stdio.h>
#include <stdlib.h>

int somar;

int soma(int *a, int *b){

	

		*a = *a + *a;
		*b = *b + *b; 
		
		somar= *a + *b;
		
	return somar;

}

int main(){
	
	int a, b, result;

	printf("Digite um número: ");
	scanf("%d", &a);
	
	printf("Digite um número: ");
	scanf("%d", &b);

	result = soma(&a, &b);

	printf("%d\n", result);
}
