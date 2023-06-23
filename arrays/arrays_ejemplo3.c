#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int tamano=0; 
	int indice=0;
	printf("de que tamaño quieres que sea tu vector? ");
	scanf("%d", &tamano);
	
	//declaro el vector
	
	int numeritos[tamano];
	for(indice=0;indice<tamano; indice++){
		printf("ingresa el elemento del indice %d: ", indice);
		scanf("%d", &numeritos[indice]);
		
	}
	
	//imprimir los datos del array
	for(indice=0;indice<tamano;indice++){
		printf("el indice %d tiene un %d\n ", indice, numeritos[indice]);
	}
	
	return 0;
}

