#include <stdio.h>

void suma_fraccion(int num1, int den1, int num2, int den2, int result_num, int result_den){
	result_num= num1*den2+num2*den1;
	result_den= den1*den2;
	if(result_den==result_num){
		printf("el valor sera 1");
	}else{
		printf("\n%d/%d + %d/%d = %d/%d", num1, den1, num2, den2, result_num, result_den);
	}
}
	
void resta_fracc(int num1, int den1, int num2, int den2, int result_num, int result_den){
	result_num= num1*den2-num2*den1;
	result_den= den1*den2;
	if(result_den==result_num){
		printf("el valor sera 1");
	}else{
		printf("\n%d/%d - %d/%d = %d/%d", num1, den1, num2, den2, result_num, result_den);
	}
}
		
void multi(int num1, int den1, int num2, int den2, int result_num, int result_den){
	result_num= num1*num2;
	result_den= den1*den2;
	if(result_den==result_num){
	printf("el valor sera 1");
	}else{
	printf("\n%d/%d * %d/%d = %d/%d", num1, den1, num2, den2, result_num, result_den);
	}
}
			
void divi(int num1, int den1, int num2, int den2, int result_num, int result_den){
	result_num= num1*den2;
	result_den= num1*den1;
	if(result_den==result_num){
		printf("el valor sera 1");
	}else{
		printf("\n%d/%d : %d/%d = %d/%d", num1, den1, num2, den2, result_num, result_den);
	}
}
				
				
int main(int argc, char *argv[]) {
					
	int num, den, num1,den1,opcion, result_num, result_den;
	printf("\ningrese una opcion: ");
	printf("\n1- sumar dos fracciones: ");
	printf("\n2- restar dos fracciones: ");	
	printf("\n3- multiplicar dos fracciones: ");
	printf("\n4- dividir dos fracciones: ");
	printf("\n5- salir: ");
	scanf("%d", &opcion);
	
	switch(opcion){
	
	case 1: 
	printf("\ningrese el numerador: ");
	scanf("%d", &num);
	printf("\ningrese el denominador: ");
	scanf("%d", &den);
	printf("\ningrese el numerador: ");
	scanf("%d", &num1);
	printf("\ningrese el denominador: ");
	scanf("%d", &den1);
	if(den==0||den1==0){
		printf("\nno se puede realizar porque no esta definida");
	}else{
		suma_fraccion(num,den, num1, den1, result_num, result_den);
	}
	break;
						
						
	case 2: 
	printf("\ningrese el numerador: ");
	scanf("%d", &num);
	printf("\ningrese el denominador: ");
	scanf("%d", &den);
	printf("\ningrese el numerador: ");
	scanf("%d", &num1);
	printf("\ningrese el denominador: ");
	scanf("%d", &den1);
	if(den==0||den1==0){
		printf("\nno se puede realizar porque no esta definida");
	}else{
		resta_fracc(num,den, num1, den1, result_num, result_den);
	}
	break;
	
	case 3: 
	printf("\ningrese el numerador: ");
	scanf("%d", &num);
	printf("\ningrese el denominador: ");
	scanf("%d", &den);
	printf("\ningrese el numerador: ");
	scanf("%d", &num1);
	printf("\ningrese el denominador: ");
	scanf("%d", &den1);
	if(den==0||den1==0){
		printf("\nno se puede realizar porque no esta definida");
	}else{
		multi(num,den, num1, den1, result_num, result_den);
	}
	break;
	
	case 4: 
	printf("\ningrese el numerador: ");
	scanf("%d", &num);
	printf("\ningrese el denominador: ");
	scanf("%d", &den);
	printf("\ningrese el numerador: ");
	scanf("%d", &num1);
	printf("\ningrese el denominador: ");
	scanf("%d", &den1);
	if(den==0||den1==0){
		printf("\nno se puede realizar porque no esta definida");
	}else{
		divi(num,den, num1, den1, result_num, result_den);
	}
	break;
						
	case 5:
	printf("\nsalio");
	break;
						
	default:
	printf("\nopcion incorrecta");
	break;
	}
					
					
	return 0;
}




