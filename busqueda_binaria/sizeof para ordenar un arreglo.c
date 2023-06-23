#include <stdio.h>
/*eliminacion buscar*/
void insercion(int arr[], int longitud) {
	int i, k, j;
	for (i = 1; i < longitud; i++) {
		k = arr[i]; //guardo la variable, en cada iteracion del for ira cambiando
		j = i - 1; //guardo el indice de la variable
		
		//en el while cada elemento i guardado en k se compara con el valor del array en j que empieza en 0
		while (j >= 0 && arr[j] > k) {
			arr[j + 1] = arr[j]; //mueve el valor a la derecha
			j = j - 1; //decrementa el valor de la variable en 1  para continuar comparando con los elementos anteriores en la primera iteracion sera -1 y saldra del while .
		}
		arr[j + 1] = k; //en la primera iteracion sera lo mismo que arr[0]=k(k sera 0 si es que el valor en arr[1] es 0 sino sera otro valor)
	}
}

//importante: arr[i] es diferente al arr[j]

int main() {
	
	int arr[10];
	int longitud = sizeof(arr) / sizeof(arr[0]); /*se hace esta división es que el operador "sizeof" devuelve el tamaño de un objeto en bytes, y al
	dividir el tamaño total del arreglo entre el tamaño de un solo elemento, obtenemos el número de elementos del arreglo.*/
	int i;
	
	for(i=0;i<10;i++){
		printf("ingrese el valor en la posicion %d",i);
		scanf("%d", &arr[i]);
	}
	
	
	printf("Array antes de ordenar:\n");
	for (i = 0; i < longitud; i++) {
		printf("%d \n", arr[i]);
	}
	
	insercion(arr, longitud);
	
	printf("Array ordenado:\n");
	for (i = 0; i < longitud; i++) {
		printf("%d \n", arr[i]);
	}
	
	
	
	
	return 0;
}
