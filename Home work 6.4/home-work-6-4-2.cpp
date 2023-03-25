// https://github.com/studys22/Synergy-Programming-technology

#include <locale.h>
#include <stdio.h>
#include <string.h>

int main() {
	setlocale(LC_ALL, "ru-RU");

	char s[100], s2[100] = "";
	int l;
	printf("Введите текст: ");
	scanf("%s", &s);
	l = strlen(s);
	for (int i = 0; i < l; i++) {
		s2[i] = s[l-i-1];
	}
	printf("\nПеревёрнутая строка: %s\n", s2);
}