#include <stdio.h>
#include <conio.h>
int main(int argc, char *argv[]) {
	int numDElineas, i, precio,totprecio;
	i=0;
	totprecio=0;
	precio=0;
	printf("escribirel numero de lineas que hay: ");
	scanf("%d",&numDElineas);
	while(i<numDElineas){
		
			printf("\nescriba el precio de la boleta\n");
			scanf("%d", &precio);
			totprecio+=precio;    //debo crear otra variable para ir almacenando los valores en cada iteracion del bucle
			
			printf("\n el precio es %d", totprecio*numDElineas);
		
		i++;
	}
	
	
	getch();
	return 0;
}

