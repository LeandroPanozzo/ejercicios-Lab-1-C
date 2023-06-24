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


char buscar(char a[N],char buscar){
	int i,cont=0;
	
	for(i=0;i<N;i++){
		if(a[i]==buscar){
			cont++;
		}
	}
	
	if(cont!=0){
		return printf("se lo encontro un total de %d veces", cont);
	}else{
		return printf("no se lo encontro");
	}
}

int main(int argc, char *argv[]) {
	
	
	char cadena2[N];
	int i, busc;
	
	arreglo(cadena2);
	
	
	printf("ingrese un caracter el caracter que desea buscar: \n");
	scanf(" %c", &busc);
	buscar(cadena2,busc);
	
	getch();
	return 0;
}
