/*
	A primira linha apenas declara as variáveis do programa, um inteiro, um ponteiro de inteiro e um ponteiro duplo de inteiro. 

			int x = 100, *p, **pp; 

	Na segunda linha o ponteiro p recebe a posição de memória da variável inteira x.	
		p = &x; 
 	
	Na terceira linha o ponteiro duplo pp recebe a posição de memória do ponteiro p, ou seja, recebe a posição de memória da variável x, pois como pp é um ponteiro duplo ele recebe o endereço para o qual o ponteiro p está apontando e não o endereço de p. 		
	
	pp = &p; 

	A quarta linha imprime o conteúdo da variável x dereferenciando o ponteiro duplo pp .

		printf("Valor de pp: %d\n", **pp); 

*/
