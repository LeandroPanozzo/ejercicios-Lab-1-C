#include <stdio.h>

int suma_fraccion(int a, int b, int c, int anio){
	a=3;
	b=3;
	c=0;
	a= anio % 4;
	b= anio % 100;
	c= anio % 400;
	if (a==0){
		printf(" es bisiesto \n");
	} else{
		if (a==0 && b!=0){
			return printf(" es bisiesto \n");
		} else{
			return printf("no es bisiesto \n");
		} 
	} 
	
	
}


int main(int argc, char *argv[]) {
	int anio,a,b,c;
	
	printf("Ingrese anio \n");
	scanf ("%d",&anio);
	suma_fraccion(a,b,c,anio);
	return 0;
}


