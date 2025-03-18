#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int N = 300000; 
	int i;
	int *V = (int *)malloc (N * sizeof(int)); // caso de erro adicionar o * no int
	clock_t t0, tf; //t0 primeiro momento que apertar o cronometro e tf para o ultimo momento que apertar o cronometro, para pausar o cronometro.
	double TempoCPU;
	
	srand(time(NULL)); //para pegar a hora como parametro assim gerando numeros aleatorios diferentes sempre
	
	// codigo cujo o tempo será medido
	t0 =clock();
	
	for (i=0; i < N; i++) V[i] = rand();
	for (i=0; i < N; i++) printf("%d\t", V[i]);
	
	tf = clock();


	TempoCPU = ((double)tf - t0) / CLOCKS_PER_SEC; // para medir tempo de execução 
	printf("\n\nTempo de execucao: %3lf segundos", TempoCPU);
	


	

return 0;
}
