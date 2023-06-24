#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int num1;
	int num2;
	
	for(num1=0; num1<=5; num1++){
		num2=num1*(-1);
		printf("\n%d y %d\n",num1,num2);
	}
	
	return 0;
}

