#include <stdio.h>
#include <conio.h>
#define N 8

void cargarArreglo(int arreglo[]) {
	printf("Ingrese los elementos del arreglo:\n");
	for (int i = 0; i < N; i++) {
		scanf("%d", &arreglo[i]);
	}
}

int buscarElemento(int arreglo[], int elemento) {
	for (int i = 0; i < N; i++) {
		if (arreglo[i] == elemento) {
			return i; /*Devuelve la posición de la ultima vez que aparece el elemento en el arreglo*/
		}
	}
	return -1; /*Devuelve -1 si no se encuentra el elemento*/
}

void eliminarElemento(int arreglo[], int posicion) { 
	for (int i = posicion; i < N - 1; i++) {
		arreglo[i] = arreglo[i + 1];
		/*elimina el elemento del 
		arreglo en la posición indicada. Los elementos 
		posteriores a esa posición se desplazan hacia la izquierda para llenar el espacio vacío.*/
	}
}

void mostrarArreglo(int arreglo[]) {
	printf("Arreglo actualizado: ");
	for (int i = 0; i < N; i++) {
		printf("%d ", arreglo[i]);
	}
	printf("\n");
}

int main() {
	int arreglo[N];
	int elemento, posicion;
	
	cargarArreglo(arreglo);
	
	printf("Ingrese un elemento a buscar: ");
	scanf("%d", &elemento);
	
	posicion = buscarElemento(arreglo, elemento);
	
	if (posicion != -1) {
		int apariciones = 0;
		for (int i = 0; i < N; i++) {
			if (arreglo[i] == elemento) {
				apariciones++;
			}
		}
		printf("El elemento se encuentra en el arreglo.\n");
		printf("Aparece %d veces y su última posición es: %d\n", apariciones, posicion);
		
		eliminarElemento(arreglo, posicion);
		mostrarArreglo(arreglo);
	} else {
		printf("El elemento no se encuentra en el arreglo.\n");
	}
	getch();
	return 0;
}
