#include <stdio.h>
#include <conio.h>
int main(int argc, char *argv[]) {
	
	char continuar;
	
	do{
		int opcion, i=2;
		printf("\n elija de que forma lo quiere realizar: ");
		printf("\n 1-sentencia do while ");
		printf("\n 2-sentencia while ");
		printf("\n 3-sentencia for ");
		scanf(" %d", &opcion);
		
		switch(opcion){
		case 1: do{
			printf("\n %d", i);
			i+=3;
		}while(i<=100);
		break;
		
		
		case 2: while(i<=100){
			printf("\n %d", i);
			i+=3;
		}
		break;
		case 3: for(i; i<100; i+=3){
			printf("\n %d", i);
		}
		break;
		
		default :
			printf("\n opcion invalida");
			break;
		}
		
		printf("\n desea continuar? ");
		scanf(" %c", &continuar);
	}while(continuar=='s');
	
	
	
	
	
	getch();
	return 0;
}

