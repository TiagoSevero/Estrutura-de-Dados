#include<stdio.h>
#include<stdlib.h>



int main(){

	int a,b,e,f;
	int *c,*d;
	
	scanf("%d", &a);
	scanf("%d", &b);	
	
	c= &a;
	d= &b;
	
	printf("\n%p\n", c);
	printf("%p\n\n", d);	

	if( c > d)
		printf("A eh maior= %p\n\n",c);
	else
		printf("B eh maior = %p\n\n",d);

	return 0;
}
