#include <stdio.h>
#include <conio.h>
#define N 5

void arreglo(char a[N]){
	int i;
	printf("ingrese los valores\n");
	for(i=0;i<N;i++){
		printf("ingrese la letra en el ligar %d \n", i);
		scanf(" %c",&a[i]);
	}
	printf("la cadena es: \n");
	
	
	
	for(i=0;i<N;i++){
		printf("caracter %d: %c\n",i , a[i]);
	}
}

char comparar(char a[N], char b[N]){
	int i;

	
	for(i=0;i<N;i++){
		if(a[i]!=b[i]){
			return 0;
		}
	}
	return 1;
	
}


int main(int argc, char *argv[]) {
	
	char cadena[N]={'h','o','l','a','s'};
	char cadena2[N];
	int i;
	
	arreglo(cadena2);
	
	
	printf("la segunda cadena es\n");
	for(i=0;i<N;i++){
		printf("caracter %c\n", cadena[i]);
	}
	
	
	
	
	if(comparar(cadena,cadena2)==1){
		printf("las cadenas son iguales\n");
	}else{
		printf("las cadenas son diferentes\n");
	}
	

	
	getch();
	return 0;
}
