#include <stdio.h>
#define ELE 3 //numero de amigos
#include <conio.h>
struct estructura_amigo{
	char nombre[30];
	char telefono[10];
	char apellido[40];
	int edad;
};
int main(int argc, char *argv[]) {
	
	struct estructura_amigo amigo[ELE];
	
	int i_amigo,buscar;
	int cont=0, cont2=0;
	for(i_amigo=0;i_amigo<ELE;i_amigo++){
		printf("datos del amigo numero %d \n", i_amigo);
		printf("Nombre: ");
		scanf("%s", &amigo[i_amigo].nombre); /*fijarse como seria con scanf*/
		printf("apellido: ");
		scanf("%s", &amigo[i_amigo].apellido);
		printf("telefono: ");
		scanf("%s", &amigo[i_amigo].telefono);
		printf("edad: ");
		scanf("%d", &amigo[i_amigo].edad);
		cont+=amigo[i_amigo].edad;
		 
	}
	
	printf("\n\n\t\t\t\t\t\t\t Agenda de amigos\n");
	printf("------------------------------------------------------------------------\n");
	printf("Número de amigo   |   Nombre     |   Apellido     |   Teléfono     |   Edad\n");
	printf("------------------------------------------------------------------------\n");
	for (i_amigo = 0; i_amigo < ELE; i_amigo++) {
		printf("%-17d | %-12s | %-14s | %-13s | %d\n",
			   i_amigo, amigo[i_amigo].nombre, amigo[i_amigo].apellido,
			   amigo[i_amigo].telefono, amigo[i_amigo].edad);
	}
	printf("------------------------------------------------------------------------\n");
	
	/*hacer promadio de edad*/
	printf("el promedio de edad es: %d \n", cont/ELE);
	
	/*ingresar una edad por teclado y decir cuantos amigos son mayores a esa edad*/
	printf("ingrese la edad que desea buscar: \n");
	scanf("%d",&buscar);
	
	for(i_amigo=0;i_amigo<ELE;i_amigo++){
		if(buscar<amigo[i_amigo].edad){
			cont2++;
		}
	}
	printf("amigos mayores a %d: %d", buscar, cont2);
	
	
	getch();
	return 0;
}

