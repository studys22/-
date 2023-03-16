// https://github.com/studys22/Synergy-Programming-technology

#include <locale.h>
#include <stdio.h>

int main() {
	setlocale(LC_ALL, "ru-RU");

	int a[1000], n;
	printf("Количество чисел: ");
	scanf("%i", &n);
	printf("Введите числа: ");
	for (int i = 0; i < n; i++) {
		scanf("%i", &a[i]);
	}
	printf("Введённые числа:");
	for (int i = 0; i < n; i++) {
		printf(" %i", a[i]);
	}
}
