#include <stdio.h>
#define MAX 10

int primo (int a[]){
	int i, cont=0;
	
	for(i=0;i<MAX;i++){
		if(a[i]%i==0){ /*cuento cada vez que es primo*/
			return cont++;
		}
	}
}

int veces(int c[], int buscar ){
	int i;
	int contar=0;
	for(i=0;i<MAX;i++){
		if(c[i]==buscar){
			contar++;
		}
	}
	
	if(contar!=0){
		return printf("\nel numero que buscaba es %d y se lo encontro %d", buscar, contar);
	}else{
		return printf("numero no encontrado");
	}
}

void inverso (int b[]){
	int i;
	for(i=MAX;i>=0;i--){
		printf("\n %d", b[i]);
	}
}

int pares (int g[]){ /*defino la matriz como vacia que tomara el valor de la matriz*/
	int i;
	int cont=0;
	for(i=0;i<MAX;i++){
		if(g[i]%2==0){ /*cuento cada vez que es par*/
			cont++;
		}
	}
	return cont;
}


void mostrar(int h[]){ /*defino la matriz como vacia que tomara el valor de la matriz*/
	int i;
	for(i=0;i<MAX;i++){
		printf("\n %d", h[i]);
	}
}

int main(int argc, char *argv[]) {
	
	int vec[MAX],p, buscar, veses, primos;
	int i;
	
	for(i=1;i<=MAX;i++){
		printf("ingrese un numero entero\n");
		scanf("%d", &vec[i]);
	}
	mostrar(vec);/*parametro vector*/
	p=pares(vec);/*parametro vector*/
	printf("\nla cantidad de elementos pares es %d\n", p);
	printf("\nla funcion de forma inversa es:");
	inverso(vec);
	printf("\nhay %d num primos\n", primos);
	printf("\ningrese el valor que desea buscar");
	scanf("%d",&buscar);
	veses=veces(vec,buscar);
	printf("\n%d", veses);
	primos=primo(vec);
	
	return 0;
}
