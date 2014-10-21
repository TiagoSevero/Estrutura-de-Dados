#include<stdio.h>
#include<stdlib.h>

//TERMINAR

typedef struct empresa{
	
	char *FILIAL;
	int QTDEFUNC;
	int FATURTOT;

}funcionario;


int main(){

	int i, j,  n, v[3], aux ;	
	funcionario *pt = (funcionario*) malloc (20 * sizeof(funcionario));
	
	printf("Digite o número de funcionários: ");
	scanf("%d", &n);
	
	 
		
		printf("FILIAL: %s\n", pt-> FILIAL = "SP1"); 	
		printf("Quantidade de Funcionários: ");
		scanf("%d",	 &pt->QTDEFUNC);
		printf("FATURAMENTO TOTAL: ");
		scanf("%d", &pt->FATURTOT);
				
		v[0] = pt->FATURTOT/ pt->QTDEFUNC;		
		
		pt++;
		printf("FILIAL: %s\n", pt-> FILIAL = "RJ1");
		printf("Quantidade de Funcionários: ");
		scanf("%d", &pt->QTDEFUNC);
		printf("FATURAMENTO TOTAL: ");
		scanf("%d", &pt->FATURTOT);

		v[1] = pt->FATURTOT/ pt->QTDEFUNC;
		
		pt++;		
		printf("FILIAL: %s\n", pt-> FILIAL = "BH1");
		printf("Quantidade de Funcionários: ");
		scanf("%d", &pt->QTDEFUNC);
		printf("FATURAMENTO TOTAL: ");
		scanf("%d", &pt->FATURTOT);
						
		v[2] = pt->FATURTOT/ pt->QTDEFUNC;
			
		for(j=0;j<3;j++){		
			for(i=1;i<3;i++){
				if(v[i-1]>v[i]){
					aux=v[i];
					v[i]=v[i-1];
					v[i-1]=aux;
				}
			}
		}
		for(i=0;i<3;i++)
			printf("%d ",v[i]);

	return 0;
}
