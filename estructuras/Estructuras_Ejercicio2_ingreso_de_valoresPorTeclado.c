#include <stdio.h>
#include <conio.h>
#include <string.h>
struct amigo {
	char apellido[20];
	char nombre[20];
	char direccion[20];
};
int main(int argc, char *argv[]) {
	
	struct amigo record={0}; /*si la declaro dentro del main es local, fuera es global*/
	
	
	printf("ingrese el apellido del amigo ");
	scanf("%s", &record.apellido);
	
	printf("ingrese el nombre del amigo ");
	scanf("%s", &record.nombre);
	printf("escribe el numero de relefono del amigo");
	scanf("%s", &record.direccion);
	printf("Mi amigo es %s %s y su numero de telefono es %s", record.nombre, record.apellido, record.direccion);
	
	getch();
	return 0;
}
