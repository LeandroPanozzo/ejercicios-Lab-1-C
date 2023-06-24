#include <stdio.h>
#include <conio.h>
#define N 5
int main(int argc, char *argv[]) {
	
	char cadena[N]={'h','o','l','a','\0'};
	char cadena2[N];
	int i;
	
	printf("ingrese los valores\n");
	for(i=0;i<N;i++){
		printf("ingrese la letra en el ligar %d \n", i);
		scanf(" %c",&cadena2[i]);
	}
	printf("la cadena es: \n");
	
	
	
	for(i=0;i<N;i++){
		printf("caracter %d: %c\n",i , cadena2[i]);
	}
	
	
	printf("la segunda cadena es\n");
	for(i=0;i<N;i++){
		printf("caracter %c\n", cadena[i]);
	}
	
	
	getch();
	return 0;
}

