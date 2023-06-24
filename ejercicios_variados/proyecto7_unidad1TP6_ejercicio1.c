#include <stdio.h>
#include <conio.h>
int main(int argc, char *argv[]) {
	int numerador, denominador, mcd=1, i=1;
	char caracter;
	
	do{
		printf("\n ingrese un numerador");
		scanf("%d", &numerador);
		printf("\n ingrese un denominador");
		scanf("%d", &denominador);
		
		for (i; i<=numerador && i<=denominador; i++){
			
			if(numerador%i==0 && denominador%i==0){
				
				mcd=i;
			}
			
		}
		numerador/=mcd;
		denominador/=mcd;
		
		if(denominador==1){
			printf("\n el resultado es %d", numerador);
		}else{
			if(denominador==numerador){
				printf("el resultado es 1");
			}else{
				if(denominador==0){
					printf("es una fraccion indefinida");
				}else{
					if(numerador==denominador*(-1)&&denominador==numerador*(-1)){
						printf("el resultado es -1");
					}else{
						printf("\n el resultado es %d/%d", numerador, denominador );
					}
					
				}
				
			}
			
		}
		
		printf("\n desea realizar otra operacion? escriba s para si y n para no ");
		scanf("\n %c", &caracter);
	}while(caracter=='s');
	
	
	
	getch();
	return 0;
}

