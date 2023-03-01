// https://github.com/studys22/Synergy-Programming-technology

#include <locale.h>
#include <stdio.h>

int main() {
	setlocale(LC_ALL, "ru-RU");

	int a[7];
	printf("Введите 7 чисел: ");
	for (int i = 0; i < 7; i++) {
		scanf_s("%i", &a[i]);
	}
	for (int i = 0; i < 7; i++) {
		printf("a[%i] = %i\n", i, a[i]);
	}
}
