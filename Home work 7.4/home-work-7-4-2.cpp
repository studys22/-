// https://github.com/studys22/Synergy-Programming-technology

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* trim(char *s) {
    int len = strlen(s);
    char* res = (char*)malloc(100);
    if (len > 0) {
        int l = 0, r = len - 1;
        while (l < len && s[l] == ' ') l++;
        while (r >= 0 && s[r] == ' ') r--;
        if (r < l) r = l - 1; // если все симмволы строки - пробелы
        strncpy(res, s + l, r - l + 1);
        res[r - l + 1] = '\0';
    } else strcpy(res, s);  
    return res;
}

int main() {
	setlocale(LC_ALL, "ru-RU");

	char s[100];
    printf("Введите строку: \n");
    fgets(s, 100, stdin);
    if (s[strlen(s) - 1] = 10)
        s[strlen(s) - 1] = '\0'; // удаление последнего символа - перевод строки

    printf("\nИсходная строка:\n\"%s\"\n", s);
    printf("\nИзмененная строка:\n\"%s\"\n", trim(s));
}
