#include <stdio.h>

#define N 3 // Tamaño de la matriz

float calcularDeterminante(float matriz[N][N], int n) {
	float determinante = 0.0;
	
	if (n == 1) {
		return matriz[0][0]; // Caso base: matriz 1x1
	} else {
		float submatriz[N][N];
		int signo = 1;
		int i, j, k;
		
		for (k = 0; k < n; k++) {
			// Generar submatriz eliminando la primera fila y la columna k
			int subi = 0;
			for (i = 1; i < n; i++) {
				int subj = 0;
				for (j = 0; j < n; j++) {
					if (j != k) {
						submatriz[subi][subj] = matriz[i][j];
						subj++;
					}
				}
				subi++;
			}
			
			// Calcular el determinante de la submatriz recursivamente
			determinante += signo * matriz[0][k] * calcularDeterminante(submatriz, n - 1);
			
			// Alternar el signo
			signo = -signo;
		}
	}
	
	return determinante;
}

int main() {
	float matriz[N][N];
	int i, j;
	
	printf("Ingrese los valores de la matriz:\n");
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			printf("Ingrese el valor en la posición [%d][%d]: ", i, j);
			scanf("%f", &matriz[i][j]);
		}
	}
	
	float determinante = calcularDeterminante(matriz, N);
	
	printf("El determinante de la matriz es: %.2f\n", determinante);
	
	return 0;
}
