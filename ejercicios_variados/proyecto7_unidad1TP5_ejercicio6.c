#include <stdio.h>
#include<conio.h>
int main(int argc, char *argv[]) {
	int num,i,fac=1;
	
	printf("ingrese un numero");
	scanf(" %d", &num);
	
	
	for(i=1;i<=num;i++){
		fac*=i;
		
	}
	printf("\nel factorial de %d es %d",num ,fac);
	
	
	getch();
	return 0;
}

