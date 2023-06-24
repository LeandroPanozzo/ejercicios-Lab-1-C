#include <stdio.h>

int cars (char car){
	switch(car)
	{
	case 'a': 
		return printf (" \nVocal a");
	break;
	case 'e': 
		return printf (" \nVocal e");
	break;
	case 'i': 
		return printf (" \nVocal i");
	break;
	case 'o': 
		return printf (" \nVocal o");
	break;
	case 'u': 
		return printf (" \nVocal u");
	break;
	default: 
		return printf("\nNo es vocal");
	break;
	}
}

int main(int argc, char *argv[]) {
	char car;
	printf("Ingrese un caracter");
	scanf ("%c",&car);
	cars(car);
	return 0;
}

