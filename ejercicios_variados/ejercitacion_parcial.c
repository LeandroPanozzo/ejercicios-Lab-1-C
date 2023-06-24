#include <stdio.h>
#include <conio.h>
int main(int argc, char *argv[]) {
	
	int mon1=50, mon2=10, mon3=5, mon4=1, resultado=0, resultado2=0, resultado3=0,resultado4=0 , total, cambio, resto, resto2, resto3;;
	
	printf("ingrese su cambio");
	scanf("%d", &cambio);
		
		
			if(cambio*(-1)){
				printf("opcion invalida");
			}else{
				resultado=cambio/mon1;
				printf("\nel cambio sera en monedas de 50: %d", resultado);
				resto= cambio-(mon1*resultado);
				printf("\nel resto es: %d", resto);
				resultado2=resto/mon2;
				printf("\nel cambio sera en monedas de 10: %d", resultado2);
				resto2= resto-(mon2*resultado2);
				printf("\nel resto es: %d", resto2);
				resultado3= resto2/mon3;
				printf("\nel cambio sera en monedas de 5: %d", resultado3);
				resto3= resto2-(mon3*resultado3);
				printf("\nel resto es: %d", resto3);
				resultado4= resto3/mon4;
				printf("\nel cambio sera en monedas de 1: %d", resultado4);
				total=resultado*mon1+resultado2*mon2+resultado3*mon3+resultado4*mon4;
				printf("\n el resultado es: %d", total);
			}
			
			
	
	
	getch();
	return 0;
}

