#include <stdio.h>
#include <math.h>
int reales(int a,int b,int c){
	float raiz1, raiz2;
	if(a==0){
		return printf ("sin solucion");
	}else{
		if((pow(b,2)-4*a*c)>0){
			raiz1=((-b)+sqrt((b*b)-4*a*c))/(2*a);
			raiz2=((-b)-sqrt((b*b)-4*a*c))/(2*a);
			
				return  printf ("\nla tiene dos soluciones: %f, %f", raiz1, raiz2, " son raices reales");
			
			
		}else{
			if((pow(b,2)-4*a*c)<0){
				raiz1=((-b)+sqrt((b*b)-4*a*c))/(2*a);
				raiz2=((-b)-sqrt((b*b)-4*a*c))/(2*a);
				
					return  printf ("\nla tiene raiz real compleja: %f, %f", raiz1, raiz2, " son raices reales");
				
				
			}else{
				if((pow(b,2)-4*a*c)==0){
					raiz1=((-b)+sqrt((b*b)-4*a*c))/(2*a);
					raiz2=((-b)-sqrt((b*b)-4*a*c))/(2*a);
					
						return  printf ("\nla Una raíz real doble: %f, %f", raiz1, raiz2, " son raices reales");
					
					
				}
			}
			
		}
		
	}
}


int main(int argc, char *argv[]) {
	float a,b,c,raiz1,raiz2;
	printf ("escriba un valor entero ");
	scanf("%f", &a);
	printf ("escriba un segundo valor entero ");
	scanf("%f", &b);
	printf ("escriba un tercer valor entero ");
	scanf("%f", &c);
	reales(a,b,c);
	
	return 0;
}

