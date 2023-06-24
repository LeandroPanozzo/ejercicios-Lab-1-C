#include <stdio.h>
#include <string.h>
#include <conio.h>

void ordenarCadenas(char cadenas[][100], int n) {
	int i, j;
	char temp[100];
	
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (strlen(cadenas[j]) > strlen(cadenas[j + 1])) {
				strcpy(temp, cadenas[j]);
				strcpy(cadenas[j], cadenas[j + 1]);
				strcpy(cadenas[j + 1], temp);
			}
		}
	}
}

int main() {
	char cadenas[3][100];
	int i;
	int longitudes[3];
	
	for (i = 0; i < 3; i++) {
		printf("Ingrese la cadena %d: ", i + 1);
		scanf("%s", cadenas[i]);
		longitudes[i] = strlen(cadenas[i]);
	}
	
	printf("\nLongitudes de las cadenas:\n");
	for (i = 0; i < 3; i++) {
		printf("Cadena %d: %d\n", i + 1, longitudes[i]);
	}
	
	ordenarCadenas(cadenas, 3);
	
	printf("\nCadenas ordenadas de menor a mayor longitud:\n");
	for (i = 0; i < 3; i++) {
		printf("Cadena %d: %s\n", i + 1, cadenas[i]);
	}
	
	getch();
	return 0;
}
