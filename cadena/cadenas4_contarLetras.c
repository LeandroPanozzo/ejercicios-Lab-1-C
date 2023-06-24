#include <stdio.h>
#include <conio.h>
#define N 13

void arreglo(char a[N]){
	int i;
	printf("ingrese los valores\n");
	for(i=0;i<N;i++){
		printf("ingrese la letra en el lugar %d \n", i);
		scanf(" %c",&a[i]);
	}
	printf("la cadena es: \n");
	
	
	
	for(i=0;i<N;i++){
		printf(" %c" , a[i]);
	}
	printf("\n");
}



int main(int argc, char *argv[]) {
	int i,cont=0, cont2=0;
	
	char cadena2[N];
	
	arreglo(cadena2);
	
	for(i=0;i<N;i++){
		if(cadena2[i]=='*'){
			cont++;
		}
		if(cadena2[i]=='.'){
			cont2++;
		}
	}
	
	printf("\nhabra %d frases y %d horacion \n", cont, cont2);
	
	getch();
	return 0;
}
/*Hola*Comoes*.*/
