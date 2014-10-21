#include<stdio.h>
#include<stdlib.h>

int main(){
	
	float *pt = (float *) malloc(36* sizeof(float));
	float matriz[6][6]; 
	int i, j, h=0, soma;
	
	for(i=0;i<36;i++){
		scanf("%f", pt);
		pt++;
	}
	
	pt = pt-36;
	
	for(i=0;i<6;i++){
		
		for(j=0;j<6;j++){
			matriz[i][j] = *pt;
			pt++;	
		}		
	}

	for(i=0;i<6;i++){
		
		soma=0;		
		for(j=0;j<6;j++)
			soma = soma + matriz[i][j];
		printf("LINHA %d: %d\n", i, soma);		
	}
	
	return 0;
}
