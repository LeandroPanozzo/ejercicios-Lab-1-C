#include <stdio.h>
#include <conio.h>

int encontrar(int a[], int b){
	int i,enc;
	i=0;
	enc=0;
	while(i<9&&enc==0){
		if(b==a[i]){
			enc=1;
			
		}else{
			i++;
		}
	}
	
	if(enc==1){
		return printf("numero encontrado\n");
		
	}else{
		return printf("numero no encontrado");
	}
	
}

int main(int argc, char *argv[]) {
	/* busqueda en un arreglo sin elementos repetidos*/
	int lista[9]={0,4,5,9,3,50,30,82,70};
	int i,b,enc;
	
	printf("ingrese numero a buscar\n");
	scanf("%d",&b);
	
	encontrar(lista,b);
	
	
	getch();
	return 0;
}

