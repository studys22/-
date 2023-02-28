// https://github.com/studys22/Synergy-Programming-technology

#include <locale.h>
#include <limits.h>
#include <stdio.h>

int main() {
	setlocale(LC_ALL, "ru-RU");

	int n, sum = 0, min = INT_MAX, max = INT_MIN, a;
	printf("Количество элементов: ");
	scanf_s("%i", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%i", &a);
		sum += a;
		if (min > a) {
			min = a;
		}
		if (max < a) {
			max = a;
		}
	}
	float avg = (float)sum / (float)n;

	printf("Минимальное: %i\n", min);
	printf("Максимальное: %i\n", max);
	printf("Сумма: %i\n", sum);
	printf("Среднее: %f\n", avg);
}
