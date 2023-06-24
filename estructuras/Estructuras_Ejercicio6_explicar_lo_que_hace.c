#include <stdio.h>

struct estructura_amigo {
	char nombre[30];
	char apellido[40];
	char telefono[10];
	int edad;
};
struct estructura_amigo amigo = {
	"Juanjo",      /*declaro los valores de la estructuira de forma global*/
		"López",
		"983403367",
		30
};
int main()
{
	printf( "%s tiene ", amigo.apellido );   /*imprimo por pantalla los valores de la estructura*/
	printf( "%i años ", amigo.edad );
	printf( "y su teléfono es el %s.\n" , amigo.telefono );
	return 0;
} 
