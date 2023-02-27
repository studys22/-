// https://github.com/studys22/Synergy-Programming-technology

#include <stdio.h>

bool isLeapYear(int y) {
	if (y % 4 != 0) return false;
	if (y % 100 != 0) return true;
	return y % 1000 == 0;
}

const char* zodiacSign(int d, int m) {
	switch (m) {
		case  1: return d >= 21 ? "Водолей"  : "Козерог";
		case  2: return d >= 20 ? "Рыбы"     : "Водолей";
		case  3: return d >= 21 ? "Овен"     : "Рыбы";
		case  4: return d >= 21 ? "Телец"    : "Овен";
		case  5: return d >= 22 ? "Близнецы" : "Телец";
		case  6: return d >= 22 ? "Рак"      : "Близнецы";
		case  7: return d >= 23 ? "Лев"      : "Рак";
		case  8: return d >= 22 ? "Дева"     : "Лев";
		case  9: return d >= 24 ? "Весы"     : "Дева";
		case 10: return d >= 24 ? "Скорпион" : "Весы";
		case 11: return d >= 23 ? "Стрелец"  : "Скорпион";
		case 12: return d >= 23 ? "Козерог"  : "Стрелец";
		default: return "Error";
	}
}

const char* animalOfEasternCalendaar(int y) {
	switch (y % 12)	{
		case  0: return "обезьяны";
		case  1: return "петуха";
		case  2: return "собаки";
		case  3: return "свиньи";
		case  4: return "крысы";
		case  5: return "быка";
		case  6: return "тигра";
		case  7: return "кролика";
		case  8: return "дракона";
		case  9: return "змеи";
		case 10: return "лошади";
		case 11: return "овцы";
	}
}

main() {
	int d, m, y;
	printf("День: ");
	scanf("%i", &d);
	printf("Месяц: ");
	scanf("%i", &m);
	printf("Год: ");
	scanf("%i", &y);
	
	printf("Знак зодиака: %s. Год %s, %sвисокосный.",
		zodiacSign(d, m),
		animalOfEasternCalendaar(y),
		isLeapYear(y)? "" : "не");
}
