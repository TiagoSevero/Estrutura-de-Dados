#include<stdio.h>
#include<stdlib.h>

int main(){

	int *p = (int*) malloc(40*sizeof(int));

	int matriz[2][4], h=0, i, j, g= 0;
		
	
	printf("Digite 8 números para preencher a matriz:\n");
	
	while(h<5){
	
		for(i=0;i<2;i++){
			for(j=0;j<4;j++)
				scanf("%d", &matriz[i][j]);
		}
	
		for(i=0;i<2;i++){
			for(j=0;j<4;j++){
				*p = matriz[i][j];
				 p++; 	
			}
		}
		
		h++;
	}
	return 0;
}
