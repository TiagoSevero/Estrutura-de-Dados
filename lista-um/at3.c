#include<stdio.h>
#include<stdlib.h>

int ordenar(int *a,int *b, int *c){

	int variavel;
		
	


	if (*a < *b && *b < *c){
		
		if (*b>*c){

			variavel=*b;
	    		*b=*c;
            		*c=variavel;
		}
	}

	else if (*b<*a && *b < *c){

		variavel=*a;
		*a=*b;
		*b=variavel;

		if (*b>*c){

			variavel=*b;
	    		*b=*c;
            		*c=variavel;
		}
	}

	
	else if (*c<*a && *c<*b){

		 variavel=*a;
		 *a=*c;
            	 *c=variavel;

		if (*b>*c){

			variavel=*b;
	    		*b=*c;
            		*c=variavel;
		}
	
	}

	if(*a==*b && *a==*c)
		return 1;
	
	else
		return 0;	
	
	


}

int main(){


	int a, b, c, result;
	
	printf("A =");
	scanf("%d",&a);
	
	printf("B = ");
	scanf("%d",&b);

	printf("C = ");
	scanf("%d",&c);
	
	result = ordenar(&a,&b,&c);
	
	printf("%d\n", result);
		
	printf("A = %d\n", a);
	printf("B = %d\n", b);
	printf("C = %d\n", c);
	
	
}

