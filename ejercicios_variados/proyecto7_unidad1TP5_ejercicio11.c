#include <stdio.h>
#include<conio.h>
int main(int argc, char *argv[]) {
	int num1,i,j;
	
	
	printf("\n ingrese un numero de filas");
	scanf("%d", &num1);
	
	
	for(i=1; i<=num1; i++){
		for(j=1; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}

	getch();
	return 0;
}

