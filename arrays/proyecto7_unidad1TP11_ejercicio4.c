#include <stdio.h>
#define N 10
int main(int argc, char *argv[]) {
	int i,j=0,k=0;
	int array[N]; 
	int multiplos[N],demas[N];
	
	for(i=0;i<N;i++){
		printf("ingrese el valor en la posicion %d\n", i);
		scanf("%d", &array[i]);
		
	}
	
	for(i=0;i<N;i++){
		if(array[i]%3==0){
			if(j<N){
				multiplos[j++]=array[i];
			}
			
		}else{
			if(k<N){
				demas[k++]=array[i];
			}
			
		}
		
	}
	for(i=0;i<j;i++){
		printf("los numeros multiplos de 3 seran %d\n", multiplos[i]);
		
	}
	for(i=0;i<k;i++){
		printf("los numeros restantes seran %d\n", demas[i]);
		
	}
	
	
	return 0;
}

