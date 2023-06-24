#include <stdio.h>
/*sumatoria y promedio de los elementos*/
int sumatoria(int a[][2]){
	int sumar=0, promedio,cont=0;
	int i,j;
	for(i=0;i<5;i++){ /*fila*/
		for(j=0;j<2;j++){ /*columna*/
			printf("%d \t", a[i][j]);
			sumar+=a[i][j];/*sumamos todos los valores*/
			cont++;
		}
		printf("\n");
		
	}
	promedio=sumar/cont;
	printf("\n");
	return printf("la sumatroria sera de todos los valores sera: %d y el peromedio: %d\n", sumar, promedio);
}


int main(int argc, char *argv[]) {
	
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
	
	
	
	
	return 0;
}

