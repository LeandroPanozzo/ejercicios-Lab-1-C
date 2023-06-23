#include <stdio.h>

#define MAX 10

int main() {
	int arr[MAX];
	int num=0,i;
	int Max=MAX;
	int comp;
	printf("Array original: ");
	
	for (i = 0; i < Max; i++) {
		printf("\ningrese un valor");
		scanf("%d", &arr[i]);
		
		if(arr[i]==arr[i-1]){
			return printf("el número ya existe en el array, no se puede insertar");
			break;
		}
			
	}
	
	printf("ingrese la posicion del numero que desea quitar");
	scanf("%d", &num);
	for(i=num;i<Max-1;i++){ /*recorrera todas las posiciones menos la ultima*/
		arr[i]=arr[i+1]; /*en la primera iteracion el valor del num se rremlaza por la siguiente y asi*/
	}
	Max--; //disminuyo el tamaño del arreglo para que cuando imprima solo imprima el array-1
	for(i=0;i<Max;i++){
		printf("\n%d", arr[i]);
	}
	
	
	return 0;
	}
		
	
	


