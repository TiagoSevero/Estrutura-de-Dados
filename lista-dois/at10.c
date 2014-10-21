#include<stdio.h>

int vet [10];

int *comparar (char *str, char letter){
	
	static int cont = 0
	int i ; 
	int *v;
	v = vet;
	
	for(i=0;i<48; i++){
		if (str[i] == letter){
			*v= i;
			v++ ;
			cont++;// tamanho				
		}
	}
	return vet[];
}


main(){
	char letra = 'a';
	int i;
	char str[] = "Hello World I am writing a program in C language";
	
	comparar (str, letra);	
	
			

	
}
