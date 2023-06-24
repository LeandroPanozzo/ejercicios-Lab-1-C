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
	int i;
	for (i = 0; i < n; i++) {
		printf("alumnos %d\n", i);
		printf("Nombre: ");
		scanf("%39s", alumnos[i].nombre);
		printf("\n");
		printf("Apellido: ");
		scanf("%39s", alumnos[i].apellido);
		printf("\n");
		printf("DNI: ");
		scanf("%d", &alumnos[i].dni);
		printf("Nota: ");
		scanf("%d", &alumnos[i].nota);
		getchar(); /* Limpiar el búfer de entrada después de leer un número */
		printf("\n");
	}
}

void ordenarDatosDni(struct Datos alumnos[], int n) {
	int i, j;
	struct Datos temp;
	
	for (i = 0; i < n - 1; i++) { /* ordenar de menor a mayor */
		for (j = 0; j < n - i - 1; j++) {
			if (alumnos[j].dni > alumnos[j + 1].dni) {
				temp = alumnos[j];
				alumnos[j] = alumnos[j + 1];
				alumnos[j + 1] = temp;
			}
		}
	}
}

void mostrarDatos(struct Datos alumnos[], int n) {
	int i, cont_prom1 = 0, cont_prom2 = 0, cont_prom3 = 0;
	printf("\n\t\tInforme de Éxitos musicales\n");
	printf("DNI        Apellido              Nombre              Nota         \n");
	printf("-----------------------------------------------------------------------------------------\n");
	for (i = 0; i < n; i++) {
		printf("\n%-12i %-17s %-20s %i\n", alumnos[i].dni, alumnos[i].apellido, alumnos[i].nombre, alumnos[i].nota);
	}
	printf("total alumnos: %d\n", n);
	
	for (i = 0; i < n; i++) {
		if (alumnos[i].nota >= 7) {
			cont_prom1++; /* mayor o igual a 7 */
		} else if (alumnos[i].nota == 6) { /* igual a 6 */
			cont_prom2++;
		} else if (alumnos[i].nota < 6) { /* menor a 6 */
			cont_prom3++;
		}
	}
	
	printf("cantidad de alumnos que promocionaron el parcial: %d\n", cont_prom1);
	printf("cantidad de alumnos que regularizaron el parcial: %d\n", cont_prom2);
	printf("cantidad de alumnos que desaprobaron el parcial: %d\n", cont_prom3);
}

int main(int argc, char *argv[]) {
	struct Datos Alumnos[ELE];
	
	ingresarDatos(Alumnos, ELE);
	ordenarDatosDni(Alumnos, ELE);
	mostrarDatos(Alumnos, ELE);
	
	return 0;
}
