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
	Alumno alumno;
	int totalAlumnos = 0;
	int sumaNotas = 0;
	int maxNota = 0;
	int minNota = 10;
	int cantAlumnosNotaMayorIgualSeis = 0;
	int cantAlumnosNotaMenorSeis = 0;
	
	archivo = fopen("alumnos.txt", "rb");
	if (archivo == NULL) {
		printf("Error al abrir el archivo.\n");
		return 1;
	}
	
	printf("Listado de Alumnos\n");
	printf("DNI\tApellido\tNombre\tNota\n");
	printf("----------------------------------\n");
	
	while (fread(&alumno, sizeof(Alumno), 1, archivo) == 1) {
		printf("%-10d  %s\t%s\t%d\n", alumno.dni, alumno.apellido, alumno.nombre, alumno.nota);
		
		totalAlumnos++;
		sumaNotas += alumno.nota;
		
		if (alumno.nota > maxNota) {
			maxNota = alumno.nota;
		}
		
		if (alumno.nota < minNota) {
			minNota = alumno.nota;
		}
		
		if (alumno.nota >= 6) {
			cantAlumnosNotaMayorIgualSeis++;
		} else {
			cantAlumnosNotaMenorSeis++;
		}
	}
	
	float promedioGeneral = (float)sumaNotas / totalAlumnos;
	float porcentajeAlumnosNotaMayorIgualSeis = (float)cantAlumnosNotaMayorIgualSeis / totalAlumnos * 100;
	float promedioAlumnosNotaMenorSeis = (float)(sumaNotas - (cantAlumnosNotaMayorIgualSeis * 6)) / cantAlumnosNotaMenorSeis;
	
	printf("\nTotal de Alumnos: %d\n", totalAlumnos);
	printf("Alumno con la nota más alta: %d\n", maxNota);
	printf("Alumno con la nota más baja: %d\n", minNota);
	printf("Promedio general de los alumnos: %.2f\n", promedioGeneral);
	printf("Cantidad de alumnos con nota mayor e igual a 6: %d\n", cantAlumnosNotaMayorIgualSeis);
	printf("Cantidad de alumnos con nota menor a 6: %d\n", cantAlumnosNotaMenorSeis);
	printf("Porcentaje de alumnos con nota mayor e igual a 6: %.2f%%\n", porcentajeAlumnosNotaMayorIgualSeis);
	printf("Promedio de alumnos con nota menor a 6: %.2f\n", promedioAlumnosNotaMenorSeis);
	
	fclose(archivo);
	
	return 0;
}
