#include <stdio.h>
#include <conio.h>

int encontrar(int a[], int b){
	int i,enc;
	
	enc=0;
	for(i=0;i<9;i++){
		if(b==a[i]){
			enc++;
			
		}
	}
	
	
	if(enc!=0){
		return printf("numero encontrado %d veces\n", enc);
		
	}else{
		return printf("numero no encontrado");
	}
	
}

int main(int argc, char *argv[]) {
	int lista[9]={0,4,4,9,3,50,5,82,3};
	int b;
	
	printf("ingrese numero a buscar\n");
	scanf("%d",&b);
	
	encontrar(lista,b);
	
	
	getch();
	return 0;
}
