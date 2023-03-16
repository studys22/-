// https://github.com/studys22/Synergy-Programming-technology

#include <locale.h>
#include <stdio.h>

int main() {
	setlocale(LC_ALL, "ru-RU");

	int a[100][100], n, m;
	printf("Размерность массива: ");
	scanf("%i %i", &n, &m);
	printf("Введите числа: ");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%i", &a[i][j]);
		}
	}
	printf("Введенный массив:\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%4i", a[i][j]);
		}
		printf("\n");
	}
}
