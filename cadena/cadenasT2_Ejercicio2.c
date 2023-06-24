#include <stdio.h>
#include <string.h>
#include <conio.h>

void ingresarCadenas(char c1[], char c2[]) {
	printf("Ingrese la primera cadena: ");
	scanf("%s", c1);
	
	printf("Ingrese la segunda cadena: ");
	scanf("%s", c2);
}

void mostrarCadenas(const char c1[], const char c2[]) { /*Al utilizar const en la declaración de los parámetros, se está estableciendo una restricción de solo 
	lectura en los arreglos. Esto significa que la función no podrá modificar los contenidos de c1[] y c2[]. Esta es una práctica recomendada cuando se desea 
	asegurar que una función no altere los datos de entrada.*/
	printf("Contenido de C1: %s\n", c1); 
	printf("Contenido de C2: %s\n", c2); /*solo se ponen las variables*/
}

void compararCadenas(const char c1[], const char c2[]) {
	int longitud1 = strlen(c1); /*strlen nos da la cantidad de digitos que posee*/
	int longitud2 = strlen(c2);
	
	if (longitud1 > longitud2) {
		printf("C1 es más larga que C2.\n");
	} else if (longitud1 < longitud2) {
		printf("C2 es más larga que C1.\n");
	} else {
		printf("C1 y C2 tienen la misma longitud.\n");
	}
	
	if (strcmp(c1, c2) == 0) { /*strcmp() compara dos cadenas de caracteres Si str1 es menor que str2, devuelve un valor negativo.
		Si str1 es mayor que str2, devuelve un valor positivo.
		Si str1 es igual a str2, devuelve 0.*/
		printf("C1 y C2 son iguales.\n");
	} else {
		printf("C1 y C2 son diferentes.\n");
	}
}

void concatenarCadena(char c1[], char c2[]) {
	int longitud1 = strlen(c1);
	int longitud2 = strlen(c2);
	
	/*Si la cadena de destino no es lo suficientemente grande para contener los caracteres de ambas cadenas,
	puede ocurrir un desbordamiento de búfer, lo que puede provocar comportamientos inesperados o errores en el programa.*/
	
	if (longitud1 < longitud2) { 
		strcat(c1, c2); /*string.h concatenar (unir) dos cadenas de caracteres*/
		printf("La cadena resultante de concatenar C2 a C1 es: %s\n", c1); /*Si longitud1 < longitud2, significa que concatena c2 al final de c1 
		El resultado se almacena en c1.*/
	} else {
		strcat(c2, c1);
		printf("La cadena resultante de concatenar C1 a C2 es: %s\n", c2);/*Si longitud1 > longitud2, significa que concatena c1 al final de c2
		El resultado se almacena en c2.*/
	}
}

int main() {
	char C1[100];
	char C2[100];
	
	ingresarCadenas(C1, C2);
	printf("\n");
	
	mostrarCadenas(C1, C2);
	printf("\n");
	
	compararCadenas(C1, C2);
	printf("\n");
	
	concatenarCadena(C1, C2);
	printf("\n");
	
	
	getch();
	return 0;
}

