// https://github.com/studys22/Synergy-Programming-technology

#include <stdio.h>

main() {
	int p1, p2;
	printf("ПИН1 = ");
	scanf("%i", &p1);
	printf("ПИН2 = ");
	scanf("%i", &p2);
	
	if (p1 == 15 && p2 == -7) 
		printf("Верно");
	else
		printf("Не верно");
}