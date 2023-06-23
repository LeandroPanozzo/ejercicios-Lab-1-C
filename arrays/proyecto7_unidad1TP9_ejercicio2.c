#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int lista[7]={1,2,3,7,3,2,1};
	int menor, mayor, cont=0;
	
	
	for(int i=0;i<6;i++){
		menor=i;
		mayor=6-i;
		if(lista[menor]!=lista[mayor]){
			printf("\nno es capicua");
			break;
		}else{
			if(lista[menor]-lista[mayor]==0){
				cont++;
				if(cont==3){
				printf("\n es capicua");
				}
			}
			
		}
		
	}
	
	
	
	
	return 0;
}

