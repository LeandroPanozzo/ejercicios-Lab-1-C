#include <stdio.h>
#include <math.h>
int main()
{
	float a,b,c;
	
	
	printf("ingrese el precio del articulo en $ ");
	scanf("%f",&a);
	printf("\ningrese la cantidad de unidades compradas: ");
	scanf("%f",&b);
	c=a*b;
	printf("\nel precio sin descuento es: %f", c);
	printf("\nel precio con descuento es: %f", (c*15/100));
	
	//printf("\nel cuadrado del numero sera: %.2f", pow(a,2));
	
	//printf("el valor de a luego del intercambio es %d y el de a es:  %d",a,b);
	//printf("el valor de a luego del intercambio es %d",b);
	
	
	return 0;
}
