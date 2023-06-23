#include <stdio.h>
#define N 5

void inversa(int a[]){
	int i, arrayCopia[N];
	for(i=N-1;i>=0;i--){
		arrayCopia[N-1-i]=a[i];
	}
	printf("el array de forma inversa sera: \n");
	for(i=0;i<N;i++){
		printf("ingrese el valor en la posicion: %d sera %d\n", i, arrayCopia[i]);
	}
}


int main(int argc, char *argv[]) {
	int i;
	int array[N]={1,2,3,4,5};
	int arraCopia[N];
	
	for(i=0;i<N;i++){
		printf("el valor en la posicion: %d sera %d\n", i, array[i]);
	}
	inversa(array);
	
	
	
	return 0;
}

