#include <stdio.h>
#include <stdlib.h>

//definindo tipo abtrado de dado Fracao
typedef struct{
	int denominador;
	int numerador;
}Fracao;

//inicializa e ao utilizar esta funcao a fracao ex: 3/4 e atribuida a variavel q foi criada ex: X. ela junta tudo em uma unica variavel
Fracao criarFracao(int denominador, int numerador){
	Fracao F;
	F.denominador = denominador;
	F.numerador = numerador;
	return F;
};

//prototipo das funcoes
Fracao simplificarFracao(Fracao F);

int main(){
	
	Fracao X;
	X = criarFracao(8,4);
	
	X = simplificarFracao(X);
	printf("Fracao Simplificada %d/%d\n", X.numerador, X.denominador);
	
};

//implementando a funcao

Fracao simplificarFracao(Fracao F){
	int MDC= 1;
	int i, aux;
	//guardar o menor valor
	aux = (F.numerador > F.denominador) ? F.denominador : F.numerador;
	
	//girar a fracao para descobrir o MDC
	for (i=1; i<=aux; i++){
		if (F.numerador % i == 0 && F.denominador % i == 0)
			MDC = i;
	};
	
	//agora simplificar com o mdc
	F.numerador = F.numerador / MDC;
	F.denominador = F.denominador / MDC;
	
	return F;
};


//implementando outras operacoes...
