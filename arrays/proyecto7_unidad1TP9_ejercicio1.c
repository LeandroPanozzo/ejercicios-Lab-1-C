#include <stdio.h>
#include <conio.h>

int par (int i){
	
	if(i%2==0){
		
		return printf("es par\n");
		
	}else{
		return printf("es impar\n");
		
	}
	
}

int main(int argc, char *argv[]) {
	
	int lista[9]={0,4,78,5,32,9,77,90,65};
	int i;
	
	for(i=8;i>=0;i--){
		par(lista[i]);
		
	}
	
	getch();
	return 0;
}












/*buscar como agregar contador*/
