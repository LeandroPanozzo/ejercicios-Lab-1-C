#include <stdio.h>
#include<conio.h>
int main(int argc, char *argv[]) {
	
	int num1, num2,posi, resultado;
	printf("\nelija que operacion desea realizar: ");
	printf("\n opcion 1: suma ");
	printf("\n opcion 2: resta ");
	printf("\n opcion 3: producto ");
	printf("\n opcion 4: division ");
	printf("\n opcion 5: salir:  \n");
	scanf("%d", &posi);
	
	if(posi==1){
		printf("ingrese el primer num para la suma");
		scanf("%d", &num1);
		printf("ingrese el primer num para la suma");
		scanf("%d", &num2);
		resultado= num1+num2;
		printf("la suma sera: %d", resultado);
	}else{
		if(posi==2){
			printf("ingrese el primer num: ");
			scanf("%d", &num1);
			printf("ingrese el segundo num");
			scanf("%d", &num2);
			resultado= num1-num2;
			printf("la resta sera: %d", resultado);
		}else{
			if(posi==3){
				printf("ingrese el primer num: ");
				scanf("%d", &num1);
				printf("ingrese el segundo num");
				scanf("%d", &num2);
				resultado= num1*num2;
				printf("la multiplicacion sera: %d", resultado);
			}else{
				if(posi==4){
					printf("ingrese el primer num: ");
					scanf("%d", &num1);
					printf("ingrese el segundo num");
					scanf("%d", &num2);
					resultado= num1/num2;
					printf("la division sera: %d", resultado);
				}else{
					if(posi==5){
						printf("usted a salido");
					}else{
						printf("numero incorrecto");
					}
				}
			}
		}
	}
	
	
	
	getch();
	return 0;
}

