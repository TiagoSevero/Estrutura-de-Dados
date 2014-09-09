#include<stdio.h>
#include<stdlib.h>

void maior(int *a,int *b){

	int variavel;
	
	if (*a < *b){	
	
	    variavel=*a;
	    *a=*b;
            *b=variavel;
	}
}


int main(){


	int a, b;
	
	printf("A =");
	scanf("%d",&a);
	
	printf("B = ");
	scanf("%d",&b);

	maior(&a,&b);

	printf("A = %d\n", a);
	printf("B = %d\n", b);
	
}

