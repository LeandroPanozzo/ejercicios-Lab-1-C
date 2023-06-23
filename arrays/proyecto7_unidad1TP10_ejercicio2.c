#include <stdio.h>
#define MAX 5

int pares (int a[]){ /*defino la matriz como vacia que tomara el valor de la matriz*/
	int i;
	int cont=0;
	for(i=0;i<MAX;i++){
		if(a[i]%2==0){ /*cuento cada vez que es par*/
			cont++;
		}
	}
	return cont;
}


void mostrar(int a[]){ /*defino la matriz como vacia que tomara el valor de la matriz*/
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
	p=pares(vec);/*parametro vector*/
	printf("\nla cantidad de elementos pares es %d\n", p);
	return 0;
}

