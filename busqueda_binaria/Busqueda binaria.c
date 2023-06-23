
#include <stdio.h>
#include <stdlib.h>

struct Nodo {
	int dato;
	struct Nodo *izquierda;
	struct Nodo *derecha;
};


struct Nodo *nuevoNodo(int dato) {
	// Solicitar memoria
	size_t tamanioNodo = sizeof(struct Nodo);
	struct Nodo *nodo = (struct Nodo *) malloc(tamanioNodo);
	// Asignar el dato e iniciar hojas
	nodo->dato = dato;
	nodo->izquierda = nodo->derecha = NULL;
	return nodo;
}

void insertar(struct Nodo *nodo, int dato) {
	// ¿Izquierda o derecha?
	// Si es mayor va a la derecha
	if (dato > nodo->dato) {
		// Tienes espacio a la derecha?
		if (nodo->derecha == NULL) {
			nodo->derecha = nuevoNodo(dato);
		} else {
			// Si la derecha ya está ocupada, recursividad ;)
			insertar(nodo->derecha, dato);
		}
	} else {
		// Si no, a la izquierda
		if (nodo->izquierda == NULL) {
			nodo->izquierda = nuevoNodo(dato);
		} else {
			// Si la izquierda ya está ocupada, recursividad ;)
			insertar(nodo->izquierda, dato);
		}
	}
}


void preorden(struct Nodo *nodo) {
	if (nodo != NULL) {
		printf("%d,", nodo->dato);
		preorden(nodo->izquierda);
		preorden(nodo->derecha);
	}
}

void inorden(struct Nodo *nodo) {
	if (nodo != NULL) {
		inorden(nodo->izquierda);
		printf("%d,", nodo->dato);
		inorden(nodo->derecha);
	}
}

void postorden(struct Nodo *nodo) {
	if (nodo != NULL) {
		postorden(nodo->izquierda);
		postorden(nodo->derecha);
		printf("%d,", nodo->dato);
	}
}

int main(void) {
	struct Nodo *raiz = nuevoNodo(0);
	int dato;
	
	printf("Ingrese un valor entero para agregar al árbol (-1 para finalizar): ");
	scanf("%d", &dato);
	
	while (dato != -1) {
		insertar(raiz, dato);
		printf("Ingrese otro valor entero (-1 para finalizar): ");
		scanf("%d", &dato);
	}
	
	printf("\nImprimiendo preorden\n");
	preorden(raiz);
	printf("\nImprimiendo inorden\n");
	inorden(raiz);
	printf("\nImprimiendo postorden\n");
	postorden(raiz);
 }
