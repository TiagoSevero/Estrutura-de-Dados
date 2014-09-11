#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int raizes(float a, float b, float c, float * x1, float * x2){

	float delta, raiz;
	
	delta = (b*b) - (4*a*c);
	
	if(delta < 0.0){
		return 0;
		
	}
	
	else{	
		raiz = sqrt(delta);

		*x1 = ((-b) + raiz )/ (2 * a); 

		*x2 = ((-b) - raiz )/ (2 * a);
	
		if (*x1 == *x2)
			return 1;	
		else 
			return 2;	
		
	}
}

int main(){


	float a, b, c, x1, x2;
	int  result;

	printf("A = ");
	scanf("%f",&a);
	
	printf("B = ");
	scanf("%f",&b);

	printf("C = ");
	scanf("%f",&c);

	
	result= raizes(a, b, c, &x1, &x2);

	printf("Numero de raízes: %d\n", result);
	
	

}
