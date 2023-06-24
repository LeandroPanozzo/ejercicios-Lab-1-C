#include <stdio.h>
#include<conio.h>
int main(int argc, char *argv[]) {
	int num1,num2,num3,cont=1;
	
	
	do{
		printf("\n ingrese un numero: ");
		scanf("%d", &num1);
		printf("\n ingrese un numero: ");
		scanf("%d", &num2);
		printf("\n ingrese un numero: ");
		scanf("%d", &num3);
		
	
	}
	while(num2!=num1+1&&num3!=num2+1);
		
		printf("\n gracias");
		
	getch();
	return 0;
}

