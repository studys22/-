// https://github.com/studys22/Synergy-Programming-technology

#include <locale.h>
#include <stdio.h>

void bubleSort(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				int t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
}

int main() {
	setlocale(LC_ALL, "ru-RU");

	int a[100], n;
	printf("Количество чисел: ");
	scanf("%i", &n);
	printf("Введите числа: ");
	for (int i = 0; i < n; i++) {
		scanf("%i", &a[i]);
	}
	bubleSort(a, n);
	printf("Отсортированные числа:");
	for (int i = 0; i < n; i++) {
		printf(" %i", a[i]);
	}
}
