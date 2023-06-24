#include <stdio.h>
#include <string.h>
#define ELE 3

struct Datos {
	char nombre[40];
	char apellido[40];
	int dni;
	int nota;
};

void ingresarDatos(struct Datos alumnos[], int n) {
	printf("Datos de los alumnos:\n");
	int i = 0;
	while (i < n) {
		printf("Alumno %d\n", i + 1);
		printf("Nombre: ");
		scanf("%39s", alumnos[i].nombre);
		printf("Apellido: ");
		scanf("%39s", alumnos[i].apellido);
		printf("DNI: ");
		scanf("%d", &alumnos[i].dni);
		printf("Nota: ");
		scanf("%d", &alumnos[i].nota);
		getchar(); /* Limpiar el búfer de entrada después de leer un número */
		printf("\n");
		i++;
	}
}

void separarApellidos(struct Datos alumnos[], int n, char cadena[]) {
	int i;
	strcpy(cadena, ""); /* Separar apellidos */
	for (i = 0; i < n; i++) {
		strcat(cadena, alumnos[i].apellido);
		if (i < n - 1) {
			strcat(cadena, ".");
		}
	}
}

void listarApellidosConE(char cadena[]) {
	printf("Apellidos que comienzan con la vocal 'e':\n"); /* Listar uno debajo del otro */
	char *token = strtok(cadena, ".");
	while (token != NULL) {
		if ((token[0] == 'e' || token[0] == 'E')) {
			printf("%s\n", token);
		}
		token = strtok(NULL, ".");
	}
}

int main(int argc, char *argv[]) {
	struct Datos Alumnos[ELE];
	char cadena[120];
	
	ingresarDatos(Alumnos, ELE);
	separarApellidos(Alumnos, ELE, cadena);
	
	printf("Longitud de la cadena: %lu\n", strlen(cadena));
	
	listarApellidosConE(cadena);
	
	return 0;
}
