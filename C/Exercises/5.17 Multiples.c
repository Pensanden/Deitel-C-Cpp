#include <stdio.h>

int multiples(int x,int y);


int multipl(void) {

	int x =0 , y = 0;
	printf("Enter 2 numbers for evaluation: ");
	scanf_s("%d", &x);
	scanf_s("%d", &y);
	if (multiples(x, y))
		printf("%d is a Multiple of %d", y, x);
	else
		printf("%d is not a Multiple of %d", y, x);
}

int multiples(int x, int y) {
	if (y % x == 0 && x < y)
		return 1;
	else
		return 0;
}
