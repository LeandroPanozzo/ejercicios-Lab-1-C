#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int numeritos[10];
	
	int indice=0;
	//solicitar los datos al usuario
	for(indice=0;indice<=9;indice++){
		printf("ingresa el elemento del indice del %d ", indice);
		scanf("%d", &numeritos[indice]);
	}
	//imprime los datos
	for(indice=0;indice<=9;indice++){
		printf(" el indice %d tiene un %d\n ", indice, numeritos[indice]);
		
	}
	
	return 0;
}

