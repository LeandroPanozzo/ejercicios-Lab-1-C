#include <stdio.h>

int MCD(int x, int y) {
	if (y == 0) {
		return x;
	} else {
		return MCD(y, x % y);
	}
}

int main() {
	int x,y;
	printf("ingrese el primer valor\n");
	scanf("%d",&x);
	printf("ingrese el segundo valor\n");
	scanf("%d",&y);
	printf("MCD de %d y %d es %d\n", x, y, MCD(x, y));
	return 0;
}
