#include <stdio.h>
#define ELE 3
#include <conio.h>
struct estructura_alumnos{
	char nombre[30];
	int edad;
	char apellido[40];
	int promedio;
	int dni;
};

void ordenarAlumnosPorDNI(struct estructura_alumnos alumnos[], int n) {
	int i, j;
	struct estructura_alumnos temp;
	
	for (i = 0; i < n-1; i++) { /*ordenar de menor a mayor*/
		for (j = 0; j < n-i-1; j++) {
			if (alumnos[j].dni > alumnos[j+1].dni) {
				/* Intercambiar los alumnos*/
				temp = alumnos[j];
				alumnos[j] = alumnos[j+1];
				alumnos[j+1] = temp;
			}
		}
	}
}

int obtenerMayorEdad(struct estructura_alumnos alumnos[], int n) {
	int i;
	int mayorEdad = alumnos[0].edad;
	
	for (i = 1; i < n; i++) {
		if (alumnos[i].edad > mayorEdad) {
			mayorEdad = alumnos[i].edad;
		}
	}
	
	return mayorEdad;
}

int obtenerMenorEdad(struct estructura_alumnos alumnos[], int n) {
	int i;
	int menorEdad = alumnos[0].edad;
	
	for (i = 1; i < n; i++) {
		if (alumnos[i].edad < menorEdad) {
			menorEdad = alumnos[i].edad;
		}
	}
	
	return menorEdad;
}
int main(int argc, char *argv[]) {
	
	
	struct estructura_alumnos alumnos[ELE];
	int i,buscar;
	int EdadMenor=0, cont_prom1=0, cont_prom2=0, promedio_menor7=0;
	int edadMayor, edadMenor, prom_edad = 0;
	float porcent_mayor7=0;
	
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
		prom_edad += alumnos[i].edad;
		printf("\n");
		printf("DNI: ");
		scanf("%d", &alumnos[i].dni);
		printf("\n");
	}
	
	ordenarAlumnosPorDNI(alumnos, ELE); /*ordenamiento*/
	
	printf("\n\n\t\t listado de alumnos\n");
	printf("DNI        Apellido       Nombre        Edad         Promedio\n");
	printf("------------------------------------------------------------------------\n");
	for (i = 0; i < ELE; i++) {
		printf("%-15d %-9s   %-12s   %-13d  %d\n",
			   alumnos[i].dni,alumnos[i].apellido,alumnos[i].nombre,alumnos[i].edad, alumnos[i].promedio);
	}
	
	for(i=0;i<ELE;i++){
		if(alumnos[i].promedio>=7){
			cont_prom1++; /*mayor o igual a 7*/
			
		}else{
			if(alumnos[i].promedio<7){ /*menor a 7*/
				cont_prom2++;
				promedio_menor7+=alumnos[i].promedio;
			}
		}
	}
	
	porcent_mayor7 = (cont_prom1 * 100) / ELE;
	
	
	edadMayor = obtenerMayorEdad(alumnos, ELE);
	edadMenor = obtenerMenorEdad(alumnos, ELE);
	
	printf("total de alumnos: %d \n", ELE);
	printf("Promedio de Edad de los alumnos: %d \n", prom_edad/ELE);
	printf("Mayor Edad: %d \n", edadMayor);
	printf("Menor Edad: %d \n", edadMenor);
	printf("Cantidad de alumnos con promedio mayor e igual a 7 %d \n", cont_prom1);
	printf("Cantidad de alumnos con promedio menor a 7 %d \n", cont_prom2);
	printf("Porcentaje de alumnos con promedio mayor e igual a 7 %.2f \n", porcent_mayor7);
	printf("Promedio de alumnos con promedio menor a 7 %d \n", promedio_menor7/cont_prom2);
	
	getch();
	return 0;
}


