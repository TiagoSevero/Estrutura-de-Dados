#include<stdio.h>

char *strcopy(char *str){
	
	str = "Hello World";
	
	return str;

} 



int main(){

	char *ch;
	char *resultado;
	
	resultado = strcopy(ch);

	printf("%s\n", resultado);	
	return 0;
}
