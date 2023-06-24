#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define MAX_PRODUCTOS 3

struct poducto{
	int IDProd;
	char NomProd[50];
	float PrecioCosto;
	float PrecioVenta;
	int CantidadVendida;
};

void cargarProductos(struct poducto productos[]) {
	int i = 0;
	int j;
	int productoDuplicado;
	
	while (i < MAX_PRODUCTOS) {
		printf("Ingrese los datos del producto %d:\n", i + 1);
		printf("ID: ");
		scanf("%d", &productos[i].IDProd);
		
		/*Verificar si el producto ya fue ingresado*/
		productoDuplicado = 0;
		
		for (j = 0; j < i; j++) {
			if (productos[i].IDProd == productos[j].IDProd) {
				printf("Producto ya ingresado. Ingrese un ID diferente.\n");
				productoDuplicado = 1;
				break;
			}
		}
		
		if (productoDuplicado==1) {
			continue;  /* Volver a solicitar el ingreso del producto*/
		}
		
		printf("Nombre: ");
		scanf(" %[^\n]", productos[i].NomProd);
		printf("Precio de Costo: ");
		scanf("%f", &productos[i].PrecioCosto);
		printf("Precio de Venta: ");
		scanf("%f", &productos[i].PrecioVenta);
		printf("Cantidad Vendida: ");
		scanf("%d", &productos[i].CantidadVendida);
		i++;
	}
}

void ordenarProductos(struct poducto productos[]) {
	int i, j;
	struct poducto temp;
	for (i = 0; i < MAX_PRODUCTOS - 1; i++) {
		for (j = 0; j < MAX_PRODUCTOS - 1 - i; j++) {
			if (productos[j].IDProd > productos[j+1].IDProd) {
				temp = productos[j];
				productos[j] = productos[j+1];
				productos[j+1] = temp;
			}
		}
	}
}

void mostrarProductos(struct poducto productos[]) {
	int i;
	printf("\nListado de Productos vendidos\n");
	printf("IDProd\tNomProd.\tPrecio Costo\tPrecio Venta\tCantidad Vendida\n");
	printf("-----------------------------------------------------------------------------------\n");
	for (i = 0; i < MAX_PRODUCTOS; i++) {
		printf("%-9d %-16s %-15.2f %-15.2f %d\n", productos[i].IDProd, productos[i].NomProd, productos[i].PrecioCosto, productos[i].PrecioVenta, productos[i].CantidadVendida);
	}
	printf("\n");
}

void calcularGanancias(struct poducto productos[], int *totalCantidadesVendidas, float *totalGanancias) {
	int i;
	*totalCantidadesVendidas = 0;
	*totalGanancias = 0.0;
	for (i = 0; i < MAX_PRODUCTOS; i++) {
		*totalCantidadesVendidas += productos[i].CantidadVendida;
		*totalGanancias += (productos[i].PrecioVenta - productos[i].PrecioCosto) * productos[i].CantidadVendida;
	}
}

int main() {
	struct poducto productos[MAX_PRODUCTOS];
	int totalCantidadesVendidas;
	float totalGanancias;
	
	cargarProductos(productos);
	ordenarProductos(productos);
	mostrarProductos(productos);
	calcularGanancias(productos, &totalCantidadesVendidas, &totalGanancias);
	
	printf("\nTotal de Cantidades Vendidas: %d\n", totalCantidadesVendidas);
	printf("Total de Ganancias: %.2f\n", totalGanancias);
	
	
	getch();
	return 0;
}
