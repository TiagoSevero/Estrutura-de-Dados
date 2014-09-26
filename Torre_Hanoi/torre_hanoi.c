#include <stdio.h>

void mudartorre (int numero, char origem, char destino, char temp){
	if (numero==1) {
		printf("\nMover disco 1 da torre %c para a torre %c", origem, destino);
	   	return;
	}
	  mudartorre(numero-1,origem,temp,destino);
	  printf("\nMover disco %d da torre %c para a torre %c", numero, origem, destino);
	  mudartorre(numero-1,temp,destino,origem);

};

int main(){
   
	   int discos;
	   printf("Digite a quantidade de discos: ");
	   scanf("%d",&discos);
	   mudartorre(discos,'A','C','B');
	   printf("\n");		 
	   return 0;
}
