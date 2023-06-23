#include <stdio.h>
#include <math.h>
#define n 9
int main(int argc, char *argv[]) {
	int i,buscar;
	int lista[n];
	
	for(i=0; i<n;i++){
		printf("\ningrese el valor den %d", i);
		scanf("%d", &lista[i]);
	}
	for(i=0; i<n;i++){
		printf("\nel numero en %d es %d", i, lista[i]);
	}
	printf("\ningrese el numero que desea reemplazar por su cuadrado");
	scanf("%d", &buscar);
	
	for(i=0; i<n;i++){
		if(lista[i]==buscar){
			lista[i]=pow(lista[i],2);
		}else{
			printf("\nnumero no encontrado");
		}
	}
	printf("\nahora la lista queda: ");
	for(i=0;i<n;i++){
		printf("\nel valor en %d es de %d",i,lista[i]);
	}
	
	return 0;
}

