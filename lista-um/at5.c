#include <stdio.h>
#include <stdlib.h>


void somar(int *a, int *b){

	int soma;

	soma= *a + *b;
	
	*a= soma;
	

}

int main(){

	int a, b;

	printf("Digite o valor de A: ");
	scanf("%d", &a);

	printf("Digite o valor de B: ");
	scanf("%d", &b);

	somar(&a, &b);
	
	printf("O novo valor de A =%d\n", a);
	printf("O valor de B =%d\n", b);
	

}
