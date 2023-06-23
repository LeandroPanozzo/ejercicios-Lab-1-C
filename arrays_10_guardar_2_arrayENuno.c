#include <stdio.h>
#include <conio.h>
#define N 5
int main(int argc, char *argv[]) {

	int array[N]={8,6,4,2,0}; 
	int array2[N]={9,7,5,3,1};
	int array3[N+N];
	int i,j,aux;
	
	
	printf("\n");
	printf("El arreglo quedará así:\n");
	for (i = 0; i < N; i++) {
		printf("Valor en la posición %d: %d\n", i, array[i]);
	}
	
	//segundo array
	
	printf("\n");
	printf("El segundo arreglo quedará así:\n");
	for (i = 0; i < N; i++) {
		printf("Valor en la posición %d: %d\n", i, array2[i]);
	}
	
	for (i = 0; i < N; i++) {
		array3[i]=array[i];
	}
	
	for (i = N; i < N*2; i++) {
		array3[i]=array2[i-N];
	}
	printf("\n");
	printf("El arreglo total sin ordenar quedara:\n");
	for (i = 0; i < N+N; i++) {
		printf("Valor en la posición %d: %d\n", i, array3[i]);
	}
	
	printf("\n");
	printf("el array total con los elemenotos ordenados sera: \n");
	for (i = 0; i < N+N; i++) {
		for(j=0;j<N+N-1;j++){
			if(array3[j]<array3[j+1]){
				aux=array3[j+1];
				array3[j+1]=array3[j];
				array3[j]=aux;
			}
		}
	}
	printf("\n");
	for (i = 0; i < N+N; i++) {
		printf("Valor en la posición %d: %d\n", i, array3[i]);
	}
	
	
	
	getch();
	return 0;
}
