#include <stdio.h>

int main() {
	
	int a,b,c;
	printf ("escriba un valor entero ");
	scanf("%d", &a);
	printf ("escriba un tercer valor entero ");
	scanf("%d", &b);
	printf ("escriba un segundo valor entero ");
	scanf("%d", &c);
	
	if (a>b&&a>c){
		printf("%d es mayor",a);
	}else{
		if(b>a&&b>c){
			printf("%d es mayor", b);
		}else{
			printf("%d es mayor",c);
			
			
			
			
			
		}
		
	}
	
	return 0;
}
