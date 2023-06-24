#include <stdio.h>
#include<conio.h>
int main(int argc, char *argv[]) {
	int posi, cucharadas;
	char azucar, respuesta;
	printf("\nelija que desea para la merienda ");
	printf("\n opcion 1: te ");
	printf("\n opcion 2: cafe ");
	printf("\n opcion 3: cafe con leche ");
	printf("\n opcion 4: te con leche ");
	printf("\n opcion 5: salir:  \n");
	scanf("%d", &posi);
	
	switch(posi){
		
	case 1: printf("eligio tomar te");
	printf("desea ponerle azucar?");
	scanf("%c", respuesta);
	if(respuesta=='si'){
		printf("cuantas desea 1 o 2 cucharadas?");
		scanf("%d",cucharadas);
		if(cucharadas>=2){
			printf("se serviran %d cucharadas", cucharadas);
		}else{
			printf("solo se pueden 1 o 2 cucharadas de azucar");
		}
		
	}else{
		printf("no quiere azucar");
	}
	break;
	
	case 2: printf("eligio tomar cafe");
	printf("desea ponerle azucar?");
	scanf("%c", respuesta);
	if(respuesta=='si'){
		printf("cuantas desea 1 o 2 cucharadas?");
		scanf("%d",cucharadas);
		if(cucharadas>=2){
			printf("se serviran %d cucharadas", cucharadas);
		}else{
			printf("solo se pueden 1 o 2 cucharadas de azucar");
		}
		
	}else{
		printf("no quiere azucar");
	}
	break;
	
	case 3:printf("eligio tomar cafe con leche");
	printf("desea ponerle azucar?");
	scanf("%c", respuesta);
	if(respuesta=='si'){
		printf("cuantas desea 1 o 2 cucharadas?");
		scanf("%d",cucharadas);
		if(cucharadas>=2){
			printf("se serviran %d cucharadas", cucharadas);
		}else{
			printf("solo se pueden 1 o 2 cucharadas de azucar");
		}
		
	}else{
		printf("no quiere azucar");
	}
	break;
	
	case 4: printf("eligio tomar te con leche");
	 printf("desea ponerle azucar?");
	 scanf("%c", respuesta);
	 if(respuesta=='si'){
		 printf("cuantas desea 1 o 2 cucharadas?");
			scanf("%d",cucharadas);
			if(cucharadas>=2){
			 printf("se serviran %d cucharadas", cucharadas);
		 }else{
			 printf("solo se pueden 1 o 2 cucharadas de azucar");
		 }
			
	 }else{
		 printf("no quiere azucar");
	 }
	break;
	
	case 5: printf("usted a salido");
	break;
	default: 
		printf("numero incorrecto");
	}
	
	
	getch();
	return 0;
}

