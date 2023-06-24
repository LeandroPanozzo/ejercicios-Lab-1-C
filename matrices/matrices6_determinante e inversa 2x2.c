#include <stdio.h>
#include <math.h>
#include <conio.h>
void MatrizInversa(float a[2][2], float aInv[2][2]){
	float determinante = a[0][0] * a[1][1] - a[1][0] * a[0][1];
	
	if(determinante != 0){
		float k=1.0;
		float recipro = (k / determinante);
		
		aInv[0][0] = a[1][1] * recipro;
		aInv[0][1] = -(a[0][1] * recipro);
		aInv[1][0] = -(a[1][0] * recipro);
		aInv[1][1] = a[0][0] * recipro;
		
	}
	
}

int main() {
	float mat[2][2];
	float matInv[2][2];
	int i,j;
	printf("Ingrese los valores:\n");
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf("El valor en la posición [%d][%d]: ", i, j);
			scanf("%f", &mat[i][j]);
		}
	}
	
	printf("La matriz será:\n");
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf("%f\t", mat[i][j]);
		}
		printf("\n");
	}
	
	printf("La matriz inversa será:\n");
	MatrizInversa(mat, matInv);
	
	for(i = 0; i < 2; i++){
		for( j = 0; j < 2; j++){
			printf("%f\t", matInv[i][j]);
		}
		printf("\n");
	}
	getch();
	return 0;
}
