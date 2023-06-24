#include <stdio.h>
#include <string.h>
#include <conio.h>

int contarLetra(char cadena[100], char letra) {
	int contador = 0;
	int longitud = strlen(cadena);
	int i;
	
	for (i = 0; i < longitud; i++) {
		if (cadena[i] == letra) {
			contador++;
		}
	}
	
	return contador;
}

int main() {
	char cadena[100];
	char letra;
	int cantidad;
	
	printf("Ingrese una cadena: ");
	scanf("%s", cadena);
	
	printf("Ingrese una letra: ");
	scanf(" %c", &letra);
	
	cantidad = contarLetra(cadena, letra);
	
	printf("La letra '%c' aparece %d veces en la cadena.\n", letra, cantidad);
	
	
	getch();
	return 0;
}
