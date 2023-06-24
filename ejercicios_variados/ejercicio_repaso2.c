#include <stdio.h>
#include <conio.h>
int main(int argc, char *argv[]) {
	int num1,num2,i;
	char seleccion;
	
	printf("\n ingrese un primer numero ");
	scanf(" %d", &num1);
	printf("\n ingrese un segundo numero ");
	scanf(" %d", &num2);
	printf("\n ingrese p para pares o i para impares ");
	scanf(" %c", &seleccion);
	
	switch(seleccion){
		case 'p': if(num1<num2){
			for(i=num1; i<=num2; i++){ //i sera igual a 1 y se ira incrementando
				if(i%2==0){    //para ser par debe ser resto 0 cuando es divisible por 2
					printf("\n %d", i);
				}
			}
		}else{
			if(num1>num2){
				for(i=num2; i<=num1; i++){
					if(i%2==0){
						printf("\n %d", i);
					}
				}
			}else{
				printf("son numeros iguales");
			}
		}
		break;
		
		case 'i': if(num1<num2){
			for(i=num1; i<=num2; i++){
				if(i%2!=0){
					printf("\n %d", i);
				}
			}
		}else{
			if(num1>num2){
				for(i=num2; i<=num1; i++){
					if(i%2!=0){
						printf("\n %d", i);
					}
				}
			}else{
				printf("son numeros iguales");
			}
		}
		break;
		
		default : printf("\n opcion incorrecta");
	}
	
	
	
	getch();
	return 0;
}

