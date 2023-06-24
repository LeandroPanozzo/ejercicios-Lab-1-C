#include <stdio.h>
#include<conio.h>
int main(int argc, char *argv[]) {
	int cont,num, i, resultado;
	resultado=0;
	i=0;
	printf("ingrese cuantas veces desea multiplicar el numero:");
	scanf("%d", &cont);
	printf("ingrese el num que desea multiplicar:");
	scanf("%d", &num);
	while(i<cont){
		resultado+=num;
		i++;
	}
	printf("se multiplico el numero %d X %d y el resultado es: %d",num,cont, resultado);
	getch();
	return 0;
}

