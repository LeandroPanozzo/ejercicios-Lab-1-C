#include <stdio.h>
#define Val 3
int main(int argc, char *argv[]) {
	int i,j;
	int mat[Val][Val];
	int sumar=0,sumar2=0;
	int sumarfil=0, sumarcol=0;
	
	printf("ingrese los valores");
	for(i=0;i<Val;i++){
		for(j=0;j<Val;j++){
			printf("El valor en la posición [%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	printf("La matriz será:\n");
	for(i = 0; i < Val; i++){
		for(j = 0; j < Val; j++){
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
	
	/*Diagonal princial*/
	
	for (i = 0; i < Val; i++) {
		sumar += mat[i][i];
	}
	printf("la sumatoria de la diagonal principal sera: %d \n", sumar);
	
	/*diagonal secundaria*/
	for (i = 0; i < Val; i++) {
		sumar2 += mat[i][2-i];
	}
	printf("la sumatoria de la diagonal secundaria sera: %d \n", sumar2);
	
	/*suma de filas*/
	j=0;
	for(i=0;i<Val;i++){
		sumarfil+=mat[i][j];
		if(i==(Val-1)&&sumarfil==sumar2){
			sumarfil=0;
			j++;
			for (i = 0; i < Val; i++) {
				sumarfil += mat[i][j];
				if(i==(Val-1)&&sumarfil==sumar2){
					sumarfil=0;
					j++;
					for (i = 0; i < Val; i++) {
						sumarfil += mat[i][j];
						if(sumarfil==sumar2){
							printf("\nla sumatorisa de filas es : %d", sumarfil);
						}
					}
				}
			}
		}
	}
	/*suma de columnas*/
	i=0;
	for(j=0;j<Val;j++){
		sumarcol+=mat[i][j];
		if(j==(Val-1)&&sumarcol==sumar2){
			sumarcol=0;
			i++;
			for (j = 0; j < Val; j++) {
				sumarcol += mat[i][j];
				if(j==(Val-1)&&sumarcol==sumar2){
					sumarcol=0;
					i++;
					for (j = 0; j < Val; j++) {
						sumarcol += mat[i][j];
						if(sumarcol==sumar2){
							printf("\nla sumatorisa de columnas es : %d \n", sumarcol);
						}
					}
				}
			}
		}
	}
	return 0;
}

