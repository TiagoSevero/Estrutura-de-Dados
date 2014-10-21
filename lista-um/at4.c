#include<stdio.h>
#include <stdlib.h>

float a, b, ma, mp;

void le_notas(){
	
	scanf("%f",&a);
	scanf("%f",&b);

}

void calc_media(){

	ma = (a +  b) /2;
	
	mp = (a+(2*b))/3;
}

void exibe_dados(){

	printf("\nA = %f\n", a);
	printf("B = %f\n", b);
	printf("MÉDIA ARITMÉTICA = %f\n", ma);
	printf("MÉDIA PONDERADA = %f\n", mp);

}

int main(){

	le_notas();
		
	calc_media (a, b, ma, mp);
	
	exibe_dados (a , b , ma , mp);
	
}
