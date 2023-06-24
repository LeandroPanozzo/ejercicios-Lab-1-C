#include <stdio.h>
#include<math.h>
int main() {
	
	float a,b,c,raiz1,raiz2;
	printf ("escriba un valor entero ");
	scanf("%f", &a);
	printf ("escriba un tercer valor entero ");
	scanf("%f", &b);
	printf ("escriba un segundo valor entero ");
	scanf("%f", &c);
	

	
	if((pow(b,2)-4*a*c)>0){
		raiz1=-(b)+sqrt(pow(b,2)-4*a*c);
		raiz2=-(b)-sqrt(pow(b,2)-4*a*c);
		printf ("\ntiene dos soluciones:  %f, %f", raiz1,raiz2);
	}else{
		if(0==(pow(b,2)-4*a*c)){
			 raiz1=-(b)+sqrt(pow(b,2)-4*a*c);
			 raiz2=-(b)-sqrt(pow(b,2)-4*a*c);
			printf ("\nla tiene solucion doble: %f, %f", raiz1, raiz2);
				
		}else{
			if((pow(b,2)-4*a*c)<0){
				printf ("sin solucion");
			}
		}
	}
	
	
	return 0;
}
