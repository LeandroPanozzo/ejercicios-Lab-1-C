#include <stdio.h>

int main(int argc, char *argv[]) {
	int a[]={0,4,78,5,32};
	int n,t,cant;
	
	n=sizeof(a);
	printf("el tamaño en bytes: %d\n",n);
	t=sizeof(a[0]);
	printf("el tamaño en bytes del primer elemento es: %d\n",t);
	cant=n/t;
	printf("la cant de posiciones ocupadas del arreglo %d\n",cant); /*se hace esta división es que el operador "sizeof" devuelve el tamaño de un objeto en bytes, y al
	dividir el tamaño total del arreglo entre el tamaño de un solo elemento, obtenemos el número de elementos del arreglo.*/
	return 0;
}

