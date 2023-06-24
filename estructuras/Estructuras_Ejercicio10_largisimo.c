#include <stdio.h>
#include <string.h>

#define MAX_LIBROS 100

struct Libro {
	int numeroReferencia;
	char titulo[100];
	char nombreAutor[100];
	char editorial[100];
	int clasePublicacion; // 1: libro, 2: revista
	int numeroEdicion; // Solo para libros
	int anioPublicacion; // Solo para libros
	char nombreRevista[100]; // Solo para revistas
};

void cargarDatos(struct Libro libros[], int *totalLibros) {
	int i = 0;
	while (1) {
		printf("Ingrese los datos del libro o revista (0 para terminar):\n");
		printf("Numero de referencia: ");
		scanf("%d", &libros[i].numeroReferencia);
		
		if (libros[i].numeroReferencia == 0) {
			break;
		}
		
		printf("Titulo: ");
		scanf(" %[^\n]", libros[i].titulo);
		printf("Nombre del autor: ");
		scanf(" %[^\n]", libros[i].nombreAutor);
		printf("Editorial: ");
		scanf(" %[^\n]", libros[i].editorial);
		printf("Clase de publicacion (1: libro, 2: revista): ");
		scanf("%d", &libros[i].clasePublicacion);
		
		if (libros[i].clasePublicacion == 1) {
			printf("Numero de edicion: ");
			scanf("%d", &libros[i].numeroEdicion);
			printf("Anio de publicacion: ");
			scanf("%d", &libros[i].anioPublicacion);
		} else if (libros[i].clasePublicacion == 2) {
			printf("Nombre de la revista: ");
			scanf(" %[^\n]", libros[i].nombreRevista);
		}
		
		i++;
	}
	
	*totalLibros = i;
}

void ordenarLibros(struct Libro libros[], int totalLibros) {
	int i, j;
	struct Libro temp;
	
	for (i = 0; i < totalLibros - 1; i++) {
		for (j = 0; j < totalLibros - 1 - i; j++) {
			if (libros[j].numeroReferencia > libros[j + 1].numeroReferencia) {
				temp = libros[j];
				libros[j] = libros[j + 1];
				libros[j + 1] = temp;
			}
		}
	}
}

void mostrarListadoLibros(struct Libro libros[], int totalLibros) {
	int i;
	
	printf("Listado de Libros\n");
	printf("Numero de referencia  Titulo  Nombre del autor  Editorial  Nombre de la revista\n");
	printf("----------------------------------------------------------------------------------\n");
	
	for (i = 0; i < totalLibros; i++) {
		if (libros[i].clasePublicacion == 1) {
			printf("%-20d%-8s%-18s%-11s\n", libros[i].numeroReferencia, libros[i].titulo, libros[i].nombreAutor, libros[i].editorial);
		}
	}
	
	printf("Total de Libros: %d\n", totalLibros);
}

void mostrarListadoRevistas(struct Libro libros[], int totalLibros) {
	int i;
	
	printf("Listado de Revistas\n");
	printf("Numero de referencia  Titulo  Nombre del autor  Editorial  Numero de edicion  Anio de publicacion\n");
	printf("------------------------------------------------------------------------------------------------\n");
	
	for (i = 0; i < totalLibros; i++) {
		if (libros[i].clasePublicacion == 2) {
			printf("%-20d%-8s%-18s%-11s%-18s%-20d\n", libros[i].numeroReferencia, libros[i].titulo, libros[i].nombreAutor, libros[i].editorial, libros[i].nombreRevista);
		}
	}
	
	printf("Total de Revistas: %d\n", totalLibros);
}

int main() {
	struct Libro libros[MAX_LIBROS];
	int totalLibros = 0;
	
	cargarDatos(libros, &totalLibros);
	ordenarLibros(libros, totalLibros);
	mostrarListadoLibros(libros, totalLibros);
	mostrarListadoRevistas(libros, totalLibros);
	
	return 0;
}

