#include <stdio.h>

int integerPower(int base, int exp);

int intpow(void) {
	
	int x, y;
	
		printf("Enter the base number: ");
		scanf_s("%d", &x);
		printf("Enter the Exponent: ");
		scanf_s("%d", &y);
		printf("%d\n", integerPower(x, y));
	
}

int integerPower(int base, int exp) {
	int tally = 1;
	for (int i = exp; i > 0; i--) {
		tally *= base;
	}
	return tally;

}