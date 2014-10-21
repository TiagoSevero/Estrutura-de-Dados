#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char str1[] = "hello ba world";
char str2[] = "world";

void comparar (char *str1, char *str2){

	char *p1, *p2;	
	int cont = 0;	
	p1= &str1[0];
	p2 = &str2[0];
	
	int tamanho = strlen(str2); 
	
	if(str1[0] == str2[0]){
		p1++;
		p2++;
		cont++;
	}
	
	else 
		p1++;
	
	while(*p1 != '\0'){
				
		if(*p1 == *p2){
			cont++;			
			p1++;
			p2++;
			
			if(cont == tamanho){
				break;
			}
		}
		else{
			p2 = &str2[0];			
			cont = 0;		
			
			if(*p1 != *p2){
				p1++;
				
			}			
			else{
				p1++;
				p2++;
				cont++;
			}
		}
	}
	if(cont == tamanho)
		printf("CONTÉM\n");	
	else	
		printf("NÃO CONTÉM\n");
}

int main(){

	comparar(str1,str2);	
}
