#include<stdio.h>
#include<stdlib.h>

void modificar(int *a, char *b, float *c){
	
	*a = 40;
	*b = 'c';
	*c = 4.3451;

}



int main(){

	int a;
	char b;
	float c;

	scanf("%d\n",&a);
	
	scanf("%c\n",&b);

	scanf("%f",&c);
		
	printf("A = %d\n",a);
	printf("B = %c\n",b);
	printf("C = %f\n",c);	

	modificar (&a, &b, &c);

	printf("O novo valor de A = %d\n",a);
	printf("O novo valor de B = %c\n",b);
	printf("O novo valor de C = %f\n",c);	


	return 0;

}
