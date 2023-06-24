#include <stdio.h>
#include <conio.h>
int main(int argc, char *argv[]) {
	int dia,diaMenor, diaMayor, MayorCant, MenorCant,cant;
	float promedio=0;
	cant=0;
	diaMayor=0;
	diaMenor=0;
	MayorCant=0;
	MenorCant=0;
	dia=1;
	while(dia<8){
		printf("ingrese cuantos milimetros llovieron en el dia: %d", dia);
		scanf("%i", &cant);
		
		promedio = promedio + cant;
		if(MenorCant>=cant){
			MenorCant=cant;
			diaMenor=dia;
		}
		if(cant>MayorCant){
			cant=MayorCant;
			diaMayor=dia;
		}
		
		dia++;
	}
	
	printf("el promedio es: %.2f", promedio/7);
	printf("\nel dia con mayor cantidad es: %d",diaMayor);
	printf("\nel dia con menor cantidad es: %d", diaMenor);
	getch();
	return 0;
}

