#include <stdio.h>
#include <conio.h>
#define N 5
int main(int argc, char *argv[]) {
	int array[N];
	int i,aux=0,menor,mayor=0;
	float promedio;
	
	printf("ingrese los valores\n");
	for(i=0;i<N;i++){
		printf("el valor en la posicion %d \n", i);
		scanf("%d", &array[i]);
		aux+=array[i];
	}
	printf("el arreglo quedara: \n");
	for(i=0;i<N;i++){
		printf("el valor en la posicion %d \n", i);
		printf("%d", array[i]);
		printf("\n ");
	}
	printf("el arreglo quedara: \n");
	for(i=0;i<N;i++){
		printf("el valor en la posicion %d \n", i);
		printf("%d", array[i]);
		printf("\n ");
	}
	printf("el promedio sera: \n");
	promedio=aux/N;
	printf("%.2f \n",promedio);
	
	//nota menor
	menor=array[0];
	printf("la nota menor sera \n");
	for (i = 0; i < N ; i++) {
		if (array[i] < menor ) {
			menor = array[i];
		}
	}
	printf("%d \n",menor);
	
	//nota mayor
	mayor=array[0];
	printf("la nota mayor sera \n");
	for (i = 1; i < N; i++) {
		if (array[i] > mayor) {
			mayor = array[i];
		}
	}	
	printf("%d \n",mayor);
	
	
	getch();
	return 0;
}

