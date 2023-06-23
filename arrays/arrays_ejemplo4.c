#include <stdio.h>
#include <conio.h>
int main(int argc, char *argv[]) {
	char resp;
	int tamano=0,nuevo=0; 
	int indice=0;
	printf("de que tamaño quieres que sea tu vector? ");
	scanf("%d", &tamano);
	
	//declaro el vector
	
	int numeritos[tamano];
	for(indice=0;indice<tamano; indice++){
		printf("ingresa el elemento del indice %d: ", indice);
		scanf("%d", &numeritos[indice]);
		
	}
	
	//imprimir los datos del array
	for(indice=0;indice<tamano;indice++){
		printf("el indice %d tiene un %d\n ", indice, numeritos[indice]);
	}
	
	do{
		printf("deseas modificar tu vector? ");
		scanf(" %c", &resp);
		if(resp=='s'){
			printf("ingresa el indice del elemento a modificar: ");
			scanf("%d", &indice);
			if(indice>=0&&indice<tamano){
				printf("en el indice %d actualmente hay %d\n", indice,numeritos[indice]);
				printf("ingresa el nuevo elemento: \n");
				scanf("%d", &nuevo);
				
				numeritos[indice]=nuevo;
				
				printf("ahora el vector es:  \n");
				for(indice=0;indice<tamano;indice++){
					printf("el indice %d tiene un %d\n ", indice, numeritos[indice]);
				}
			}else{
				printf("el indice es invalido");
			}
			
		}
		
	}while(resp=='s');
	
	getch(); 
	return 0;
}

