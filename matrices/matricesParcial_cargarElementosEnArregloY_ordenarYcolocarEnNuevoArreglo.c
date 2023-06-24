#include <stdio.h>
#include <conio.h>
#define N 3

void Matriz(int array[], int Mat[N][N], int longitud){
	int i, j,k=0;
	
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(k<longitud){
				Mat[i][j]=array[k];
				k++;
			} else {
				Mat[i][j] = 0; // Si el arreglo es más pequeño que la matriz, se llenan los espacios restantes con ceros
			}
			
		}
	}
	
	
}
	
	void mostrarMatriz(int matriz[N][N]) {
		int i, j;
		for (i = 0; i < N; i++) {
			for (j = 0; j < N; j++) {
				printf("%d ", matriz[i][j]);
			}
			printf("\n");
		}
	}
	
	/*Diagonal princial*/
	int Diagonal(int matriz[N][N]){
		
		int sumar=0;
		for (int i = 0; i < N; i++) {
			sumar += matriz[i][i];
		}
		printf("la sumatoria de la diagonal principal sera: %d \n", sumar);
		if(sumar%2==0){
			return printf("la sumatoria de la diagonal principal es par \n");
		}else{
			return printf("la sumatoria de la diagonal principal es impar \n");
		}
	}
	
		
	int divisible3(int Mat[N][N], int array[]){
		int i,j,k=0;
		for(i=0;i<N;i++){
			for(j=0;j<N;j++){
				if(Mat[i][j]%3==0){
					array[k]=Mat[i][j];
					k++;
				}
				
			}
		}
		return k;
	}
		
		void ordenarArreglo(int array[], int longitud) { /*longitud es el valor k*/
			int i, j, temp;
			for(i = 0; i < longitud - 1; i++) {
				for(j = 0; j < longitud - i - 1; j++) {
					if(array[j] > array[j + 1]) {
						temp = array[j];
						array[j] = array[j + 1];
						array[j + 1] = temp;
					}
				}
			}
			
			printf("\nel arreglo ordenado sera:\n");
			for(j = 0; j < longitud; j++) {
				printf("%d", array[j]);
			}
		}

int main(int argc, char *argv[]) {
	int tam=0;
	
	int Mat[N][N];
	int i;
	
	printf("ingrese el tamaño del arreglo: \n");
	scanf("%d", &tam);
	
	int arr[tam];
	
	printf("ingrese los valores del arreglo: \n");
	for(i=0;i<tam;i++){
		printf("ingrese el valor en la posicion %d ", i);
		scanf("%d",&arr[i]);
	}
	
	Matriz(arr+2,Mat,sizeof(arr)/sizeof(arr[0])-2); /*tamañño del arreglo es sizeof*/
	
	mostrarMatriz(Mat);
	
	Diagonal(Mat);
	
	
	
	int divisibleArreg[N*N]; /*se almacenaran los valores divisibles por 3*/
	int divisibleCont=divisible3(Mat,divisibleArreg); /*divisible3 devuelve el valor k y pondra dentro del divisibleArreg los valores divisibles por 3*/
	
	printf("el arreglo con los valores divisiblesera: \n");
	for(i = 0; i < divisibleCont; i++) { /*divisibleCont tiene el valor k*/
		printf("%d ", divisibleArreg[i]);
	}
	
	printf("\n se cargadon un total de %d numeros en el arreglo \n ", divisible3(Mat,divisibleArreg));
	
	ordenarArreglo(divisibleArreg, divisibleCont);
	getch();
	return 0;
}

