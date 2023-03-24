// https://github.com/studys22/Synergy-Programming-technology

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <algorithm>

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
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			a[i][j] = rand() % 100 ;
		}
	}
	printf("\nИсходный массив:\n");
	printArray(a, n, m);
	for (int i = 0; i < n; i++) {
		std::sort(a[i], a[i] + m);
	}
	printf("\nОтсортированный массив:\n");
	printArray(a, n, m);
}