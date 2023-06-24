#include <stdio.h>
#include <string.h>
#define ELE 2

struct Datos_Artista {
	char nombre[40];
	char apellido[40];
	int dni;
};

struct Exito {
	int dni;
	char generoMusic[15];
	char titulo[15];
	int Cant_vend; /* cantidad de entradas vendidas */
};

struct Estructura_Final {
	int dni;
	char generoMusic[15];
	char nombre[40];
	char apellido[40];
	char titulo[15];
	int Cant_vend; /* cantidad de entradas vendidas */
};

void ordenarDatosArtistas(struct Datos_Artista Artista[], int n) {
	int i, j;
	struct Datos_Artista temp;
	
	for (i = 0; i < n - 1; i++) { /* ordenar de menor a mayor */
		for (j = 0; j < n - i - 1; j++) {
			if (Artista[j].dni > Artista[j + 1].dni) {
				temp = Artista[j];
				Artista[j] = Artista[j + 1];
				Artista[j + 1] = temp;
			}
		}
	}
}

void ordenarExitos(struct Exito exito[], int n) {
	int i, j;
	struct Exito temp;
	
	for (i = 0; i < n - 1; i++) { /* ordenar de menor a mayor */
		for (j = 0; j < n - i - 1; j++) {
			if (exito[j].dni > exito[j + 1].dni) {
				temp = exito[j];
				exito[j] = exito[j + 1];
				exito[j + 1] = temp;
			}
		}
	}
}

int contar(struct Exito exito[], struct Datos_Artista Artista[], struct Estructura_Final dato[], int n) {
	int j, cont = 0;
	
	for (j = 0; j < n; j++) {
		for (int k = 0; k < n; k++) {
			if (exito[j].dni == Artista[k].dni) {
				cont++;
			}
		}
	}
	
	return cont; /* Devolver el valor de cont como resultado de la función */
}

void colocarENestructura3(struct Exito exito[], struct Datos_Artista Artista[], struct Estructura_Final dato[], int n) {
	int cont = 0;
	
	for (int j = 0; j < n; j++) {
		for (int k = 0; k < n; k++) {
			if (exito[j].dni == Artista[k].dni) {
				dato[cont].dni = exito[j].dni;
				strcpy(dato[cont].generoMusic, exito[j].generoMusic);
				strcpy(dato[cont].titulo, exito[j].titulo);
				strcpy(dato[cont].nombre, Artista[k].nombre);
				strcpy(dato[cont].apellido, Artista[k].apellido);
				dato[cont].Cant_vend = exito[j].Cant_vend;
				cont++;
			}
		}
	}
}

void ordenarEstructura3(struct Estructura_Final dato[], int n) {
	int i, j;
	struct Estructura_Final temp;
	
	for (i = 0; i < n - 1; i++) { /* ordenar de menor a mayor */
		for (j = 0; j < n - i - 1; j++) {
			if (dato[j].dni > dato[j + 1].dni) {
				temp = dato[j];
				dato[j] = dato[j + 1];
				dato[j + 1] = temp;
			}
		}
	}
}

int main(int argc, char *argv[]) {
	int i, eleccion = 0, totalCant = 0, cont;
	struct Datos_Artista Artista[ELE];
	struct Exito exito[ELE];
	struct Estructura_Final Final[ELE];
	
	printf("Datos de los artistas:\n");
	for (i = 0; i < ELE; i++) {
		printf("Artista %d\n", i);
		printf("Nombre: ");
		scanf("%39s", Artista[i].nombre);
		printf("\n");
		printf("Apellido: ");
		scanf("%39s", Artista[i].apellido);
		printf("\n");
		printf("DNI: ");
		scanf("%d", &Artista[i].dni);
		getchar(); /* Limpiar el búfer de entrada después de leer un número */
		printf("\n");
	}
	
	printf("Éxitos:\n");
	for (i = 0; i < ELE; i++) {
		printf("Artista %d\n", i);
		printf("Título: ");
		scanf("%14s", exito[i].titulo);
		printf("\n");
		printf("Cantidad Vendida: ");
		scanf("%d", &exito[i].Cant_vend);
		getchar(); /* Limpiar el búfer de entrada después de leer un número */
		printf("\n");
		printf("DNI: ");
		scanf("%d", &exito[i].dni);
		getchar(); /* Limpiar el búfer de entrada después de leer un número */
		printf("\n");
		printf("Género Musical:\n");
		printf("Elija un número:\n");
		printf("1 = Folklore\n");
		printf("2 = Rock\n");
		printf("3 = Popular\n");
		scanf("%d", &eleccion);
		getchar(); /* Limpiar el búfer de entrada después de leer un número */
		switch (eleccion) {
		case 1:
			strcpy(exito[i].generoMusic, "folklore");
			break;
		case 2:
			strcpy(exito[i].generoMusic, "rock");
			break;
		case 3:
			strcpy(exito[i].generoMusic, "popular");
			break;
		default:
			printf("Opción incorrecta\n");
			break;
		}
		printf("\n");
	}
	
	ordenarExitos(exito, ELE);
	ordenarDatosArtistas(Artista, ELE);
	cont = contar(exito, Artista, Final, ELE);
	colocarENestructura3(exito, Artista, Final, ELE);
	ordenarEstructura3(Final, ELE);
	
	for (i = 0; i < cont; i++) {
		totalCant += Final[i].Cant_vend;
	}
	printf("\n\t\t Informe de Éxitos musicales\n");
	printf("DNI        Artista              Titulo              Género musical         Cant. Vendida\n");
	printf("-----------------------------------------------------------------------------------------\n");
	for (i = 0; i < cont; i++) {
		printf("\n%-12i %-17s %-20s %-25s %i\n",Final[i].dni, Final[i].nombre,Final[i].titulo,Final[i].generoMusic, Final[i].Cant_vend);
	}
	
	printf("Total cantidades vendidas: %d\n", totalCant);
	
	return 0;
}
