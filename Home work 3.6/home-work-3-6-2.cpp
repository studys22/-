// https://github.com/studys22/Synergy-Programming-technology

#include <stdio.h>

int main() {
	int a;
	for(scanf_s("%i", &a); a != 7; scanf_s("%i", &a)) {
		printf("%i %c 7\n",  a, a < 7  ? '<' : '>');
		printf("%i %s 10\n", a, a < 10 ? "<" : (a > 10 ? ">" : "=="));
		printf("%i %% 2 %c= 0\n",   a, a % 2 ? '!' : '=');
		printf("%i %% 3 %c= 0\n\n", a, a % 3 ? '!' : '=');
	}
}
