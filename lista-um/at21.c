#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//TERMINAR AINDA



int comparar(char *vet1, char *vet2){

	char *l1, *l2;
	int cont = 0;
	int i;
	l1= &vet1[0];
	l2= &vet2[0];
	 			
		for(i=0; *l1 =='\0'||*l2 =='\0'; i++){
				
			if(*l1 == *l2){
				l1++;		
				l2++;
				cont++;				
			}				
			else
				l1= &vet1[0];
				l2++;
			
		}			
	return cont;
}


int main(){


	char frase1 []= "ola mundo";
	char frase2 []= "mundo";

	char *a, *b;

	a = &frase1[0];
	b = &frase2[0];

	printf("%d\n",comparar(frase1, frase2)); 
			

			
	/*if(a==b)
		printf("A primeira string contem a segunda segunda\n");
	else
		printf("A primeira string não contem a segunda segunda\n");*/	
}
