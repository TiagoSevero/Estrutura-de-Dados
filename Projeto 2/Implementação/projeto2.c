#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "projeto2.h"

//------------------------------------------------- MÓDULO 1 --------------------------------------------------------//

void iniciarTabela(tabela *t){

 	t->cont=-1;
}

void info(tabela *t, char name, char sex){
	
	t->cont++;
	
	informacoes *novoNO = (informacoes*) malloc(sizeof(informacoes));
	
	if(novoNO == NULL)
		return;
	
	novoNO->nome = name;
	novoNO->sexo = sex;
	novoNO->pai = NULL;
	novoNO->proxIrmao = NULL;
	novoNO->primeiroFilho = NULL;
	novoNO->conjuge = NULL;
	
	t->planilha[t->cont].nome = name;
	t->planilha[t->cont].registro = novoNO;

}

int buscarTabela(tabela *t, char nome){
	int i, j, flag, temp;
	;
	flag = 0;
	
	for(i = 0; i<= t->cont ; i++){
		if(nome == t->planilha[i].nome){
				temp = i;
				flag = 1;
				break;
		}
	}
	if(!flag)
		return -1;
	else
		return temp;
}
int adicionarIrmao(tabela *t, char nome1, char nome2){
	
	int temp1, temp2 ; 	
	informacoes *aux;
		
	if(nome1 == nome2){
		printf("NOMES IGUAIS!!\n");
		return;
	}
	
	temp1 = buscarTabela(t, nome1);
	
	if(temp1 == -1){
		printf("Primeira pessoa não encontrada!\n");
		return 0;
	}
	
	temp2 = buscarTabela(t, nome2);
	
	if(temp2 == -1){
		printf("Segunda pessoa não encontrada!\n");
		return 0;
	}
	if(t->planilha[temp1].registro->conjuge == t->planilha[temp2].registro){
		printf("Este é o seu conjuge\n");
		return 0;
	}
	aux = t->planilha[temp1].registro;
	while(aux!=NULL){
		if(aux->pai == t->planilha[temp2].registro){
			printf("Este é o seu ancentral\n");
			return;
		}
		aux = aux->pai;
	}
	aux = t->planilha[temp1].registro->primeiroFilho;
	while(aux!=NULL){
		if(aux == t->planilha[temp2].registro){
			printf("Este é o seu filho\n");
			return;
		}
		aux=aux->proxIrmao;	
	}
	if(t->planilha[temp1].registro->pai != t->planilha[temp2].registro->pai){
		printf("Não são filhos do mesmo pai\n");
		return 0;
	}
	if(t->planilha[temp1].registro->proxIrmao == NULL)
		t->planilha[temp1].registro->proxIrmao = t->planilha[temp2].registro;
	else{
		aux = t->planilha[temp1].registro->proxIrmao;
		while (aux->proxIrmao!= NULL)
			aux = aux->proxIrmao;
		aux->proxIrmao = t->planilha[temp2].registro;
	}
	return 1;	
}

int adicionarPaiFilho(tabela *t, char nome1, char nome2){
	
	int  temp1, temp2; 	
	informacoes *aux;
	
	if(nome1 == nome2){
		printf("NOMES IGUAIS!!\n");
		return;
	}
	temp1 = buscarTabela(t, nome1);
	
	if(temp1 == -1){
		printf("Primeira pessoa não encontrada!\n");
		return 0;
	}
	temp2 = buscarTabela(t, nome2);
	
	if(temp2 == -1){
		printf("Primeira pessoa não encontrada!\n");
		return 0;
	}	
	if(t->planilha[temp1].registro->conjuge == NULL){
		printf("Não tem cônjuge!\n");
		return 0;
	}
	if(t->planilha[temp1].registro->proxIrmao == t->planilha[temp2].registro){
		printf("Este é o seu irmão\n");
		return;
	}
	if(t->planilha[temp1].registro->conjuge == t->planilha[temp2].registro){
		printf("Este é o seu conjuge\n");
		return;
	}
	if(t->planilha[temp2].registro->pai !=NULL){
		printf("Já tem pai!\n");
		return;
	}
	if(t->planilha[temp1].registro->primeiroFilho == NULL)	
		t->planilha[temp1].registro->primeiroFilho = t->planilha[temp2].registro;
	else{	
		aux = t->planilha[temp1].registro->primeiroFilho;
		while(aux->proxIrmao!= NULL)
			aux = aux->proxIrmao;
		aux->proxIrmao = t->planilha[temp2].registro;
	}
	t->planilha[temp2].registro->pai = t->planilha[temp1].registro;
	return 1;
}

int adicionarConjuge(tabela *t, char nome1, char nome2){

	int  temp1, temp2; 
	
	if(nome1 == nome2){
		printf("NOMES IGUAIS!!\n");
		return;
	}
	temp1 = buscarTabela(t, nome1);
	
	if(temp1 == -1){
		printf("Primeira pessoa não encontrada!\n");
		return 0;
	}
	temp2 = buscarTabela(t, nome2);
	
	if(temp2 == -1){
		printf("Primeira pessoa não encontrada!\n");
		return 0;
	}
	if(t->planilha[temp1].registro->conjuge != NULL  || t->planilha[temp2].registro->conjuge != NULL){
		printf("Pessoa já casada!\n");
		return;
	}
	if((t->planilha[temp1].registro->sexo) == (t->planilha[temp2].registro->sexo)){
		printf("Pessoas do mesmo sexo\n");
		return ;
	}	
	
	//irmão
	if(t->planilha[temp1].registro->proxIrmao == t->planilha[temp2].registro){
		printf("Este é o seu irmão\n");
		return;
	}
	//filho
	if(t->planilha[temp1].registro->primeiroFilho == t->planilha[temp2].registro){
		printf("Este é o seu filho\n");
		return;
	}
	else{
		t->planilha[temp1].registro->conjuge = t->planilha[temp2].registro;
		t->planilha[temp2].registro->conjuge = t->planilha[temp1].registro;
	}		
	return 1;
}

//--------------------------------------------------- MÓDULO 2 --------------------------------------------------------------//

informacoes* buscarPais(tabela *t, char nome1, int valor){

	int temp, i;
	informacoes *aux;
	
	temp = buscarTabela(t, nome1);
	
	if(temp == -1){
		printf("Pessoa não encontrada!\n");
		return 0;
	}
	if(t->planilha[temp].registro->pai == NULL){
		printf("NAO TEM");
		return NULL;
	}
	aux = t->planilha[temp].registro;
	
	for(i = 0; i < valor; i++){
		aux = aux ->pai;
		if(aux->pai == NULL)
			break;
	}
	if(i!=valor)
		printf("NÃO TEM ESTE ANCESTRAL\n");
	else{		
		printf("Masculino: %c\n",aux->nome );
		printf("Feminino: %c\n", aux->conjuge->nome);		
	}
	return aux;
}

informacoes* buscarFilho(tabela *t, char nome1){

	int temp;
	informacoes *aux;
	temp = buscarTabela(t, nome1);
	
	if(temp == -1){
		printf("Pessoa não encontrada!\n");
		return 0;
	}
	aux = t->planilha[temp].registro->primeiroFilho;
	if(aux == NULL){
		printf("Não tem filhos\n");
		return;
	}
	
	printf("Filhos(%c): ", nome1); 
	while(aux!=NULL){
		printf("%c ", aux->nome);
		aux = aux->proxIrmao;	
	}
	return t->planilha[temp].registro->primeiroFilho;
}

informacoes* buscarConjuge(tabela *t, char nome1){

	int temp;
	
	temp = buscarTabela(t, nome1);
	
	if(temp == -1){
		printf("Pessoa não encontrada!\n");
		return 0;
	}
		
	printf("CÔNJUGE: %c\n", t->planilha[temp].registro->conjuge->nome);	
	return t->planilha[temp].registro->conjuge;
}

informacoes* buscarIrmao(tabela *t, char nome1){

	int temp;
	informacoes *aux;
	
	temp = buscarTabela(t, nome1);
	
	if(temp == -1){
		printf("Pessoa não encontrada!\n");
		return 0;
	}
	if(t->planilha[temp].registro->pai == NULL){//verificação na raiz
		if(t->planilha[temp].registro->sexo == 'f' ){	//verificar se é o conjuge 
			printf("Não tem irmãos nessa família\n");
			return 0;
		}
		else{
			aux = t->planilha[temp].registro;
		}
	}
		
	else{
		aux = t->planilha[temp].registro->pai->primeiroFilho;
	}
	if(aux->proxIrmao ==NULL){
		printf("Não tem irmãos\n");
		return NULL;
	}
	printf("Irmaos(%c): ", nome1);
	
	while(aux!=NULL){
		if(aux->nome != nome1)
			printf("%c ", aux->nome);
		aux = aux->proxIrmao;
	}
	printf("\n");	
	return t->planilha[temp].registro->proxIrmao;
}

informacoes* buscarTioTia(tabela *t, char nome1){

	int temp;
	informacoes *aux;
	
	temp = buscarTabela(t, nome1);
	if(temp == -1){
		printf("Pessoa não encontrada!\n");
		return 0;
	}
	if(t->planilha[temp].registro->pai == NULL){ // testa para ver se tem pai
		printf("Não tem tios\n");
		return;
	}
	if(t->planilha[temp].registro->pai->pai!= NULL){ // testa para ver se tem avô
		aux = t->planilha[temp].registro->pai->pai->primeiroFilho;
	}	
	
	else	
		aux = t->planilha[temp].registro->pai->primeiroFilho; // primeiro irmão
	if(aux->proxIrmao == NULL){
		printf("SEM TIOS\n");
		return 0;
	}
	if(aux->nome == t->planilha[temp].registro->pai->nome) 
			aux = aux->proxIrmao;
	printf("TIO(A): ");
	while(aux!=NULL){
		
		printf("%c ", aux->nome);
		aux = aux->proxIrmao;
		
		if(aux == t->planilha[temp].registro->pai)
			aux = aux->proxIrmao;
		if(aux == NULL)
			exit(0);
	}	
	return t->planilha[temp].registro->pai->proxIrmao;
}

informacoes* buscarSobrinhos(tabela *t, char nome1){

	int temp;
	informacoes *aux1, *aux2;
	
	temp = buscarTabela(t, nome1);
	if(temp == -1){
		printf("Pessoa não encontrada!\n");
		return 0;
	}
	
	if(t->planilha[temp].registro->pai == NULL ){
		if(t->planilha[temp].registro->proxIrmao == NULL){
			printf("Não tem sobirnhos\n");
			return;
		}
		else
			aux1 = t->planilha[temp].registro->proxIrmao;
	}
	else
		aux1 = t->planilha[temp].registro->pai->primeiroFilho;
	
	if (aux1->proxIrmao == NULL){
		printf("SEM SOBRINHO\n");
		return 0;
	}
	if(aux1->nome == nome1) 
		aux1 = aux1->proxIrmao;
			
	while(aux1 != NULL){
		aux2 = aux1->primeiroFilho;
		while(aux2!=NULL){
			printf("%c ", aux2->nome);
			aux2 = aux2->proxIrmao;
		}
		aux1 = aux1->proxIrmao;
		if(aux1 == t->planilha[temp].registro){
			aux1 = aux1->proxIrmao;
		}
		if(aux1 == NULL)
			exit(0);
	}
	return t->planilha[temp].registro->proxIrmao->primeiroFilho;
}
