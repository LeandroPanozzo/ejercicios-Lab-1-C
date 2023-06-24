#include <stdio.h>
#include<conio.h>
int main(int argc, char *argv[]) {
	int numero;
	int numTecl;
	
	printf("ingrese la cantidad de veces que desea iterar: ");
	scanf("%d", &numTecl);
	
	for(numTecl; numTecl>=0; numTecl--){
		printf("\n %d", numTecl);
	}
	
	
	getch();
	return 0;
}

