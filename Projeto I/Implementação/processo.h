#include <stdio.h>
#include <stdbool.h>
#define MAX 30000	

typedef struct {

	char nome[15];
	char endereco[30];
	char nomeSupermercado[15];
	int rg;
	int valorCheque;
	int data;
	int telefone;
	int id;

}processo;


typedef struct tno{
    
	processo P[MAX];
	int topo;

}pilha;

void iniciarPilha(pilha *p); //  INICIA A ESTRUTURA DA DA PILHA


int pilhaVazia(pilha p); // VERIFICA SE A PILHA ESTÁ VAZIA


int pilhaCheia(pilha p); // VERIFICA SE A PILHA ESTA CHEIA


bool empilhar(pilha *p, processo dado); // EMPILHA O PROCESSO E REORGANIZA A PILHA DE ACORDO COM A PRIORIDADE


processo desempilhar(pilha *p, processo * dado);// DESEMPILHA O PROCESSO QUE ESTA NO TOPO


processo* infProcesso(processo *p);// PREENCHE O PROCESSO COM AS INFORMACOES NECESSARIAS


void mudarPrioridade(pilha *p, int id, int valor); // MUDA A PRIORIDADE DO PROCESSO. ESTA FUNCAO PASSA A PILHA, O ID DO PROCESSO QUE A PRIORIDADE SERÁ MUDADA E O NOVO VALOR DO CHEQUE


void listarTodos(pilha p);// PRINTA AS INFORMACOES DE TODOS OS PROCESSOS DA PILHA


void listarId(pilha p, int id);// PRINTA AS INFORMACOES DE UM PROCESSO ESPECIFICO DA PILHA


void listarTopo(pilha p);// PRINTA AS INFORMACOES DO PROCESSO NO TOPO DA PILHA


void listarBase(pilha p);// PRINTA AS INFORMACOES DO PROCESSO NA BASE DA PILHA


void removerProcesso(pilha *p, int id);// REMOVE UM PROCESSO DA PILHA A PARTIR DO ID INFORMADO PELO USUARIO


void supermercadoProcessos(pilha *p, char *nome); // REORDENA A PILHA, COLOCANDO OS PROCESSOS RELACIONADOS AO SUPERMERCADO COM PROBLEMA NO TOPO


