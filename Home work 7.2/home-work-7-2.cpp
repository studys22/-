// https://github.com/studys22/Synergy-Programming-technology

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fillAndPrintArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 100;
    }
    printf("\n\nМассив:");
    for (int i = 0; i < n; i++) {
        printf("%4i", a[i]);
    }
}

int main() {
	setlocale(LC_ALL, "ru-RU");

	int a[100], b[100], n, m;
	srand(time(NULL));
    n = rand() % 91 + 10;
    m = rand() % 91 + 10;
	fillAndPrintArray(a, n);
	fillAndPrintArray(b, m);
}
