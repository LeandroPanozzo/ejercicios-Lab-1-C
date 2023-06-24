#include <stdio.h>
#include <conio.h>
int main(int argc, char *argv[]) {
	int num1, num2,numCont=0;
	numCont=0;
	
	printf("ingrese el numero que es limite inferior:");
	scanf("%d", &num1);
	printf("ingrese el numero que es limite superiror:");
	scanf("%d", &num2);
	
	
	if(num1!=num2&&num1<num2){
		while(num1<=num2){
			numCont=num1;
			printf("\nlos numeros seran: %d\n",numCont);
			num1++;
		}
	}else{
		if(num1!=num2&&num1>num2){
			while(num1>num2){
				numCont=num2;
				printf("\nlos numeros seran: %d\n",numCont);
				num2++;
			}
		}else{
			while(num1==num2){
				printf("\ningreso valores identicos, ingrese otro");
				printf("\ningrese el numero que es limite inferior:");
				scanf("%d", &num1);
				printf("\ningrese el numero que es limite superiror:");
				scanf("%d", &num2);
				
			}
		}
		while(num1>num2){
			numCont=num2;
			printf("\nlos numeros seran: %d\n",numCont);
			num2++;
		}
		while(num1<=num2){
			numCont=num1;
			printf("\nlos numeros seran: %d\n",numCont);
			num1++;
		}
		
		
	}
	
	
	getch();
	
	return 0;
}

