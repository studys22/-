// https://github.com/studys22/Synergy-Programming-technology

#include <locale.h>
#include <stdio.h>

int summa(int a1, int an, int d) {
	return ((a1 + an) * (an - a1) / d + a1 + an) / 2;
}

int main() {
	setlocale(LC_ALL, "ru-RU");

	int a1 = 1, an = 100, d = 1;
	int s = 0, s_etalon = summa(a1, an, d);
	for (int i = a1; i <= an; i += d) {
		s += i;
	}
	printf("Сумма посчитанная в цикле: %i\n", s);
	printf("Сумма посчитанная через формулу арифметической прогрессии: %i\n", s_etalon);
}
