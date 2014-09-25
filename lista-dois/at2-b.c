/*

	O código abaixo apresenta erro, pois a variável auxiliar necessária para trocar o conteúdo das variáveis i e j tem ser somente um inteiro.

void troca (int *i, int *j) { 
	
	int *temp; 
	
	*temp = *i;  
	*i = *j;  
	*j = *temp;
}

	O código abaixo apresenta a solução corrigida

	
void troca (int *i, int *j) { 
	
	int temp; 
	
	*temp = *i;  
	*i = *j;  
	*j = temp;
}

*/
