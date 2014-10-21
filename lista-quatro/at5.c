#include<stdio.h>
#include<stdlib.h>

int main(){

	int *pt = (int *) malloc (sizeof(int));
	int matriz[2][2], i, j, h=0, somar = 0;
	
	while(h<5){
		for(i=0;i<2;i++){
			for(j=0;j<2;j++)
				scanf("%d", &matriz[i][j]);
			}
	
		for(i=0;i<2;i++){
			for(j=0;j<2;j++){
				*pt = matriz[i][j];
				somar+= *pt;			
				pt++; 	
			}
			*pt = somar;
					
		}
	
		pt = pt-4;		
		for(i=0;i<5;i++)
			printf("%d ", pt[i]);
		
		printf("\n");
		h++;
		somar = 0;
	}
		
	return 0;
}
