#include <stdio.h>

int pascal(int row, int col) {
	if (col == 1 || col == row) {
		return 1;
	}
	else {
		return pascal(row - 1, col - 1) + pascal(row - 1, col);
	}
}

void printPascal(int n) {
	for (int row = 1; row <= n; row++) {
		for (int col = 1; col <= row; col++) {
			printf("%d", pascal(row, col));
		}
		printf("\n");
	}
}

int main() {
	int n;
	printf("Ingrese el n�mero de filas del tri�ngulo de Pascal: ");
	scanf("%d", &n);
	printf("Tri�ngulo de Pascal de %d filas:\n", n);
	printPascal(n);
	return 0;
}
