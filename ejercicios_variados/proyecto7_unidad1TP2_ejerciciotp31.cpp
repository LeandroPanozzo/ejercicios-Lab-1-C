#include <stdio.h>
#include <conio.h>


int main() {
	
	float horas,salario, precio_hora;
	char nombre;
	
	printf("ingrese las horas");
	scanf("%f", &horas);
	printf("ingrese el precio por horas de trabajo");
	scanf("%f", &precio_hora);
	
	if (horas>=0&&  horas<=40){
		
		salario= horas*precio_hora;
		printf("su salario es: %f",salario);
		
	}else{
		if(horas>40){
			salario=40*precio_hora+1.5*precio_hora*(horas-40);
			printf("su salario es %f",salario);
		}else{
			printf("ingrese un valor correcto");
		}
	}
	
	
	getch();
	
	
	return 0;
}

