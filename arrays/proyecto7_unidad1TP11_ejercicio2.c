#include <stdio.h>
#define N 5

int funcion(int a[]){
	int i;
	for(i=0;i<5;i++){
		printf("ingrese la nota numero %d\n", i);
		scanf("%d", &a[i]);
	}
	return a[N];
}

void notas(int a[]){
	int i, mayor,menor,acum=0;
	for(i=0;i<N;i++){
		if(a[i]>a[i-1]){
			mayor=a[i];
		}
		if(a[i]<a[i-1]){
			menor=a[i];
		}
		acum+=a[i];
	}
	printf("el promedio de las notas sera %d\n", acum/N);
	printf("la nota menor sera: %d\n", menor);
	printf("la nota mayor sera: %d\n", mayor);
}


int main(int argc, char *argv[]) {
	int array[N], d;
	
	funcion(array);
	
	notas(array);
	
	
	return 0;
}

