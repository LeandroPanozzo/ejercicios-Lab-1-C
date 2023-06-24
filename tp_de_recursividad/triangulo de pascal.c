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
	printf("Ingrese el número de filas del triángulo de Pascal: ");
	scanf("%d", &n);
	printf("Triángulo de Pascal de %d filas:\n", n);
	printPascal(n);
	return 0;
}
