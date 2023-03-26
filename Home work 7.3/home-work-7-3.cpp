// https://github.com/studys22/Synergy-Programming-technology

#include <locale.h>
#include <stdio.h>

bool isSquare(int a) {
    int s = 0, k = 1;
    while (s < a) {
        s+=k;
        k+=2;
    }
    return s == a;
}

void isSquare(int a, bool *res) {
    *res = isSquare(a);
}

void isSquare(int a, bool &res) {
    res = isSquare(a);
}

void printResult(int a, bool b) {
    printf("%i - %sявляется квадратом натурального чила\n", a, b ? "" : "не ");
}

int main() {
	setlocale(LC_ALL, "ru-RU");

	int a, b, c;
    bool res;
    printf("Введите 3 числа: ");
    scanf("%i %i %i", &a, &b, &c);
    res = isSquare(a);
    printResult(a, res);
    isSquare(b, &res);
    printResult(b, res);
    isSquare(c, res);
    printResult(c, res);
}
