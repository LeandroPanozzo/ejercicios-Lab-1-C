#include <stdio.h>

int fibonacci(int i){
	
	if(i == 0 || i == 1) {
		return i;
	} else {
		return fibonacci(i-1) + fibonacci(i-2);
	}
	
}
int main() {
	int i;
	
	printf("los primeros 10 numeros de la serie de fibonacci son: ");
	for(i=0;i<10;i++){
		printf("\n%d", fibonacci(i));
	}
	
	return 0;
}
