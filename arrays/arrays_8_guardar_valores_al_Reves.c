#include <stdio.h>
#include <conio.h>
#define N 5
int main(int argc, char *argv[]) {
	int array[N], array2[N];
	int i;
	
	printf("ingrese los valores\n");
	for(i=0;i<N;i++){
		printf("el valor en la posicion %d \n", i);
		scanf("%d", &array[i]);
		
	}
	printf("\n");
	printf("el arreglo quedara: \n");
	for(i=0;i<N;i++){
		printf("el valor en la posicion %d \n", i);
		printf("%d", array[i]);
		printf("\n ");
	}
	
	for(i=0;i<N;i++){
		array2[i]=array[N-1-i];
	}
	printf("\n");
	printf("el arreglo nuevo quedara: \n");
	for(i=0;i<N;i++){
		printf("el valor en la posicion %d \n", i);
		printf("%d", array2[i]);
		printf("\n ");
	}
	
	
	getch();
	return 0;
}
