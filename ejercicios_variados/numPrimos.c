#include <stdio.h>
#include <conio.h>
int main(int argc, char *argv[]) {
	
	int n,i;
	printf("ingrese un numero entero: ");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		if(n%i==0){
			printf("\n %d", i);
		}
	}
	
	getch();
	return 0;
}

