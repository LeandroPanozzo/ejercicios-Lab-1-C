#include <stdio.h>
#define MAX 5

void mostrar(int a[]){ /*defino la matriz como vacia*/
	int i;
	for(i=0;i<MAX;i++){
		printf("\n %d", a[i]);
		
	}
}

int main(int argc, char *argv[]) {
	
	int vec[MAX],p;
	int i;
	
	for(i=0;i<MAX;i++){
		printf("ingrese un numero entero\n");
		scanf("%d", &vec[i]);
	}
	mostrar(vec);/*parametro vector*/
	
	return 0;
}

