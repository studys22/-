// https://github.com/studys22/Synergy-Programming-technology

#include <stdio.h>

main() {
	int i1, i2;
	printf("Первое число = ");
	scanf("%i", &i1);
	printf("Второе число = ");
	scanf("%i", &i2);
	
	if (i1 > i2) 
		printf("Больше");
	else if (i1 < i2)
		printf("Меньше");
	else
		printf("Равны");
}