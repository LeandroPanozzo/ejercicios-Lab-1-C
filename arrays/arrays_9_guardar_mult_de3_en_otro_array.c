#include <stdio.h>
#include <conio.h>
#define N 10
int main(int argc, char *argv[]) {
	int cont=0,cont2=0;
	int array[N], array2[cont],array3[cont2];
	int i;
	
	printf("ingrese los valores\n");
	for(i=0;i<N;i++){
		printf("el valor en la posicion %d \n", i);
		scanf("%d", &array[i]);
		
	}
	
	printf("\n");
	printf("El arreglo quedar� as�:\n");
	for (i = 0; i < N; i++) {
		printf("Valor en la posici�n %d: %d\n", i, array[i]);
	}
	
	for (i = 0; i < N; i++) {
		if (array[i] % 3 == 0) {
			array2[cont] = array[i];
			cont++;
		} else {
			array3[cont2] = array[i];
			cont2++;
		}
		
	}
	printf("\n");
	printf("El arreglo con m�ltiplos de 3 quedar� as�:\n");
	for (i = 0; i < cont; i++) {
		printf("Valor en la posici�n %d: %d\n", i, array2[i]);
	}
	
	printf("\n");
	printf("El arreglo con n�meros que no son m�ltiplos de 3 quedar� as�:\n");
	for (i = 0; i < cont2; i++) {
		printf("Valor en la posici�n %d: %d\n", i, array3[i]);
	}
	
	
	getch();
	return 0;
}
