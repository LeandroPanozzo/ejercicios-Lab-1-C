#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int dni;
	char apellido[50];
	char nombre[50];
	int nota;
} Alumno;

int main() {
	FILE *archivo;
	Alumno alumnos[] = {
		{12345678, "Perez", "Juan", 8},
	{23456789, "Gomez", "Maria", 7},
		{34567890, "Lopez", "Carlos", 9},
	{45678901, "Martinez", "Ana", 6},
		{56789012, "Gonzalez", "Luis", 5}
	};
	int cantidadAlumnos = sizeof(alumnos) / sizeof(Alumno);
	
	archivo = fopen("alumnos.txt", "wb");
	if (archivo == NULL) {
		printf("Error al abrir el archivo.\n");
		return 1;
	}
	
	fwrite(alumnos, sizeof(Alumno), cantidadAlumnos, archivo);
	
	fclose(archivo);
	
	printf("Archivo creado correctamente.\n");
	
	return 0;
}
