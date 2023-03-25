// https://github.com/studys22/Synergy-Programming-technology

#include <locale.h>
#include <stdio.h>
#include <string.h>

int main() {
	setlocale(LC_ALL, "ru-RU");

	char s[100];
	int k, l;
	printf("Введите текст: ");
	scanf("%s", &s);
	l = strlen(s);
	k = 0;
	for (int i = k; i < l; i++) {
		s[i] = s[i + 1];
	}
	printf("\nИзменённая строка: %s\n", s);
}