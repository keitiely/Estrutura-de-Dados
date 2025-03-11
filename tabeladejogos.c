#include <stdio.h>
#include <stdlib.h>
#define ERRO -1

typedef struct {
	int Posicao;
	char Estado[32];
	char Time[32];
	int Pontos;
	int J; // N° de jogos
	int V; // N° de vitórias
	int E; // N° de empates
	int D; // N° de derrotas
	int GP; // Gols marcados
	int GC; // Gols sofridos
	int SD; // Saldo de gols
	float Aproveitamento; // % de pontos conquistados em relação ao total de pontos disputados
} Equipe;


//Prototipo da função

Equipe *lerDados(const char*NomeArquivo);

int main(){
	
		Equipe *Dados = lerDados("tas.csv");
	
	
return 0;
}

//Implementção das funçoes

Equipe *lerDados(const char *NomeArquivo){
	FILE *fp = fopen(NomeArquivo, "r");
	
	if (fp== NULL){
	
		printf("O arquivo nao pode ser aberto!\n");
		exit(ERRO);
		};
	


Equipe *X = malloc(20 * sizeof (Equipe));
		if (X== NULL){
			printf("Erro ao alocar memoria!\n");
			exit(ERRO);
			};
			
			
	int N = 0; //indice para o vetor de equipes
	char Cabecalho[100]; //Para guardar a primeira linha que nao sera usada		
	fscanf(fp, "%s", Cabecalho);
					
	
	while(fscanf(fp, "%d;%[^;];%[^;];%d;%d;%d;%d;%d;%d;%d;%d", &X[N].Posicao, &X[N].Estado, X[N].Time, X[N].Pontos, &X[N].J, &X[N].V, &X[N].E, &X[N].D, &X[N].GP, &X[N].GC, &X[N].SD==1)){
		printf("%s\n", X[N].Time);
		X[N].Aproveitamento = 100 * (float) X[N].Pontos / (float) (3 * X[N].J);
		N++;
	};
	
	fclose(fp);
	
	return X;
	
}
			
