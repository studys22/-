// https://github.com/studys22/Synergy-Programming-technology

#include <locale.h>
#include <limits.h>
#include <stdio.h>

int minOfArray(int a[], int n) {
    int res = INT_MAX;
    for(int i = 0; i < n; i++) {
        if (res > a[i]) {
            res = a[i];
        }
    }
    return res;
}

int maxOfArray(int a[], int n) {
    int res = INT_MIN;
    for(int i = 0; i < n; i++) {
        if (res < a[i]) {
            res = a[i];
        }
    }
    return res;
}

int sumOfArray(int a[], int n) {
    int res = 0;
    for(int i = 0; i < n; i++) {
        res += a[i];
    }
    return res;
}

float avgOfArray(int a[], int n) {
    return (float) sumOfArray(a, n) / (float) n;
}

int main() {
	setlocale(LC_ALL, "ru-RU");

	int n, a[100];
	printf("Количество элементов: ");
	scanf("%i", &n);
	for (int i = 0; i < n; i++) {
		scanf("%i", &a[i]);
    }

	printf("Минимальное: %i\n", minOfArray(a, n));
	printf("Максимальное: %i\n", maxOfArray(a, n));
	printf("Сумма: %i\n", sumOfArray(a, n));
	printf("Среднее: %f\n", avgOfArray(a, n));
}
