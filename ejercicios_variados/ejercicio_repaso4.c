#include <stdio.h>
#include <conio.h>
int main(int argc, char *argv[]) {
	int numerador, denominador, mcd=1;
	
	
	printf("\n ingrese el numerador: ");
	scanf("%d", &numerador);
	printf("\n ingrese el denominador: ");
	scanf("%d", &denominador);
	
	for(int i= 1; i<=numerador && i<=denominador; i++){
		if(numerador%i==0 && denominador%i==0){
			mcd=i;
		}
	}
	numerador/=mcd;
	denominador/=mcd;
	
	if(denominador==1){
		printf("la fraccion sera: %d", numerador);
	}else{
		if(denominador==numerador){
			printf("la fraccion sera: 1");
		}else{
			if(denominador==numerador*(-1)||numerador==denominador*(-1)){
				printf("la fraccion sera: -1");
			}else{
				if(denominador==0){
					printf("la fraccion es indefinida");
				}else{
					printf("la fraccion sera: %d/%d", numerador, denominador);
				}
			}
		}
	}
	
	
	getch();
	return 0;
}

