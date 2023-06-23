#include <stdio.h>
#include <conio.h>
#define N 10
int main(int argc, char *argv[]) {
	
	int array[N]={9,8,7,6,5,4,3,2,1,0}; 
	int num,num2;
	int i,aux=1,aux2=1;
	
	
	printf("\n");
	printf("El arreglo quedará así:\n");
	for (i = 0; i < N; i++) {
		printf("Valor en la posición %d: %d\n", i, array[i]);
	}
	
	printf("ingrese el primer numero a cambiar \n");
	scanf("%d", &num);
	
	printf("ingrese el segundo numero a cambiar \n");
	scanf("%d", &num2);
	
	for (i = 0; i < N; i++) {
		if(array[i]==num){
			aux=i;
			
		}
	}
	
	for (i = 0; i < N; i++) {
		if(array[i]==num2){
			aux2=i;
			
		}
	}
	
	if(aux!=-1&&aux2!=-1){
		int temp=array[aux];
		array[aux]=array[aux2];
		array[aux2]=temp;
		
		printf("\n");
		printf("El arreglo quedará así:\n");
		for (i = 0; i < N; i++) {
			printf("Valor en la posición %d: %d\n", i, array[i]);
		}
	}else{
		printf("\nNo se encontraron los números ingresados en el arreglo.\n");
	}
	
	
	
	
	
	getch();
	return 0;
}
