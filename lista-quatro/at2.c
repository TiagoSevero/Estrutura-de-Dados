#include <stdio.h>
#include <stdlib.h>

typedef struct cadastrar{
	
	int RGM;
	char *CURSO;
	int SEMESTRE;
	int ANOINICIO;
	
}alunos;


int main(){

	char *curso;
	int i;
	
	alunos *ADM = (alunos*) malloc(40*sizeof(alunos));
	alunos *ENG = (alunos*) malloc(40*sizeof(alunos));
	alunos *MED = (alunos*) malloc(40*sizeof(alunos));

	for(i=0; i<120 ; i++){	
		gets(curso);
	
		if(strcmp(curso,"ADM") == 0){

				printf("CURSO: %s\n",ADM->CURSO = curso);		
				printf("RMG_ADM: ");
				scanf("%d", &ADM[i].RGM);
				printf("SEMESTRE: ");
				scanf("%d", &ADM[i].SEMESTRE);
				printf("ANO DE INÍCIO: ");
				scanf("%d", &ADM[i].ANOINICIO);
				ADM++;
		}
	
		else if(strcmp(curso,"ENG") == 0){
				printf("CURSO: %s\n",ADM->CURSO = curso);
				ENG->CURSO = "ENG";		
				printf("RMG_ENG: ");
				scanf("%d", &ENG[i].RGM);
				printf("SEMESTRE: ");
				scanf("%d", &ENG[i].SEMESTRE);
				printf("ANO DE INÍCIO: ");
				scanf("%d", &ENG[i].ANOINICIO);
				ENG++;	
		}
	
		else if(strcmp(curso,"MED") == 0){
				printf("CURSO: %s\n",ADM->CURSO = curso);				
				MED->CURSO = "MED";		
				printf("RMG_MED: ");
				scanf("%d", &MED[i].RGM);
				printf("SEMESTRE: ");
				scanf("%d", &MED[i].SEMESTRE);
				printf("ANO DE INÍCIO: ");
				scanf("%d", &MED[i].ANOINICIO);
				MED++;		
		}
				
	}	
	return 0;
}

