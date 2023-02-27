// https://github.com/studys22/Synergy-Programming-technology

#include <stdio.h>

int main() {
	int s = 0, s_etalon = (5 + 15) * (15 - 5 + 1) / 2;
	for(int i = 5; i <= 15; i++) {
		s += i;
	}
	printf("Сумма посчитанная в цикле: %i\n", s);
	printf("Сумма посчитанная через формулу арифметической прогрессии: %i\n", s_etalon);
}
