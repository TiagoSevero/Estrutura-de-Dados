#include <stdio.h>
#include <stdlib.h>

int vet1[5] = {2,3,4,5,6};
int vet2[5] = {2,3,4,5,6};


int soma_vetor(int *vetor1, int *vetor2){
	
	static int vet3[5];
	static int *v1, *v2,*v3, i;
	int j;

	int l = sizeof (vet1) /sizeof (int);
	int l2 = sizeof (vet2) /sizeof (int);

	if(l!=l2){
		printf("Erro");
		return;	
	}	
	else{

		v1 = vet1;	
		v2 = vet2;	
		v3 = vet3;			
		for(i=0;i<5;i++){

			*v3 = *v1 + *v2;
	
			v1++;	
			v2++;		
			v3++;
					
		}
		
		/*	UTILIZADO PARA TESTAR SE O VETOR ESTÁ SENDO PREENCHIDO
			for(j=0;j<5;j++)
				printf("%d ", vet3[j]);*/
			
		return 0;		
	}	
	  	
}






int main(){

	
	int result; 
	
	 result = soma_vetor(vet1, vet2);	
		
	 printf("%d\n",result);
	
}
	

