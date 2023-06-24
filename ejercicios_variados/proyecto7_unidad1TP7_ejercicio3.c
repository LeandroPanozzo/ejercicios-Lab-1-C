#include <stdio.h>
int mcd_num1_MAyorQue_num2(int dividendo, int divisor){
	int resto;
	while(divisor!=0){
		resto=dividendo%divisor;
		dividendo=divisor;
		divisor=resto;
	}
	return dividendo;
}
int mcd_num2_MAyorQue_num1(int divisor, int dividendo){
		int resto;
		while(divisor!=0){
			resto=dividendo%divisor;
			dividendo=divisor; //el valor del divisor sera el del dividendo
			divisor=resto;   //en el sigiente el valor del resto dividira
		}
		return dividendo;
	}
int main(int argc, char *argv[]) {
	int num1, num2;
	
	printf("\ningrese el primer numero");
	scanf("%d", &num1);
	printf("\ningrese el segundo numero");
	scanf("%d", &num2);
	if(num1>num2){
		printf("El MCD de %d y %d es: %d\n", num1, num2, mcd_num1_MAyorQue_num2(num1, num2));
	}else{
		printf("El MCD de %d y %d es: %d\n", num1, num2, mcd_num2_MAyorQue_num1(num1, num2));
	}
	
	
	return 0;
}

