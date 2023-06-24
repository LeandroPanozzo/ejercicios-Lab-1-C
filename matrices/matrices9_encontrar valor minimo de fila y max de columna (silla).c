#include <stdio.h>
#include <conio.h>
#define M 3
int main(int argc, char *argv[]) {
	int mat[M][M];
	int i,j;
	int filaMin[M]; /*almacena los valores minimos de la fila*/
	int colMax[M];/*almacena los valores maximos de la columna*/
	int silla = 0;  /* Bandera para indicar si se encontró un punto de silla*/
	
	printf("Ingrese los valores:\n");
	for(i = 0; i < M; i++){
		for(j = 0; j < M; j++){
			printf("El valor en la posición [%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	
	printf("La matriz será:\n");
	for(i = 0; i < M; i++){
		for(j = 0; j < M; j++){
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
	
	/*comparar fila*/
	
	for(i = 0 ; i<M ; i++){
		int min = mat [i] [0];
		for(j = 1; j < M; j++){
			if(mat[i][j] < min){
				min = mat[i][j];
			}
		}
		filaMin[i]=min;
	}
	
	/*comparar columna*/
	
	for(j=0;j<M;j++){
		int max = mat[0][j];
		for(i=1;i<M;i++){
			if(mat[i][j] > max){
				max = mat[i][j];
			}
		}
		colMax[j] = max;
	}
	
	/*Verificar si algún valor es el menor de su fila y el mayor de su columna*/
	
	for(i = 0; i < M; i++){
		for(j = 0; j < M; j++){
			if(mat[i][j]==filaMin[i]&&mat[i][j]==colMax[j]){
				printf("El punto de silla se encuentra en la posición [%d][%d].\n", i, j);
				silla=-1; /*actualizo la bandera*/
			}
		}
	}
	
	if (!silla) {
		printf("No se encontró ningún punto de silla en la matriz.\n");
	}
	
	
	
	getch();
	return 0;
}

