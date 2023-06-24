#include <stdio.h>
#include <math.h>
int cuadrado(int i){
	int resultado;
	resultado=pow(i,2);
	return resultado;
}

int main(int argc, char *argv[]) {
	int i,resultado;
	for (i=0;i<10;i++){
		resultado = cuadrado (i);
		printf("Cuadrado de %d: %d\n",i,resultado);
	}
	return 0;
}

