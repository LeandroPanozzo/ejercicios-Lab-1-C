#include <stdio.h>

int main(int argc, char *argv[]) {
	int a[]={0,4,78,5,32};
	int n,t,cant;
	
	n=sizeof(a);
	printf("el tama�o en bytes: %d\n",n);
	t=sizeof(a[0]);
	printf("el tama�o en bytes del primer elemento es: %d\n",t);
	cant=n/t;
	printf("la cant de posiciones ocupadas del arreglo %d\n",cant); /*se hace esta divisi�n es que el operador "sizeof" devuelve el tama�o de un objeto en bytes, y al
	dividir el tama�o total del arreglo entre el tama�o de un solo elemento, obtenemos el n�mero de elementos del arreglo.*/
	return 0;
}

