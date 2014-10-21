#include<stdio.h>
#include<stdlib.h>

typedef struct cadastrar{
	
	char NOME[50];
	float QTHORAS;
	float SALH;
	char DEPTO[3];
	int MATRIC;
	float SALTOTAL;

}cadastro;


int main(){

	int n, cont = 0, i, funcionario, maior_salario= 0;	
	cadastro *p;
	
	printf("Digite o número de funcionários: ");
	scanf("%d", &n);
	p = (cadastro *) malloc (50 * sizeof(cadastro));	

	for(i=0;i<n;i++){
		getchar();
		printf("NOME: ");
		fgets(p[i].NOME, 40, stdin);
		printf("Quantidade de Horas: ");
		scanf("%f", &p[i].QTHORAS);
		printf("SALÁRIO: ");
		scanf("%f", &p[i].SALH);
		getchar();		
		printf("DEPARTAMENTO: ");
		fgets(p[i].DEPTO, 3, stdin);
		getchar();		
		printf("MATRÍCULA: ");
		scanf("%d", &p[i].MATRIC);

		if((p[i].MATRIC) == 0 ){
			cont = cont + p->SALH;
			break;	
		}
		if((p[i].SALH) > maior_salario){
			maior_salario = p[i].SALH;
			funcionario = i;		
		}
	}
	
	p->SALTOTAL = cont;

	printf("\n");
	for(i = 0; i< n ; i++){
	
		printf("NOME: %s",p[i].NOME);
		printf("Quantidade de Horas: %f\n", p[i].QTHORAS);
		printf("SALÁRIO: %f\n", p[i].SALH);
		printf("DEPERTAMENTO: %s\n", p[i].DEPTO);
		printf("MATRÍCULA: %d\n\n", p[i].MATRIC);
	}

	printf("\nO funcionário com o maior salário é:\n");
	
	printf("NOME: %s",p[funcionario].NOME);
	printf("Quantidade de Horas: %f\n", p[funcionario].QTHORAS);
	printf("SALÁRIO: %f", p[funcionario].SALH);
	printf("DEPERTAMENTO: %s\n", p[funcionario].DEPTO);
	printf("MATRÍCULA: %d\n", p[funcionario].MATRIC);
	printf("O SALÁRIO TOTAL: %f\n\n", p->SALTOTAL);

	return 0;
}
