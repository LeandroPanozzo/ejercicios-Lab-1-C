#include <stdio.h>

int factorial(int n){
	
	if(n<=1){
		return (1);
	}else{
		return (n*factorial(n-1));
	}
}


int main(int argc, char *argv[]) {
	int n;
	
	printf("ingrese el valor del que quiere calcular el factorial");
	scanf("%d", &n);
	printf("\nel factorial sera %d",factorial(n) );
	
	return 0;
}

