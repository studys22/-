// https://github.com/studys22/Synergy-Programming-technology

#include <stdio.h>

main() {
	int day;
	printf("Введите номер дня недели: ");
	scanf("%i", &day);
	
	switch(day) {
		case 1:  printf("Это понедельник"); break;
		case 2:  printf("Это вторник");     break;
		case 3:  printf("Это среда");       break;
		case 4:  printf("Это четверг");     break;
		case 5:  printf("Это пятница");     break;
		case 6:  printf("Это суббота");     break;
		case 7:  printf("Это воскресенье"); break;
		default: printf("Error");			
	}
}