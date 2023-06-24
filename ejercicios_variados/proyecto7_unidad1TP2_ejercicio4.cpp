#include <stdio.h>
#include <math.h>
int main()
{
	int a,b, seleccion;
	printf("\t\t\t\t\t\t SELECCION DE OPERACIONES");
	printf("\n\t\t\t 1-suma");
	printf("\n\t\t\t 2-resta");
	printf("\n\t\t\t 3-producto");
	printf("\nelija una opcion");
	scanf("%d",&seleccion);
	
	
	printf("\nla opcion elegida es: %d", seleccion);
	printf("\n ingrese el valor de a");
	scanf("%d",&a);
	printf("\n ingrese el valor de b");
	scanf("%d",&b);
	if (seleccion==1) printf("\nel resultado de la suma es: %d",a+b);
	else if (seleccion==2) printf("\nel resultado de la resta es: %d",a-b);
	else if (seleccion==3) printf("\nel resultado de la multiplicacion es: %d",a*b);
	else printf("\n opcion incorrecta");
	
	
	return 0;
}
