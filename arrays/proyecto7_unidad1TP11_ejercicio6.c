#include <stdio.h>
#define N 10
int main(int argc, char *argv[]) {
	int cont=0,posicion,valor, encontrado=0;
	int array[N]={1,2,3,4,5,6,7,8,9,10};
	
	for(int i=0; i<N;i++){
		printf("%d -- ", array[i]);
		cont+= array[i];
	}
	printf("la suma de los numeros sera: %d\n", cont);
	printf("el promedio sera: %d\n", cont/N);
	
	printf("ingrese la posicion que desea ver\n");
	scanf("%d", &posicion);
	
	for(int i=0; i<N;i++){
		if(i==posicion){
			printf("el valor en la posicion %d es %d\n",i, array[i]);
			
		}
	}
	
	printf("ingrese el valor que desea buscar\n");
	scanf("%d", &valor);
	for(int i=0; i<N;i++){
		if(array[i]==valor){
			printf("el valor es %d en la posicion %d\n",array[i], i);
			encontrado=1;
			break;
		}
	}
	
	if(encontrado==0){
		printf("no se encuentra en el arreglo dicho valor\n");
	}
	return 0;
}

