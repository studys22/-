// https://github.com/studys22/Synergy-Programming-technology

#include <locale.h>
#include <stdio.h>

int main() {
	setlocale(LC_ALL, "ru-RU");

	int a[1000], n;
	printf("���������� �����: ");
	scanf_s("%i", &n);
	printf("������� �����: ");
	for (int i = 0; i < n; i++) {
		scanf_s("%i", &a[i]);
	}
	printf("�������� �����:");
	for (int i = 0; i < n; i++) {
		printf(" %i", a[i]);
	}
}
