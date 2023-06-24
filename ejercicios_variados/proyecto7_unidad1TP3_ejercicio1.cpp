#include <stdio.h>

int main() {
	int a,b,c;
	printf("ingrese el primer numero");
	scanf("%d",&a);
	printf("ingrese el primer numero");
	scanf("%d",&b);
	printf("ingrese el primer numero");
	scanf("%d",&c);
	if (a==b){
		printf("el valor 1 y 2 son iguales");
	}else{
		if(a==c){
			printf("el valor 1 y 3 son iguales");
		}else{
			if(b==c){
				printf("el valor 2 y 3 son iguales");
			}else{
				if(a==b==c){
					printf("todos los valore son iguales");
				}else{
					printf("ningun valor es identico");
				}
				
			}
		}
	}
	
	
	return 0;
}

