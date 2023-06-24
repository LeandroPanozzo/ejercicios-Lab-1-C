#include <stdio.h>
/*sumatoria*/
int sumatoria(int a[][2]){
	int sumar=0, promedio,cont=0;
	int i,j;
	for(i=0;i<5;i++){ /*fila*/
		for(j=0;j<2;j++){ /*columna*/
			printf("%d \t", a[i][j]);
			sumar+=a[i][j];/*sumamos todos los valores*/
			
		}
		printf("\n");
		
	}
	
	printf("\n");
	return printf("la sumatroria sera de todos los valores sera: %d\n", sumar);
}
int busqueda(int a[][2], int buscar){
	int cont=0;
	int i,j;
	for(i=0;i<5;i++){ /*fila*/
		for(j=0;j<2;j++){ /*columna*/
			if(a[i][j]==buscar){
				cont++;
			}
		}
		
		
	}
	return printf("se encontro el valor un total de %d\n", cont);
}


int main(int argc, char *argv[]) {
	int buscar;
	int i, j;
	int matriz[5][2]={0,0,1,2,2,4,3,6,4,8};
	for(i=0;i<5;i++){ /*fila*/
		for(j=0;j<2;j++){ /*columna*/
			printf("matriz[%d][%d] = ",i,j);
			printf("%d \t", matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	for(i=0;i<5;i++){ /*fila*/
		for(j=0;j<2;j++){ /*columna*/
			printf("%d \t", matriz[i][j]);
			
		}
		printf("\n");
	}
	sumatoria(matriz);
	
	printf("ingrese el valor que desea buscar: \n");
	scanf("%d", &buscar);
	busqueda(matriz,buscar);
	
	return 0;
}

