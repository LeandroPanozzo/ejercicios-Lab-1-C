#include <stdio.h>

int sum(int a[], int tamano){
	if (tamano == 0) {
		return 0;
	} else {
		return a[tamano-1] + sum(a, tamano-1); /*a[tamano-1] va sumando el valor 
		en cada posicion empezando en la posicion mayor sum(a, tamano-1), saca el valor en cada posicion para irse sumando en cada iteracion */
	}
	
}

int main(int argc, char *argv[]) {
	int tamano;
	
	printf("ingrese el tamaño del array");
	scanf("%d",&tamano);
	int array[tamano];
	
	for(int i=0; i<tamano; i++){
		printf("\ningrese el valor en %d", i);
		scanf("%d", &array[i]);
	}
	printf("\nla suma de los elementos es %d", sum(array,tamano));
	
	
	return 0;
}

