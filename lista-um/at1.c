#include<stdio.h>
#include<stdlib.h>

void trocar(int *a,int *b){

	int variavel;
	
	variavel=*a;
	*a=*b;
	*b=variavel;

}


int main(){


	int a, b;
	
	printf("A =");
	scanf("%d",&a);
	
	printf("B = ");
	scanf("%d",&b);

	trocar(&a,&b);

	printf("A = %d\n", a);
	printf("B = %d\n", b);
	
}

