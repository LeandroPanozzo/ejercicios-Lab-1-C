#include <stdio.h>
#include<conio.h>
int main(int argc, char *argv[]) {
	int num,i,tabla,cant;
	
	printf("que tabla desea calcular: ");
	scanf(" %d", &tabla);
	printf("ingrese la cantidad de numeros: ");
	scanf(" %d", &cant);
	
	for(i==0;i>cant;i++){
		num=i*tabla;
		printf("\n%d", num);
	}
	
	
	
	getch();
	return 0;
}

