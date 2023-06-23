#include <stdio.h>
#define N 50
#include <stdlib.h>

int compararCaracteres(const void* a, const void* b) {
	const char* charA = (const char*) a;
	const char* charB = (const char*) b;
	return *charA - *charB;
}


int main(int argc, char *argv[]) {
	int n=N;
	char array[N];
	int posicion;
	for(int i=0;i<N; i++){
		printf("ingrese el primer caracter en la posicion %d\n", i+1);
		scanf(" %c", &array[i]);
	}
	
	qsort(array, N, sizeof(char), compararCaracteres); /*La función qsort() toma cuatro argumentos: el arreglo a ordenar, el número de 
	elementos en el arreglo, el tamaño de cada elemento en el arreglo (en bytes) y la función comparadora*/
	for(int i=0;i<N; i++){
		printf("los valores son: %c en la posicion: %d\n", array[i],i);
	}
	
	printf("ingrese la posicion que desea eliminar\n");
	scanf("%d", &posicion);
	
	for(int i=posicion;i<n-1; i++){
		
		array[i]=array[i+1];
	}
	n--;
	
	for(int i=0;i<n; i++){
		
		printf("el arreglo quedara: %c\n", array[i]);
		
	}
	
	
	return 0;
}

