#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000

typedef struct dados{

	char nome;
	char sexo;
	struct dados *pai;
	struct dados *proxIrmao;
	struct dados *conjuge;
	struct dados *primeiroFilho;

}informacoes;

typedef struct {

	char nome;
	informacoes *registro;
	
}celula;

typedef struct {

	celula planilha[MAX];
	int cont ;
	
} tabela;


void iniciarTabela(tabela *p);


void info(tabela *t, char name, char sex);


int adicionarConjuge(tabela *t, char nome1, char nome2);


int adicionarPaiFilho(tabela *t, char nome1, char nome2);


int adicionarIrmao(tabela *t, char nome1, char nome2);


informacoes* buscarPais(tabela *t, char nome, int valor);


informacoes* buscarConjuge(tabela *t, char nome);


informacoes* buscarIrmao(tabela *t, char nome);


informacoes* buscarTioTia(tabela *t, char nome);


informacoes* buscarSobrinho(tabela *t, char nome1);


