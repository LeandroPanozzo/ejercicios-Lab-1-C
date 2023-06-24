#include <stdio.h>
#include <conio.h>
int main(int argc, char *argv[]) {
	
	int x,y,z;
	
	printf("\ningrese el primer numero");
	scanf("%d",&x);
	printf("\ningrese el segundo numero");
	scanf("%d",&y);
	
	
	/*llamada de la funcion*/
	z=suma(x,y);
	printf("\nla suma es %d",z);
	z=resta(x,y);
	printf("\nla resta es %d",z);
	
	
	getch();
	return 0;
}


int suma(int a, int b){
	
	int total;
	total=a+b;
	return total;
	
}

int resta(int a, int b){
	int total;
	total=a-b;
	return total;
}

