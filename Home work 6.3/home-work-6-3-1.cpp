// https://github.com/studys22/Synergy-Programming-technology

#include <locale.h>
#include <stdio.h>
#include <string.h>

int main() {
	setlocale(LC_ALL, "ru-RU");

	char s[100];
	printf("Введите текст: ");
	scanf("%s", &s);

	if (strlen(s) > 1) {
		printf("\n2-й символ: %c\n", s[1]);
	} else {
		printf("\nВ введённой строке меньше 2-х символов\n");	
	}
}