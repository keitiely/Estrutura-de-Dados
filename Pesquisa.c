#include <stdio.h>
#include <stdlib.h>

#define ERRO -1

//Prototipo da função
int buscarPosicao(int *Vetor, int T, int Chave);

int main(){
	
	int v[] = {14, 29, 37, 11, 43, 25, 19, 32, 16, 22, 40, 13, 28, 35, 10, 45, 20, 38, 17, 24, 30, 41, 15, 27, 33, 18, 26, 39, 12, 21};
	int tam = sizeof(v)/sizeof(int);
	int elem = 85;
	int posicao = buscarPosicao(v, tam, elem);
	
	if (posicao != ERRO) printf("O elemento %d esta na posicao %d\n", elem, posicao);
		else printf("O elemento %d nao esta no vetor.\n", elem);
	
	
return 0;
};

//Implementção das funçoes

int buscarPosicao(int *Vetor, int T, int Chave){
	int i;
	for( i = 0; i < T; i++)
		if(Vetor[i] == Chave)
			return i;
		return ERRO;
};
