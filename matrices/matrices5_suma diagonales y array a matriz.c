#include <stdio.h>
#include <conio.h>
#define M 3
int main(int argc, char *argv[]) {
	int i,j, contador=0;
	int array[10]={1,2,3,4,5,6,7,8,9,10};
	int Matriz[M][M];
	for(i=0;i<M;i++){ /*fila*/
		for(j=0;j<M;j++){ /*columna*/
			Matriz[i][j]=array[contador];
			contador++;
		}
	}
	
	printf("la matriz sera: \n");
	for(i=0;i<M;i++){
		for(j=0;j<M;j++){
			printf("la matriz [%d][%d] = ", i,j);
			printf("%d \t",Matriz[i][j]);
		}
		printf("\n");
	}
	/*Diagonal princial*/
	int sumar=0;
	for (int i = 0; i < M; i++) {
		sumar += Matriz[i][i];
	}
	printf("la sumatoria de la diagonal principal sera: %d \n", sumar);
	
	/*diagonal secundaria*/
	int sumar2=0;
	for (int i = 0; i < M; i++) {
		sumar2 += Matriz[i][2-i];
	}
	printf("la sumatoria de la diagonal secundaria sera: %d \n", sumar2);
	
	
	return 0;
}

