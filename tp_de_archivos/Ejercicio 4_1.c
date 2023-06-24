#include <stdio.h>
	/*Diseñar un programa que permita generar un archivo de texto que permita cargar cinco
	nombres separados por punto. Mostrar el contenido del archivo un nombre abajo del otro*/
	int main() {
	FILE *archivo;
	char nombre[50];
	int i;
	
	// Abrir el archivo en modo de escritura
	archivo = fopen("nombres.txt", "w");
	
	// Verificar si el archivo se abrió correctamente
	if (archivo == NULL) {
		printf("No se pudo abrir el archivo.");
		return 1;
	}
	
	// Cargar los nombres en el archivo
	for (i = 0; i < 5; i++) {
		printf("Ingrese un nombre: ");
		scanf("%s", nombre);
		
		// Escribir el nombre en el archivo, seguido de un salto de línea
		fprintf(archivo, "%s.\n", nombre);
	}
	
	// Cerrar el archivo
	fclose(archivo);
	
	// Abrir el archivo en modo de lectura
	archivo = fopen("nombres.txt", "r");
	
	// Verificar si el archivo se abrió correctamente
	if (archivo == NULL) {
		printf("No se pudo abrir el archivo.");
		return 1;
	}
	
	// Mostrar el contenido del archivo línea por línea
	printf("Contenido del archivo:\n");
	while (fgets(nombre, sizeof(nombre), archivo) != NULL) {
		printf("%s", nombre);
	}
	
	// Cerrar el archivo
	fclose(archivo);
	
	return 0;
}
	
	
