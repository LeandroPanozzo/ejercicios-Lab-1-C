#include <stdio.h>
#include <conio.h>
#define N 3 /* Tamaño de la matriz*/

void intercambiarFilas(float matriz[N][N], int fila1, int fila2) {
	for (int j = 0; j < N; j++) {
		float temp = matriz[fila1][j];
		matriz[fila1][j] = matriz[fila2][j];
		matriz[fila2][j] = temp;
	}
}

void escalarFila(float matriz[N][N], int fila, float escalar) {
	for (int j = 0; j < N; j++) {
		matriz[fila][j] *= escalar;
	}
}

void sumaFilas(float matriz[N][N], int fila1, int fila2, float escalar) {
	for (int j = 0; j < N; j++) {
		matriz[fila1][j] += escalar * matriz[fila2][j];
	}
}

void eliminacionGaussiana(float matriz[N][N], float identidad[N][N]) {
	for (int i = 0; i < N; i++) {
		if (matriz[i][i] == 0) {
			int filaNoCero = -1;
			for (int k = i + 1; k < N; k++) {
				if (matriz[k][i] != 0) {
					filaNoCero = k;
					break;
				}
			}
			if (filaNoCero == -1) {
				printf("La matriz no tiene inversa.\n");
				return;
			}
			intercambiarFilas(matriz, i, filaNoCero);
			intercambiarFilas(identidad, i, filaNoCero);
		}
		
		float diagonal = matriz[i][i];
		escalarFila(matriz, i, 1.0 / diagonal);
		escalarFila(identidad, i, 1.0 / diagonal);
		
		for (int j = 0; j < N; j++) {
			if (j != i) {
				float factor = matriz[j][i];
				sumaFilas(matriz, j, i, -factor);
				sumaFilas(identidad, j, i, -factor);
			}
		}
	}
}

int main() {
	float matriz[N][N];
	float identidad[N][N];
	int i,j;
	printf("ingrese los valores de la matriz \n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("ingrese el valor en la posicion [%d][%d] \n",i,j);
			scanf("%f",&matriz[i][j]);
		}
	}
	printf("Matriz original:\n");
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			printf("%.2f ", matriz[i][j]);
		}
		printf("\n");
	}
	
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			if (i == j)
				identidad[i][j] = 1.0;
			else
				identidad[i][j] = 0.0;
		}
	}
	
	eliminacionGaussiana(matriz, identidad);
	
	
	
	printf("\nMatriz inversa:\n");
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			printf("%.2f ", identidad[i][j]);
		}
		printf("\n");
	}
	
	
	getch();
	return 0;
}


