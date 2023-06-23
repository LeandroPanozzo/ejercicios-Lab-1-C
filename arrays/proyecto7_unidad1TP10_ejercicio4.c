#include <stdio.h>
#define MAX 10

void mostrar(int h[]){ /*defino la matriz como vacia que tomara el valor de la matriz*/
	int i;
	for(i=0;i<MAX;i++){
		printf("\n %d", h[i]);
	}
}
void posi(int v[], int posicion){
	int i;
	for(i=0;i<MAX;i++){
		if(i==posicion){
			printf("el valor dentro de la posicion %d es %d", i, v[i]);
		}
		
	}
}

int main(int argc, char *argv[]) {
	
	int vec[MAX], posicion;
	int i;
	
	for(i=0;i<MAX;i++){
		printf("ingrese un numero entero\n");
		scanf("%d", &vec[i]);
	}
	mostrar(vec);
	
	printf("ingrese la posicion quiere buscar\n");
	scanf("%d", &posicion);
	
	if(posicion<0||posicion>MAX){
		printf("\nla posicion no se encuentra en el arreglo");
	}else{
		posi(vec,posicion);
	}
	
	
	
	return 0;
}

