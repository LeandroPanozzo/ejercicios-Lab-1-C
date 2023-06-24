#include <stdio.h>
#include <conio.h>
int main(int argc, char *argv[]) {
	int I,p,a,b,cont;
	
	p=0; 
	a=0;
	I=0;
	cont=1;
	
	while(cont==1){
		printf("\ningrese la cantidad de veces que desea contar los numeros");
		scanf("%d", &b);
		
		while(I<b){
			printf("\ningrese un numero par");
			scanf("%d", &a);
			if(a%2==0){
				printf("es un numero par%d", a)
				
			}
			I++;
		}
		
	}
	
	getch();
	return 0;
}

