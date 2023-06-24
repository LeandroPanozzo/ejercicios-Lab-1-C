#include <stdio.h>
#include <conio.h>
int main() {
		int a,b,opcion;
		printf("\nIngrese un valor por teclado: ");
		scanf("%d",&a);
		printf("\nIngrese un 2do valor por teclado: ");
		scanf("%d",&b);
		printf("\n---------------------------------------------------------");
		printf("\n¿Que operacion desea realizar?");
		printf("\nOpcion 1:Suma");
		printf("\nOpcion 2:Resta");
		printf("\nOpcion 3:multiplicacion");
		printf("\nOpcion 4:division");
		printf("\nOpcion 5:Salir");
		printf("\n---------------------------------------------------------");
		printf("\nIngrese su opcion: ");
		scanf("%d",&opcion);
		switch(opcion){
			case 1 :
					printf("El resultado de la suma es:%d",a+b);
					break;
			case 2 :
				printf("El resultado de la resta es:%d",a-b);
				break;
			case 3 :
				printf("El resultado de la multiplicacion es:%d",a*b);
				break;
			case 4:
				if(b==0)printf("La division no se puede efectuar, datos invalidos");
				printf("El resultado de la division es:%d",a/b);
				break;
			default:
				printf("\n---------------------------------------------------------");
				printf("\nHasta luego");
				return 0;
				break;
				return 0;
			}
		printf("\n---------------------------------------------------------");
		
	return 0;
}

