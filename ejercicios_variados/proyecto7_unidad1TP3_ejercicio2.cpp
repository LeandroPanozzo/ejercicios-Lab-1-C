#include <stdio.h>

int main() {
	
	char carac1, carac2;
	printf("ingrese el primer caracter");
	scanf(" %c",&carac1);
	printf("ingrese el segundo caracter");
	scanf(" %c",&carac2);
	
	if(carac1 != carac2){
		if(carac1=='a'|| carac2=='a'){
			printf("su apellido es: ");
		}
		
	}else{
		printf("su nombre es");
	}
	
	return 0;
}

