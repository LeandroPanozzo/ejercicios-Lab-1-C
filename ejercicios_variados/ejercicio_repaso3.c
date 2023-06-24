#include <stdio.h>
#include <conio.h>
int main(int argc, char *argv[]) {
	int kg,suma=0;
	
	do{
		
		printf("\n ingrese el peso de lo que pesco: ");
		scanf("%d", &kg);
		suma+=kg;
		printf("\n el total de kg es: %d", suma);
		if(suma>=10){
			printf("\nllego al limite permitido");
		}
	}while(kg!=0&&suma<10);
	
	getch();
	return 0;
}

