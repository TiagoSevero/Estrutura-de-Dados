

#include<stdio.h>
#include<stdlib.h>


int main(){

	int a, *p1;
	char b, *p2;
	float c, *p3;

	a =1;	
	b = 'a';
	c = 2.3456;
		
	printf("A = %d\n",a);
	printf("B = %c\n",b);
	printf("C = %f\n",c);	

	p1=&a;
	p2=&b;
	p3=&c;
	
	*p1 = 2;
	*p2 = 'b';
	*p3 = 1.2345;

	printf("O novo valor de A = %d\n",a);
	printf("O novo valor de B = %c\n",b);
	printf("O novo valor de C = %.4f\n",c);	


	return 0;

}
