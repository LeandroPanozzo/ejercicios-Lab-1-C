#include <stdio.h>
#include <string.h>
#include <conio.h>

int main() {
	char cadena[21]; /*Tama�o de la cadena es 21 (20 caracteres + 1 para el car�cter nulo)*/
	char nombre1[11], nombre2[11]; /* 10 caracteres c/u mas el caracter nulo \0*/
	int longitud,i;
	
	printf("Ingrese dos nombres separados por punto: ");
	scanf("%10[^.].%10s", nombre1, nombre2); /*El car�cter ^ dentro de los corchetes [] indica una coincidencia negada, 
	lo que significa que scanf() leer� todos los caracteres que no sean un punto.
	Entonces, en la l�nea de c�digo scanf("%10[^.].%10s", nombre1, nombre2);, "%10[^.]" se utilizar� para leer hasta 10 caracteres diferentes al punto 
	en nombre1. Luego, el punto literal coincidir� con un punto en la entrada. Finalmente, "%10s" se utilizar� para leer hasta 10 caracteres en nombre2, 
	que estar�n despu�s del punto.*/
	
	longitud = strlen(nombre1) + strlen(nombre2) + 1; /*+1 para el punto entre los nombres*/
	/*strlen sa la cantidad de caracteres del arreglo*/
	
	if (longitud <= 20) {
		sprintf(cadena, "%s.%s", nombre1, nombre2); /*sprintf concatena los valores de la variable nombre1 y nombre 2 y los guarda en cadena*/
		
		for (i = longitud; i < 20; i++) {
			cadena[i] = 'a'; /*si la cadena es menor a la longitud se ponen a*/
		}
		
		cadena[i] = '\0'; /*Agregar el car�cter nulo al final de la cadena*/
	} else {
		printf("La longitud total de los nombres supera los 20 caracteres.\n");
		return 1; /*Salir del programa con un c�digo de error*/
	}
	
	printf("La cadena final es: %s\n", cadena);
	
	
	getch();
	return 0;
}
