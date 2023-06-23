#include <stdio.h>
#include <conio.h>
#define N 5

void suma(int a[], int b[]){
	int c[N],i;
	for(i=0; i<N;i++){
		c[i]=a[i]+b[i];
	}
	printf("la suma de los vectores sera: \n");
	for(i=0; i<N;i++){
		printf("%d\n",c[i]);
	}
}

int main(int argc, char *argv[]) {
	int array1[N], array2[N], array3[N];
	int i;
	printf("primer arreglo\n");
	for(i=0;i<N;i++){
		printf("ingrese el valor en la posicion %d\n", i);
		scanf("%d", &array1[i]);
		
	}
	printf("segundo arreglo\n");
	for(i=0;i<5;i++){
		printf("ingrese el valor en la posicion %d\n", i);
		scanf("%d", &array2[i]);
		
	}
	suma(array1,array2);
	
	
	getch();
	return 0;
}

