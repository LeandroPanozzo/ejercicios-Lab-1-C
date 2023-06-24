#include <stdio.h>
#include <conio.h>
#include <string.h>
struct amigo {
	int id;
	char nombre[20];
	char direccion[20];
};
int main(int argc, char *argv[]) {
	
	struct amigo record={0};
	
	record.id=1;
	strcpy(record.nombre,"rojo");
	strcpy(record.direccion,"catamarca 20");
	
	
	printf("id es %d \n", record.id);
	printf("el nombre es %s \n", record.nombre);
	printf("la direccion es %s \n", record.direccion);
	
	getch();
	return 0;
}

