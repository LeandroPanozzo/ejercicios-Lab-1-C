#include <stdio.h>

int primo(int num){
	int i;
	if(num==1){
		return printf("\n 1");
	}else{
		for( i=2; i<=num; i++){
			if(num%i==0){
				return printf("\n 0");
				
				break;
			}else{
				
				return printf("\n 1");
				
			}
			
		}
	}
}

int main(int argc, char *argv[]) {
	int num;
	char elecc;
	do{
		printf("\ningrese el valor de un numero ");
		scanf("%d", &num);
		primo(num);
		printf("\ndesea terminar?");
		scanf(" %c", &elecc);
	}while(elecc!='s');
	
	return 0;
}

