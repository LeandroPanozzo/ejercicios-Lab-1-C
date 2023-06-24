#include <stdio.h>
#define M 4
#include <conio.h>
void divisible4(int Mat[][M]){
	int i, j;
	int cont=0;
	for(i=0;i<M;i++){
		for(j=0;j<M;j++){
			if(Mat[i][j]%4==0){
				cont++;
			}
		}
	}
	printf("la cantidad de numeros divisibles por 4 es: %d\n", cont);
}

void definir(int Mat[][M]){
	int i, j;
	int cont=0;
	for(i=0;i<M;i++){
		for(j=0;j<M;j++){
			printf("ingrese el valor de la matriz en la posicion [%d][%d]",i,j);
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
			if(Mat[i][j] % 4 == 0){
				printf("(Divisible por 4)\n");
			} else {
				printf("\n");
			}
		}
		printf("\n");
	}
}


int main(int argc, char *argv[]) {
	
	int Matriz[4][4];
	definir(Matriz);
	recorrido(Matriz);
	divisible4(Matriz);
	getch();
	return 0;
}


