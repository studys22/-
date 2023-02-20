// https://github.com/studys22/Synergy-Programming-technology

#include <stdio.h>

struct User {
	User(long long int _p1, long long int _p2){p1 = _p1; p2 = _p2;}
	long long int p1, p2;
};

main() {
	User u1(1, 0), u2(-1234567, 1234567), u3(9876543210987, 0);
	long long int p1, p2;	
	printf("ПИН1 = ");
	scanf("%lld", &p1);
	printf("ПИН2 = ");
	scanf("%lld", &p2);
	
	if ((p1 == u1.p1 && p2 == u1.p2) || (p1 == u2.p1 && p2 == u2.p2) || (p1 == u3.p1 && p2 == u3.p2))
		printf("Верно");
	else
		printf("Не верно");
}