#include <stdio.h>
#define M 3
#include <conio.h>

void imprimirArreg(int arreg[M*M]) {
	/* imprime un arreglo cualquiera */
	int i;
	for (i=0; i< M*M; i++){
		if( arreg[i] > 0 && arreg[i] < 10000 ) {
			printf(" %d,",arreg[i]);
		}
	}
}

void definir(int Mat[][M]){
	int i, j;
	int cont=0;
	for(i=0;i<M;i++){
		for(j=0;j<M;j++){
			printf("ingrese el valor de la matriz en la posicion [%d][%d]\n",i,j);
			scanf("%d",&Mat[i][j]);
			cont+=Mat[i][j];
			
		}
		
	}
}
	
	void recorrido(int Mat[][M]){
		int i, j;
		
		for(i=0;i<M;i++){
			for(j=0;j<M;j++){
				printf("matriz[%d][%d] = ",i,j);
				printf("%d \t", Mat[i][j]);
				
			}
			printf("\n");
		}
	}


void Pares(int Mat[][M], int arr[M*M]){
	int i, j;
	int cont=0;
	printf("\ncargar elementos pares: \n");
	for(i=0;i<M;i++){
		for(j=0;j<M;j++){
			if(Mat[i][j]%2==0){
				arr[cont]=Mat[i][j];
				cont++;
			}
			
		}
	}
	printf("\nlos pares de la matriz seran: \n");
	imprimirArreg(arr);
}
	void eliminar(int arr[M*M]){
	int i,j, tam=M*M;
	printf("\neliminar elementos repetidos \n");
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
			if(arr[i]==arr[j]){
				arr[j]=arr[j+1];
				
			}
		}
	}
	printf("array sin elementos repetidos: \n");
	imprimirArreg(arr);
}
	
void ordenarMat(int Mat[][M]){
	int i, j, k, temp;
	for (k = 0; k < M * M - 1; k++) {
		for (i = 0; i < M; i++) {
			for (j = 0; j < M - 1; j++) {
				if (Mat[i][j] > Mat[i][j + 1]) {
					temp = Mat[i][j];
					Mat[i][j] = Mat[i][j + 1];
					Mat[i][j + 1] = temp;
				}
			}
		}
	}
	recorrido(Mat);
}
	void eliminarRepetidos(int matriz[][M], int filas, int columnas) {
		int i, j, k;
		int numElementos = filas * columnas;
		
		// Verificar elementos repetidos y reemplazarlos por cero
		for (i = 0; i < filas; i++) {
			for (j = 0; j < columnas; j++) {
				int elemento = matriz[i][j];
				
				// Verificar si el elemento se repite en la matriz
				for (k = i; k < filas; k++) {
					int inicioColumna = (k == i) ? j + 1 : 0;
					for (int l = inicioColumna; l < columnas; l++) {
						if (elemento == matriz[k][l]) {
							matriz[k][l] = 0; // Reemplazar por cero
							numElementos--; // Actualizar el número de elementos únicos
						}
					}
				}
			}
		}
		
		// Si se han encontrado elementos repetidos, compactar la matriz
		if (numElementos < filas * columnas) {
			int nuevaMatriz[numElementos];
			int idx = 0;
			
			// Copiar los elementos únicos a la nueva matriz
			for (i = 0; i < filas; i++) {
				for (j = 0; j < columnas; j++) {
					if (matriz[i][j] != 0) {
						nuevaMatriz[idx] = matriz[i][j];
						idx++;
					}
				}
			}
			
			// Rellenar la matriz original con los elementos de la nueva matriz
			idx = 0;
			for (i = 0; i < filas; i++) {
				for (j = 0; j < columnas; j++) {
					if (matriz[i][j] != 0) {
						matriz[i][j] = nuevaMatriz[idx];
						idx++;
					}
				}
			}
		}
		recorrido(matriz);
	}
	
	void ordenar(int arrg[M*M]) {
		int i, j,aux;
		int tam=M*M;
		printf("\nordenar de mayor a menor el arreglo\n");	
		for (i = 0; i < tam; i++) {
			for (j = 0; j < tam -1; j++) {
				if (arrg[j] <arrg[j + 1]) {
					/*Intercambiar los elementos si están en el orden incorrecto*/
					aux = arrg[j];
					arrg[j] = arrg[j + 1];
					arrg[j + 1] = aux;
				}
			}
		}
		imprimirArreg(arrg);
	}

int main(int argc, char *argv[]) {
	
	int Matriz[M][M];
	int array[M*M];
	definir(Matriz);
	printf("recorrido\n");
	recorrido(Matriz);
	printf("\n matriz ordenada\n");
	ordenarMat(Matriz);
	printf("La matriz sin elementos repetidos es:\n");
	eliminarRepetidos(Matriz, M, M);
	Pares(Matriz, array);
	eliminar(array);
	ordenar(array);
	
	
	
	getch();
	return 0;
}



