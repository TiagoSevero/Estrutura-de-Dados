#include <stdio.h>
#include <stdlib.h>
#include "hash.h"

int main(){

	tabela t;
	
	iniciarHash(&t);
	inserirHash(&t, 20);
	inserirHash(&t, 3);
	inserirHash(&t, 17);
	inserirHash(&t, 87);
	inserirHash(&t, 37);
	inserirHash(&t, 32);
	inserirHash(&t, 6);
	inserirHash(&t, 16);
	inserirHash(&t, 26);
	inserirHash(&t, 36);
	
	//imprimir(&t, 3);
	buscarHash(&t, 15);
	return 0;
}
