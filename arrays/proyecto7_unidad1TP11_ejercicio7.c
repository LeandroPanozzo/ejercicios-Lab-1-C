#include <stdio.h>
#define N 10
#include <conio.h>
int main(int argc, char *argv[]) {
	int array[N]={1,2,3,4,5,6,7,8,9,10};
	int val1,val2, aux;
	
	for(int i=0; i<N;i++){
		printf("%d \n", array[i]);
		
	}
	
	printf("ingrese la primera posicion: \n");
	scanf("%d", &val1);
	
	printf("ingrese la segunda posicion: \n");
	scanf("%d", &val2);
	
	val1--; //porque se basa en la posicion entonces si queremos el valor que esta en 3 en realidad es el2 en el array
	val2--;
	
	aux=array[val1];
	array[val1]=array[val2];
	array[val2]=aux;
	
	for(int i=0; i<N;i++){
		printf("%d -- ", array[i]);
		
	}
	
	getch();
	return 0;
}

