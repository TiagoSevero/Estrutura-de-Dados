#include<stdio.h>
#include<stdlib.h>

int **p;
int n;

	
int varrerMatriz(int valor){

	int i, j, temp = 0;
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(valor == p[i][j]){			
				temp = 1;
				
			}
		}
	}

	if(temp == 0)
		return 0;
	else 
		return 1;
	
}

int main(){
	
	
	int i, j, valor, tmp;
	
	p = (int**) malloc(n*sizeof(int));
	
	printf("Digite o valor da matriz: ");
	scanf("%d", &n);	
	
	for(i=0;i<n;i++)
		p[i] = (int*) malloc (n*sizeof(int));

	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			scanf("%d", &p[i][j]);			
		}
	}
	
	printf("Digite o valor a ser procurado: ");
	scanf("%d", &valor);
	
	tmp = varrerMatriz(valor);

	printf("%d\n",tmp );
	
	return 0;
}
