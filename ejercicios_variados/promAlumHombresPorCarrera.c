#include <stdio.h>
#include <conio.h>
int main(int argc, char *argv[]) {
	int carrA_m=0, carrB_m=0, carrC_m=0;
	int contA_m=0, contB_m=0, contC_m=0;
	
	int i, edad, n;
	char sex, carrera;
	
	float promedioA=0, promedioB=0, promedioC=0 ;
	
	printf("ingrese el num de alumnos: ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		printf("\n ingrese el sexo de cada alumno (M o F)");
		scanf(" %c", &sex);
		
		if(sex=='M'){
			printf("\n ingrese la edad del alumno: ");
			scanf("%d", &edad);
			printf("ingrese la carrera que cursa (A,B,C): ");
			scanf(" %c", &carrera);
			
			switch(carrera){
			case 'A': 
				carrA_m+=edad;
				contA_m++;
				break;
				
			case'B':
				carrB_m+=edad;
				contB_m++;
				break;
				
			case 'C':
				carrC_m+=edad;
				contC_m++;
				break;
			}
		}
	}
	
	if(contA_m>0){
		promedioA= carrA_m/contA_m;
	}
	if(contB_m>0){
		promedioB= carrB_m/contB_m;
	}
	if(contC_m>0){
		promedioC=carrC_m/contC_m;
	}
	
	if(promedioA<promedioB&&promedioB<promedioC){
		printf("\nla carrera A es la que tiene menor promedio de edad de alumnos");
	}else{
		if(promedioB<=promedioA&&promedioA<promedioC){
			printf("\nla carrera B es la que tiene menor promedio de edad de alumnos");
		}else{
			printf("\nla carrera C es la que tiene menor promedio de edad de alumnos");
		}
	}
	
	
	getch();
	return 0;
}

