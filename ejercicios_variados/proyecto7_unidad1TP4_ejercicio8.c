#include <stdio.h>
#include <conio.h>
int main(int argc, char *argv[]) {
	int eleccion = 0;
	
	int anual;
	float val,aux, deprec,n,guardado;
	anual=1;
	guardado=0;
	printf("\t\t\tdepreciacion anual");
	printf("\ningrese uno de los metodos: ");
	printf("\n1-metodo de linea recta");
	printf("\n2-metodo de balance");
	printf("\n3-metodo de la suma de los digitos de los años");
	printf("\n4- salir\n");
	scanf("\n %d", &eleccion);
	printf("eligio %d\n", eleccion);
	
	if(eleccion==1||eleccion==2||eleccion==3){
		printf("ingrese el valor del objeto");
		scanf("%f", &aux);
		printf("ingrese los años");
		scanf("%f", &n);
		switch(eleccion){
		case 1: 
			
			deprec= aux/n;
			
			while(n>=anual){
				printf("\n año: %d", anual);
				aux-=deprec;
				printf("\n el valor en el año: %f", aux);
				printf("\nla depreciacion anual sera: %f",deprec);
				anual++;
			}
			printf("\nel valor original del objeto era: %f", aux);
			break;
			
		case 2:
			deprec= 2/n;
			printf("\n deprecicacion  %f:\n", deprec);
			while(n>=anual){
				val = deprec *(aux);    //en cada iteracion se va actualizando el auxilirar debido a la resta de abajo
				aux=aux-val; //es lo mismo que aux-=val
				printf("\nAño %d:\n", anual);
				printf("la depresiacion sera: %.2f\n", val);
				printf("Depreciación anual: %.2f\n", aux);
				anual++;
			}
			break;
			
		case 3:
			anual=0;
			while(n>anual){
				//anual=anual; 
				anual++; //ponemos aca arriba para que empiece en 1
				
				printf("\naño es: %d", anual);
				deprec+=anual;//se repite hasta que deprec =55
				printf("\nanual es: %f", deprec);
				
			}
			while(val<=n){
				guardado=(n-val)/deprec;
				
				printf("\n el coeficiente de depreciacion es: %f", guardado);
				
				printf("la depreciacion en el año %f sera: %f",val,aux*guardado);
				val++;
			}
			break;
		}
	}else{
		if(eleccion==4){
			printf("desidio salir");
		}else{
			while(eleccion>4||eleccion<1){
				printf("\n\t\t\t\t\t eleccion incorrecta intentelo otra vez\n\n");
				printf("\t\t\tdepreciacion anual\n\n\n");
				printf("\ningrese uno de los metodos: ");
				printf("\n1-metodo de linea recta");
				printf("\n2-metodo de balance");
				printf("\n3-metodo de la suma de los digitos de los años");
				printf("\n4- salir\n");
				scanf("\n %d", &eleccion);
				printf("eligio %d\n", eleccion);
				
				if(eleccion==1||eleccion==2||eleccion==3){
					printf("ingrese el valor del objeto");
					scanf("%f", &aux);
					printf("ingrese los años");
					scanf("%f", &n);
					switch(eleccion){
					case 1: 
						
						deprec= aux/n;
						
						while(n>=anual){
							printf("\n año: %d", anual);
							aux-=deprec;
							printf("\n el valor en el año: %f", aux);
							printf("\nla depreciacion anual sera: %f",deprec);
							anual++;
						}
						printf("\nel valor original del objeto era: %f", aux);
						break;
						
					case 2:
						deprec= 2/n;
						printf("\n deprecicacion  %f:\n", deprec);
						while(n>=anual){
							val = deprec *(aux);    //en cada iteracion se va actualizando el auxilirar debido a la resta de abajo
							aux=aux-val; //es lo mismo que aux-=val
							printf("\nAño %d:\n", anual);
							printf("la depresiacion sera: %.2f\n", val);
							printf("Depreciación anual: %.2f\n", aux);
							anual++;
						}
						break;
						
					case 3:
						anual=0;
						while(n>anual){
							//anual=anual; 
							anual++;
							
							printf("\naño es: %d", anual);
							deprec+=anual;//deprec =55
							printf("\nanual es: %f", deprec);
							
						}
						while(val<=n){
							guardado=(n-val)/deprec;
							
							printf("\n el coeficiente de depreciacion es: %f", guardado);
							
							printf("la depreciacion en el año %f sera: %f",val,aux*guardado);
							val++;
						}
						break;
					}
				}
			}
		}
	}
	
	
	getch();
	return 0;
}

