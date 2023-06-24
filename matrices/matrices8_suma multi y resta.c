#include <stdio.h>
#define Val 3
#include <conio.h>
int main(int argc, char *argv[]) {
	int i,j;
	int m[Val][Val];
	int n[Val][Val];
	int z[Val][Val];
	int cont=0;
	
	/*primera matriz*/
	
	printf("ingrese los valores");
	for(i=0;i<Val;i++){
		for(j=0;j<Val;j++){
			printf("El valor en la posición [%d][%d]: ", i, j);
			scanf("%d", &m[i][j]);
		}
	}
	printf("La matriz será:\n");
	for(i = 0; i < Val; i++){
		for(j = 0; j < Val; j++){
			printf("%d\t", m[i][j]);
		}
		printf("\n");
	}
	
	/*segunda matriz*/
	printf("ingrese los valores");
	for(i=0;i<Val;i++){
		for(j=0;j<Val;j++){
			printf("El valor en la posición [%d][%d]: ", i, j);
			scanf("%d", &n[i][j]);
		}
	}
	printf("La matriz será:\n");
	for(i = 0; i < Val; i++){
		for(j = 0; j < Val; j++){
			printf("%d\t", n[i][j]);
		}
		printf("\n");
	}
	
	/*comparacion*/
	for(i = 0; i < Val; i++){
		for(j = 0; j < Val; j++){
			if(m[i][j]==n[i][j]){
				cont++;
				
			}
		}
		printf("\n");
	}
	if(cont==Val*Val){
		printf("son iguales\n");
	}else{
		printf("no son iguales\n");
	}
	
	/*M-N*/
	for(i = 0; i < Val; i++){
		for(j = 0; j < Val; j++){
			z[i][j]=m[i][j]-n[i][j];
			
		}
	}
	printf("La matriz M-N sera:\n");
	for(i = 0; i < Val; i++){
		for(j = 0; j < Val; j++){
			printf("%d\t", z[i][j]);
		}
		printf("\n");
	}
	/*M+N*/
	for(i = 0; i < Val; i++){
		for(j = 0; j < Val; j++){
			z[i][j]=m[i][j]+n[i][j];
			
		}
	}
	printf("La matriz M+N sera:\n");
	for(i = 0; i < Val; i++){
		for(j = 0; j < Val; j++){
			printf("%d\t", z[i][j]);
		}
		printf("\n");
	}
	/*M*N*/
	for(i = 0; i < Val; i++){
		for(j = 0; j < Val; j++){
			z[i][j]=m[i][j]*n[i][j];
			
		}
	}
	printf("La matriz M*N sera:\n");
	for(i = 0; i < Val; i++){
		for(j = 0; j < Val; j++){
			printf("%d\t", z[i][j]);
		}
		printf("\n");
	}
	getch();
	return 0;
}

