#include <stdio.h>
#define ELE 3
#include <conio.h>
struct estructura_alumnos{
	char nombre[30];
	int edad;
	char apellido[40];
	int promedio;
	int legajo;
};
int main(int argc, char *argv[]) {
	
	struct estructura_alumnos alumnos[ELE];
	int i,buscar;
	int cont=0, cont2=0, cont3=0;
	for(i=0;i<ELE;i++){
		printf("datos del alumno %d \n", i);
		printf("Nombre: ");
		scanf("%s", &alumnos[i].nombre); /*fijarse como seria con scanf*/
		printf("\n");
		printf("apellido: ");
		scanf("%s", &alumnos[i].apellido);
		printf("\n");
		printf("promedio: ");
		scanf("%d", &alumnos[i].promedio);
		printf("\n");
		printf("edad: ");
		scanf("%d", &alumnos[i].edad);
		printf("\n");
		printf("legajo: ");
		scanf("%d", &alumnos[i].legajo);
		printf("\n");
	}
	printf("\n\n\t\t\t\t\t\t\t listado de alumnos\n");
	printf("------------------------------------------------------------------------\n");
	printf("Legajo   |   Apellido     |   Nombre     |   Edad     |   Promedio\n");
	printf("------------------------------------------------------------------------\n");
	for (i = 0; i < ELE; i++) {
		printf("%-17d | %-12s | %-14s | %-13d | %d\n",
			   alumnos[i].legajo,alumnos[i].apellido,alumnos[i].nombre,alumnos[i].edad,alumnos[i].promedio);
	}
	
	for(i=0;i<ELE;i++){
		if(alumnos[i].promedio>=7){
			cont++;
		}else{
			if(alumnos[i].promedio>=5&&alumnos[i].promedio<=6){
				cont2++;
			}else{
				if(alumnos[i].promedio<6){
					cont3++;
				}
		    }
		}
	}
	
	printf("cantidad de alumnos promocionados: %d\n",cont);
	printf("cantidad de alumnos regulaes: %d\n",cont2);
	printf("cantidad de alumnos no aprobados: %d\n",cont3);
	
	getch();
	return 0;
}

