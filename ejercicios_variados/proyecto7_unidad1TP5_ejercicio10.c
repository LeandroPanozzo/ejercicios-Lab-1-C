#include <stdio.h>
#include<conio.h>
int main(int argc, char *argv[]) {
	int num1,num2,num3, cont;
	char rta;
	
	do{
		printf("\n ingrese un numero entero: ");
		scanf("%d", &num1);
		printf("\n ¿desea introducir otro numero? ");
		scanf(" %c", &rta);
		num1+=num1;
	    cont+=1;
		
	}
	while(rta=='s');
		printf("\nintrodujo %d numeros",cont);
		printf("\n la suma de todos ellos es %d", num1);
		printf("\n gracias");
		
	getch();
	return 0;
}

