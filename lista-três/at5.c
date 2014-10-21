#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 


typedef struct cadastro{ 
	char sobrenome[10]; 
	int  ano_nascimento;	
	int  matricula; 
}cadastro; 


void main(){ 
	
	int n, i;	
		
	printf("Digite o número de alunos a serem cadastrados:");
	scanf("%d",&n);
		
	cadastro *aluno =  malloc (n * sizeof(cadastro)); ;
	
	for (i=0;i<n;i++){	
			
		getchar();
		printf("SOBRENOME: "); 
		fgets(aluno[i].sobrenome, 10, stdin);
		printf("ANO DE NASCIMENTO: "); 
		scanf("%d",&aluno[i].ano_nascimento);		
		printf("MATRÍCULA: "); 
		scanf("%d",&aluno[i].matricula);
	} 
	for (i=0;i<n;i++){
	
		printf("%s", aluno[i].sobrenome);
		printf("%d\n", aluno[i].ano_nascimento);		
		printf("%d", aluno[i].matricula);
		printf("\n");
	}
	
	free(aluno);
} 
