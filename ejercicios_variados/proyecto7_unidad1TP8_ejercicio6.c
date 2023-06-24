#include <stdio.h>
#include <math.h>
#include <conio.h>
float distancia_euclidea(float P_x,float P__y, float Q_x,  float Q_y){
	float distancia=0;
	distancia= sqrt(pow(Q_x-P_x,2) + pow(Q_y-P__y,2));
	return distancia;
}

void imprime_distancia (float distancia){
	
	printf("\nel resultado es %.2f", distancia);
}
	



int main(int argc, char *argv[]) {
	float P_x,P__y, Q_x, Q_y;
	
	float d;
	printf("\n ingrese el primer valor Px: ");
	scanf(" %f %f", &P_x, &P__y );
	
	printf("\n ingrese el Primer valor: Qx");
	scanf(" %f %f", &Q_x, &Q_y);
	
	d=distancia_euclidea(P_x,P__y,Q_x,Q_y); //el retorno de la funcion distancia_euclidea la asignamos a la variable d
	imprime_distancia(d);//imprimiremos el resultado de la variable d con void imprime_distancia
	
	getch();
	return 0;
}

