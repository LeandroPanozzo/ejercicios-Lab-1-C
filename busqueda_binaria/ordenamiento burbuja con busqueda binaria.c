#include <stdio.h>

void busquedaBin(int a[],int b){
	int d=0, c=7, mitad;
	int contadorA = 0,contadorB = 0;
	while (d < c){ /*debe ser menor no menor o igual*/
		contadorA++;  
		mitad = (d + c) / 2;
	
		if(b == a[mitad]){ /*si el valor que buscamos esta en la mitad*/
			
			printf("Numero %d encontrado en posicion %d\n", a[mitad], mitad);  break;
		}
		
		else if(b < a[mitad]){
			
			c = mitad -1;
		}
		
		else{
			d = mitad + 1;
			
		}
		contadorB++;
		
	}/*fin while*/

	if(contadorA == contadorB){  printf("Numero no encontrado\n");
	
	}
}


int main(int argc, char *argv[]) {
	/*ordenamiento burbuja con busqueda binaria*/
	int lista[7]={1,4,3,7,6,5,10};
	int temp,i,j;
	int Buscar;
	
	
	for(i=0;i<7;i++){
		for(j=0;j<7-i-1;j++){
			if(lista[j]>lista[j+1]){
				temp=lista[j];
				lista[j]=lista[j+1];
				lista[j+1]=temp;
			}
		}
		
	}
	
	printf("la lista ordenada sera: \n");
	for(i=0;i<7;i++){
		printf("%d \n", lista[i]);
	}
	printf("ingrese el numero a buscar: \n");
	scanf("%d",&Buscar);
	
	busquedaBin(lista,Buscar);
	
	return 0;
}

