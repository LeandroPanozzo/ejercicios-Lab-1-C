#include <stdio.h>

int suma(int a, int b){
	return (a+b);
}

int main(int argc, char *argv[]) {
	int a; 
	int b;
	printf("\ningrese el primer valor ");
	scanf("%d", &a);
	printf("\ningrese el segundo valor ");
	scanf("%d", &b);
	printf("\nel valor sera: %d", suma(a,b));
	return 0;
}

