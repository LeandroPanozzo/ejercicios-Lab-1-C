#include <stdio.h>

int main(int argc, char *argv[]) {
	int lista[7]={3,4,1,6,7,5,10};
	int temp,i,j;
	for(i=0;i<7;i++){
		for(j=0;j<7-i-1;j++){  /*en cada iteracion va disminujendo el recorrido de las posiciones, en la primera recorre 7-0-1=6 posiciones, el la segunda teracion 5 y asi*/
			if(lista[j]>lista[j+1]){
				temp=lista[j];
				lista[j]=lista[j+1];
				lista[j+1]=temp;
			}
		}
		
	}
	
	printf("la lista ordenada sera: \n");
	for(i=0;i<7;i++){
		printf("%d\n", lista[i]);
	}
	
	
	return 0;
}

