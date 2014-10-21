#include<stdio.h>

void troca(float *a, float*b){


	float aux;
	
	aux = *a;
	*a = *b;
	*b = aux;
	
}

int main(){

	float a, b;
	a = 2.134;
	b = 3.234;
	
	printf("A = %f e B =%f\n",a,b);	
	
	troca (&a, &b);
	
	printf("A = %f e B =%f\n",a,b);
	return 0;

}
