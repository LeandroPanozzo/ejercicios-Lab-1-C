#include <stdio.h>
#include <conio.h>
void cargarMatriz(int matriz[3][3]) {
	printf("Ingrese los elementos de la matriz:\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("Ingrese el elemento (%d,%d): ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
	}
}

void mostrarMatriz(int matriz[3][3]) {
	printf("Matriz:\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}

int esSimetrica(int matriz[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = i + 1; j < 3; j++) {
			if (matriz[i][j] != matriz[j][i]) {
				return 0; /*develve 0 si no es simetrica*/
			}
		}
	}
	return 1;
}

int main() {
	int matriz[3][3];
	cargarMatriz(matriz);
	mostrarMatriz(matriz);
	
	if (esSimetrica(matriz)) {
		printf("La matriz es simétrica.\n");
	} else {
		printf("La matriz no es simétrica.\n");
	}
	
	
	getch();
	return 0;
}
