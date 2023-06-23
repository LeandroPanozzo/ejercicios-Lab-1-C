#include <stdio.h>
#include <conio.h>
#define N 8

int buscar(int array[], int valor){
	int i;
	for(i=0;i<N;i++){
		if(array[i]==valor){
			return printf("valor encontrado en la posicion %d \n",i);
		}
	}
	
}
	void ordenar(int array[N]){
		int i,j, aux;
		
		for(i=0;i<N;i++){
			for (j = 0; j < N - 1-i; j++) {
				if(array[j]>array[j+1]){
					aux=array[j];
					array[j]=array[j+1];
					array[j+1]=aux;
				}
			}
			
		}
		printf("el array ordenado quedara: \n");
		for(i=0;i<N;i++){ 
			printf("%d \n", array[i]); 
			
		}
	}

void eliminar(int array[], int valor){
	int i,j;
	for(i=0;i<N;i++){
		if(array[i]==valor){
			for (j = i; j < N - 1; j++) {
				array[j] = array[j + 1];
			}
			array[N - 1] = 0; // Opcional: Establecer el último elemento en 0
		}
	}
	printf("el array sin el elemento eliminado quedara: \n");
	for(i=0;i<N-1;i++){ /*achico la matriz*/
		printf("%d \n", array[i]); 
		
	}
}
	void insertar(int array[], int valor){
		int i;
		int arrayNew[N+1];
		for(i=0;i<N;i++){
			arrayNew[i]=array[i];
		}
		arrayNew[N]=valor;
		printf("el array con el elemento agregado quedara: \n");
		for(i=0;i<N+1;i++){ /*agrando la matriz*/
			printf("%d \n", arrayNew[i]); 
			
		}
	}

int main(int argc, char *argv[]) {
	int opcion,valor;
	int i;
	int array[N];
	for(i=0;i<N;i++){
		printf("ingrese el valor en la posicion %d :", i);
		scanf("%d",&array[i]);
	}
	
	printf("\t\t\telija la operacion a realicar\n");
	
	printf("1- insertar\n");	
	printf("2- eliminar\n");
	printf("3- buscar\n");
	printf("4- ordenar\n");	
	scanf("%d",&opcion);
	
	switch(opcion){
		
	case 1: printf("ingrese el valor que desea insertar\n");
			scanf("%d",&valor);
			insertar(array,valor);
			break;
	case 2: printf("ingrese el valor que desea eliminar\n");
			scanf("%d",&valor);
			eliminar(array,valor);
			break;
	case 3:printf("ingrese el valor que desea buscar\n");
		   scanf("%d",&valor);
		   buscar(array,valor);
	break;
	case 4:
	ordenar(array);
	break;
	default: 
		printf("opcion no valida\n");
		break;
	}
	
	
	getch();
	return 0;
}

