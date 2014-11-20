#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "processo.h"


void iniciarPilha(pilha *p){

 	p->topo=-1;
}

int pilhaVazia(pilha p){

	return (p.topo == -1);
}

int pilhaCheia(pilha p){

	return (p.topo == MAX-1);
}

bool empilhar(pilha *p, processo dado){
	
	int i, j;
	processo aux;
	
	if(pilhaCheia(*p))
		return false;

	p->P[++(p->topo)]=dado;		
		
	if(p->topo > 0){
		for(j = 0 ; j <= (p->topo) ; j++){
			for(i = 1 ; i <= (p->topo) ; i++){
				if((p->P[i-1].valorCheque) > (p->P[i].valorCheque)){
					aux = p->P[i];
					p->P[i] = p->P[i-1];
					p->P[i-1] = aux;	
				}	
			}
		}
	}	
	return true;
}

processo desempilhar(pilha *p, processo * dado){

	if(pilhaVazia(*p))
		return ;
    	    
	return *dado= p->P[p->topo --];
}

processo* infProcesso(processo *p){
		
	printf("NOME: ");
	gets(p->nome);
	printf("Endereço: ");
	gets(p->endereco);
	printf("Nome do Supermercado: ");
	gets(p->nomeSupermercado);
	printf("Identidade: ");
	scanf("%d", &p->rg);
	printf("Telefone: ");
	scanf("%d", &p->telefone);
	printf("Valor do Cheque: ");
	scanf("%d", &p->valorCheque);
	printf("DATA: ");
	scanf("%d", &p->data);
	printf("ID: ");
	scanf("%d", &p->id );
	getchar();
	return p;
}

void mudarPrioridade(pilha *p, int id, int valor){
	
	int i, j;
	
	processo tmp;
		
	for(i = 0 ; i <= (p->topo) ; i++){
		if(p->P[i].id == id){
			p->P[i].valorCheque = valor;
			break;
		}
	}
	for (i = 1; i <= (p->topo) ; i++) {
		j = i;
		while (j > 0 && p->P[j - 1].valorCheque > p->P[j].valorCheque) {
			tmp = p->P[j];
			p->P[j] = p->P[j - 1];
			p->P[j - 1] = tmp;
			j--;
		}
	}	
}

void supermercadoProcessos(pilha *p, char *nome){
	
	int i, j, flag = 0, cont =p->topo, contar=0 ;
	processo aux;
	
	for(j = 0 ; j< p->topo ; j++ ){
		if (strcmp (p->P[j].nomeSupermercado, nome) == 0)
				contar++;
	}			
	for(j = 0 ; j< p->topo ; j++ ){
		if(flag == 1){
			j = j -1;
			flag = 0;
		}
		if (strcmp (p->P[j].nomeSupermercado, nome) == 0){
			for(i = j ; i <(cont) ; i++ ){
				aux = p->P[i];
				p->P[i] = p->P[i+1];
				p->P[i+1] = aux;
			}
		}
		if ((strcmp (p->P[j].nomeSupermercado, nome) == 0) && j < (cont - contar))
				flag = 1;		
	}
}

void listarTodos(pilha p){

	int i;
	
	for(i = 0 ; i <= (p.topo) ; i++){
		printf("NOME : %s\n", p.P[i].nome);
		printf("ENDEREÇO : %s\n", p.P[i].endereco);
		printf("NOME DO SUPERMERCADO: %s\n", p.P[i].nomeSupermercado);
		printf("RG: %d\n", p.P[i].rg);
		printf("TELEFONE: %d\n", p.P[i].telefone);
		printf("VALOR DO CHEQUE: %d\n", p.P[i].valorCheque);
		printf("ID: %d\n", p.P[i].id);
	}
}

void listarId(pilha p, int id){

	int i;
	
	for(i = 0 ; i <= (p.topo) ; i++){
		if(p.P[i].id == id)
			break;
	}		
	printf("NOME : %s\n", p.P[i].nome);
	printf("ENDEREÇO : %s\n", p.P[i].endereco);
	printf("NOME DO SUPERMERCADO: %s\n", p.P[i].nomeSupermercado);
	printf("RG: %d\n", p.P[i].rg);
	printf("TELEFONE: %d\n", p.P[i].telefone);
	printf("VALOR DO CHEQUE: %d\n", p.P[i].valorCheque);
	printf("ID: %d\n", p.P[i].id);
}

void listarTopo(pilha p){

	printf("NOME : %s\n", p.P[p.topo].nome);
	printf("ENDEREÇO : %s\n", p.P[p.topo].endereco);
	printf("NOME DO SUPERMERCADO: %s\n", p.P[p.topo].nomeSupermercado);
	printf("RG: %d\n", p.P[p.topo].rg);
	printf("TELEFONE: %d\n", p.P[p.topo].telefone);
	printf("VALOR DO CHEQUE: %d\n", p.P[p.topo].valorCheque);
	printf("ID: %d\n", p.P[p.topo].id);
}

void listarBase(pilha p){

	if(p.topo == -1)
		return;
		
	printf("NOME : %s\n", p.P[0].nome);
	printf("ENDEREÇO : %s\n", p.P[0].endereco);
	printf("NOME DO SUPERMERCADO: %s\n", p.P[0].nomeSupermercado);
	printf("RG: %d\n", p.P[0].rg);
	printf("TELEFONE: %d\n", p.P[0].telefone);
	printf("VALOR DO CHEQUE: %d\n", p.P[0].valorCheque);
	printf("ID: %d\n", p.P[0].id);
}

void removerProcesso(pilha *p, int id){
	
	int i, j;
	processo aux;
	
	if(pilhaVazia(*p))
		exit(0);
	for(i = 0 ; i <= (p->topo) ; i++){
		if(p->P[i].id == id)
			break;
	}
	for(j = i; j<(p->topo); j++){
		aux = p->P[j];
		p->P[j] = p->P[j+1];
		p->P[j+1] = aux;
	}
	p->topo --;
}

