#include <stdio.h>
#include <conio.h>
int main(int argc, char *argv[]) {
	int kilos, suma;
	char caracter;
	
	do{
		printf("\ningrese el numero de kilos");
		scanf("%d", &kilos);
		printf("\n pesco: %d kg",kilos);
		suma+=kilos;
		printf("\n los kilos en total son: %d", suma);
	}while(suma<9&&suma>0);
	if(suma==0){
		printf("valor 0");
	}else{
		if(suma<0){
			printf("\n valor invalido");
		}else{
			printf("\nllego al limite de kilos");
		}
	}
	
	
	
	
	
	getch();
	return 0;
}

