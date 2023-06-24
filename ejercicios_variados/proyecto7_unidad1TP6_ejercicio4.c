#include <stdio.h>
#include <conio.h>
int main(int argc, char *argv[]) {
	int num1,num2, i, opcion;
	
	printf("ingrese un primer numero");
	scanf("%d", &num1);
	printf("ingrese un segundo numero");
	scanf("%d", &num2);
	printf("\nelija una opcion: ");
	printf("\n1- pares: ");
	printf("\n2- impares ");
	scanf("%d", &opcion);
	
	if (opcion==1){
		for(i=num1; i<=num2; i++){
			if(i%2==0){
				printf("%d", i);
			}
		}
	}else{
		if (opcion==2){
			for(i=num1; i<=num2; i++){
				if(i%2!=0){
					printf("%d", i);
				}
			}
		}else{
			printf("opcion invalida");
		}
	}
	
	
	
	
	
	getch();
	return 0;
}

