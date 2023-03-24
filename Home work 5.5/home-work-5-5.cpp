// https://github.com/studys22/Synergy-Programming-technology

#include <locale.h>
#include <stdio.h>

void printArray(int a[][100], int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%4i", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int main() {
	setlocale(LC_ALL, "ru-RU");

	int a[100][100], n, m;
	printf("Размерность массива: ");
	scanf("%i %i", &n, &m);
	printf("Массив:\n");

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%i", &a[i][j]);
		}
	}
	printf("\nИсходная матрица:\n");
	printArray(a, n, m);
	int b[100][100];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			b[j][i] = a[i][j];
		}
	}
	printf("\nПеревернутая матрица:\n");
	printArray(b, m, n);
}