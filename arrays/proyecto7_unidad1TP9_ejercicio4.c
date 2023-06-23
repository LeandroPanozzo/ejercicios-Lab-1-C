#include <stdio.h>
#define N 9
int main(int argc, char *argv[]) {
	
	int lista[N];
	int i, buscar,contar=0;
	for(i=0;i<N;i++){
		printf("\ningrese el numero para %d", i);
		scanf("%d",&lista[i]);
	}
	for(i=0;i<N;i++){
		printf("\n%d", lista[i]);
	}
	
	printf("ingrese el valor que desea buscar");
	scanf("%d",&buscar);
	
	for(i=0;i<N;i++){
		if(lista[i]==buscar){
			contar++;
		}
	}
	
	if(contar!=0){
		printf("\nel numero que buscaba es %d y se lo encontro %d", buscar, contar);
	}else{
		printf("numero no encontrado");
	}
	
	
	return 0;
}

