// https://github.com/studys22/Synergy-Programming-technology

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* replaceFirstLastChar(char *s, char c) {
    int l = strlen(s);
    char* res = (char*)malloc(100);
    strcpy(res, s);
    if (l > 0) {
        res[0] = c;
        res[l-1] = c;
    }   
    return res;
}

int main() {
	setlocale(LC_ALL, "ru-RU");

	char s[100], c;
    printf("Введите строку: ");
    scanf("%s", &s);
    printf("Введите символ: ");
    c = getchar();
    c = getchar();

    printf("\nИзмененная строка:\n%s\n", replaceFirstLastChar(s, c));
}
