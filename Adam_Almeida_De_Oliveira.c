/**
 * 
 * CÓDIGO DESENVOLVIDO PARA A DISCIPLINA DE ESTRUTURA DE DADOS I
 * FACULDADE :: UNICESUMAR
 * UTILIZANDO A LINGUAGEM C
 * ANO :: 2020
 * ALUNO :: ADAM ALMEIDA DE OLIVEIRA
 * RA ::  1834821-5
 * 
 * PESQUISAS REALIZADAS EM VIDEO TUTORIAIS DIVERSOS, E DOCUMENTAÇÃO DA LINGUAGEM
 * 
 **/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAMRA 8

typedef struct {
	int Item[TAMRA];
	int Topo;
}AdamPilha;

void AdamPilha_Inicia (AdamPilha *p){
	p->Topo = -1;	
}

int AdamPilha_Vazia (AdamPilha *p){
	if (p->Topo == -1){
		return 1;
	}else{
		return 0;
	}
	
}

int AdamPilha_Cheia (AdamPilha *p){
	if (p->Topo == TAMRA -1){
		return 1;
	}else{
		return 0;
	}
}

void AdamPilha_Empilha (AdamPilha *p, int x){
	if(AdamPilha_Cheia(p) == 1){
		printf(" -> A Pilha está cheia");
	}else{
		p->Topo++;
		p->Item[p->Topo] = x;
		printf("%d ", x);
		
	}
}

int AdamPilha_Desempilha (AdamPilha *p){
	int aux;
	if(AdamPilha_Vazia(p) == 1){
		printf("Pilha Vazia");
	}else{
		aux = p->Item[p->Topo];
		p->Topo--;
		printf("%d ", aux);//Imprime na tela o que foi desempilhado
		return aux;
		
	}
}

int main() {
	setlocale(LC_ALL,"Portuguese");
	AdamPilha *p = (AdamPilha*)malloc(sizeof(AdamPilha));
	AdamPilha_Inicia(p);
	
	// RA = 1834821-5
	printf("\n");
	
	AdamPilha_Empilha(p, 1);//Desempilha o 1
	AdamPilha_Empilha(p, 8);//Desempilha o 8
	AdamPilha_Empilha(p, 3);//Desempilha o 3
	AdamPilha_Empilha(p, 4);//Desempilha o 4
	AdamPilha_Empilha(p, 8);//Desempilha o 8
	AdamPilha_Empilha(p, 2);//Desempilha o 2
	AdamPilha_Empilha(p, 1);//Desempilha o 1
	AdamPilha_Empilha(p, 5);//Desempilha o 5
	
	printf("\n\n");
	int aux;
	
	aux = AdamPilha_Desempilha(p);//Desempilha o 5
	aux = AdamPilha_Desempilha(p);//Desempilha o 1
	aux = AdamPilha_Desempilha(p);//Desempilha o 2
	aux = AdamPilha_Desempilha(p);//Desempilha o 8
	aux = AdamPilha_Desempilha(p);//Desempilha o 4
	aux = AdamPilha_Desempilha(p);//Desempilha o 3
	aux = AdamPilha_Desempilha(p);//Desempilha o 8
	aux = AdamPilha_Desempilha(p);//Desempilha o 1
	
	return 0;

}



