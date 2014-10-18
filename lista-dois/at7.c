#include<stdio.h>
#include<string.h>

char *str1;

char *strcopy(char *str){
	
		
	str = "Hello World";
	str1 = str;	
	
	return str1;
} 



int main(){

	char *ch;
	char *resultado;
	
	resultado = strcopy(ch);

	printf("%s\n", resultado);	
	return 0;
}
