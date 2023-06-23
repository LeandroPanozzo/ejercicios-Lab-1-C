#include <stdio.h>
#define N 9
int main(int argc, char *argv[]) {
	
	int lista[N];
	int i, suma=0;
	float resultado;
	
	
	for(i=0;i<N;i++){
		printf("ingrese el valor en la posicion %d\n",i);
		scanf("%d", &lista[i]);
		suma+=lista[i];
	}
	
	for(i=0;i<N; i++){
		printf("\n%d", lista[i]);
	}
	
	resultado=suma/N;
	printf("\nel promedio de los numeros sera: %.2f",resultado);
	
	return 0;
}

