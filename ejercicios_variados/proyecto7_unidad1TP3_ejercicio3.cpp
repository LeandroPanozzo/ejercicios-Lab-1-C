#include <stdio.h>
#include<conio.h>
int main() {
	
	char letra;
	printf("ingrese una letra");
	scanf(" %c",&letra);
	
	if(letra=='a'){
		printf("la letra es una vocal");
	}else{
		if(letra=='e'){
			printf("la letra es una vocal");
		}else{
			if(letra=='i'){
				printf("la letra es una vocal");
			}else{
				if(letra=='o'){
					printf("la letra es una vocal");
				}else{
					if(letra=='u'){
						printf("la letra es una vocal");
					}else{
						printf("no es una vocal");
					}
				}
			}
		}
		
	}
	
	getch();
	return 0;
}

