#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[]) {
	int lista[9]={0,4,5,9,3,50,4,81,4};
	int i,b,enc;
	
	printf("ingrese numero a buscar\n");
	scanf("%d",&b);
	
	enc=0;
	for(i=0;i<9;i++){
		if(b==lista[i]){
			enc++;
			
		}
	}
	
	
	if(enc!=0){
		return printf("numero encontrado %d veces\n", enc);
		
	}else{
		return printf("numero no encontrado");
	}
	
	getch();
	return 0;
}
