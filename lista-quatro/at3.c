#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	int cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0, cont5 = 0, i;	
	char *frase = (char*) malloc(100 * sizeof(char));
	int  flag = 1;	
	printf("Digite a frase a ser analisada: ");
	
	
	   while(flag != 0){
			
		gets(frase);
		flag = strcmp(frase , "fim");
		
		printf("%d\n", flag);		
		for(i=0;i<100;i++){
		
			if (frase[i] == 'a')
				cont1++;		
			else if (frase[i] == 'e')
				cont2++;		
			else if (frase[i] == 'i')
				cont3++;	
			else if (frase[i] == 'o')
				cont4++;		
			else if (frase[i] == 'u')
				cont5++;		
		}

		printf("\n");	
		printf("A = %d\n", cont1);
		printf("E = %d\n", cont2);
		printf("I = %d\n", cont3);
		printf("O = %d\n", cont4);
		printf("U = %d\n", cont5);
		
		
	}

	return 0;
}


