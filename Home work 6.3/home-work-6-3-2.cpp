// https://github.com/studys22/Synergy-Programming-technology

#include <locale.h>
#include <stdio.h>
#include <string.h>

int main() {
	setlocale(LC_ALL, "ru-RU");

	char s[100], t;
	int i1, i2, l;
	printf("Введите текст: ");
	scanf("%s", &s);
	l = strlen(s);
	printf("\nПоследний элемент введённой строки: %c\n", s[l-1]);
	printf("\nВведите индексы элементов, которые необходимо поменять местами (от 0 по %i): ", l-1);
	scanf("%i %i",  &i1, &i2);
	while (i1 < 0 || i1 >= l || i2 < 0 || i2 >= l) {
		printf("Введённые индексы находятся за пределами строки. Повторите ввод: ");
		scanf("%i %i",  &i1, &i2);
	}
	t = s[i1];
	s[i1] = s[i2];
	s[i2] = t;
	printf("\nИзменённая строка: %s\n", s);
}