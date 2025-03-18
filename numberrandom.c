#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int N = 10; 
	int i;
	int *V = (int *)malloc (N * sizeof(int)); // caso de erro adicionar o * no int
	
	srand(time(NULL)); //para pegar a hora como parametro assim gerando numeros aleatorios diferentes sempre
	
	for (i=0; i < N; i++) V[i] = rand();
	
	for (i=0; i < N; i++) printf("%d\t", V[i]);

return 0;
}
