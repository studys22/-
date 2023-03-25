// https://github.com/studys22/Synergy-Programming-technology

#include <locale.h>
#include <stdio.h>
#include <string.h>

int main() {
	setlocale(LC_ALL, "ru-RU");

	char s[100], s2[100] = "";
	int k, l;
	printf("Введите текст: ");
	scanf("%s", &s);
	l = strlen(s);
	printf("\nВведите индекс удаляемого элемента (от 0 по %i): ", l-1);
	scanf("%i", &k);
	while (k < 0 || k >= l) {
		printf("Введённый индексы находятся за пределами строки. Повторите ввод: ");
		scanf("%i", &k);
	}
	strncpy(s2, s, k);
	strncpy(s2 + k, s + k + 1, l - k - 1);
	printf("\nИзменённая строка: %s\n", s2);
}