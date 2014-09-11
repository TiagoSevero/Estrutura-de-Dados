#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int frac(float num, float* inteiro, float* frac){

	*inteiro = floor(num);
	*frac = num - floor(num);

}

int main(){

	float a, b, c;

	printf("Digite um número: ");
	scanf("%f", &a);
	
	frac(a, &b, &c);

	printf("A parte inteira é: %f\n", b);		
	printf("A parte fracionária é: %f\n", c);


}
