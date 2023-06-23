#include <stdio.h>
#define N 10

void ArrayConjunto(int a[], int b[], int c[]){
	int i=0, j=0,k=0;
	while(i<N&&j<N){
		if(a[i]>b[j]){
			c[k]=b[j];
			j++;
		}else{
			c[k]=a[i];
			i++;
		}
		k++;
	}
	while (i < N) {
		c[k] = a[i];
		i++;
		k++;
	}
	while (j < N) {
		c[k] = b[j];
		j++;
		k++;
	}
}


int main(int argc, char *argv[]) {
	int i;
	int b[2*N];
	int array1[N], array2[N];
	for(i=0;i<N;i++){
		printf("ingrese el valor %d\n", i);
		scanf("%d", &array1[i]);
	}
	
	for(i=0;i<N;i++){
		printf("ingrese el valor %d\n", i);
		scanf("%d", &array2[i]);
	}
	
	ArrayConjunto(array1,array2,b);
	
	printf("el array consjunto sera: \n");
	
	for(i=0;i<2*N;i++){
		printf("%d\n", b[i]);
	}
	
	printf("recorrido inverso: \n");
	for(i=2*N-1;i>=0;i--){
		printf("%d\n", b[i]);
	}
	
	return 0;
}

