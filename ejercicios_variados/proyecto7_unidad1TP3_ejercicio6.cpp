#include <stdio.h>
#include<conio.h>

int main(int argc, char *argv[]) {
	
	char letra;
	printf("ingrese una letra");
	scanf(" %c",&letra);
	
	switch(letra){
	case 'a': printf("la letra es una vocal");
	break;
	case 'e':printf("la letra es una vocal");
	break;
	case 'i': printf("la letra es una vocal");
	break;
	case '0': printf("la letra es una vocal");
	break;
	case 'u': printf("la letra es una vocal");
	break;
	default : printf("la letra no es una vocal");
	break;
	}
	getch();
	return 0;
}

