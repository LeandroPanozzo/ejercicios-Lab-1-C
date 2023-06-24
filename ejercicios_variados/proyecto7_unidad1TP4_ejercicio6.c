#include <stdio.h>
#include<conio.h>
int main() {
	int contador = 0;
	int i = 50;
	printf("Los números pares entre 50 y 20 son:\n");
	while (i >= 20) {
		if (i % 2 == 0) {
			printf("%d ", i);
			contador++;      //el contador funciona dentro de un if si ese if esta dentro de un while
		}
		i--; //resta 1 en cada iteracion
	}
	printf("\nSe encontraron %d números pares.\n", contador);
	getch();
	return 0;
}
