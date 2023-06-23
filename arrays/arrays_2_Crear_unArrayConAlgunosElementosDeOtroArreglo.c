#include <stdio.h>
#define N 5
#include <conio.h>
int main(int argc, char *argv[]) {
	int i,cont=0, promedio,posicion,valor;
	int tam=0;
	int array[N], array2[N];
	
	printf("ingrese los valores del array\n");
	for(i=0;i<N;i++){
		printf("ingrese el valor en la posicion %d : \n", i);
		scanf("%d",&array[i]);
	}
	
	printf("el array quedara: \n");
	for(i=0;i<N;i++){
		printf("el valor en la posicion %d es : %d \n", i, array[i]);
		cont+=array[i];
	}
	promedio= cont/N;
	printf("la suma de sus elementos es %d \n", cont);
	printf("el promedio sera: %d", promedio);
	
	printf("los numeros mayores a la mitad del promedio seran: \n");
	for(i=0;i<N;i++){
		if(array[i]>promedio){
			
			array2[tam]=array[i];
			tam++;
		}
	}
	for(i=0;i<tam;i++){
		printf("el valor en la posicion %d es : %d \n", i, array2[i]);
		
	}
	
	
	printf("ingrese la posicion que desea ver su valor \n");
	scanf("%d", &posicion);
	for(i=0;i<N;i++){
		if(i==posicion){
			printf("el valor en la posicion %d es %d \n", i, array[i]);
		}
	}
	
	printf("ingrese el valor que desea saber si se encuentra \n");
	scanf("%d", &valor);
	
	int encontrar=-1;
	for(i=0;i<N;i++){
		if(array[i]==valor){
			encontrar=0;
		}
	}
	
	if(encontrar!=-1){
		printf("el valor %d existe y esta en la posicion %d \n", array[i], i);
	}else{
		printf("no existe el valor en el arreglo");
	}
	
	
	getch();
	return 0;
}

