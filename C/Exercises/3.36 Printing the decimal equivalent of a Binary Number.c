#include <stdio.h>
#define true 1

int bintodec() {
	while (true) {
		int bin = 0, dec = 0;
		int exp = 1, div = 10;
		printf("Enter a binary number(-1 to end): ");
		scanf_s("%d", &bin);
		if (bin == -1)
			break;
		while (true) {
			dec += (bin % div) * exp;
			exp *= 2;
			bin /= div;
			if (bin / div == 0 && bin % div == 0)
				break;
		}
		printf("The Decimal equivalent is: %d\n", dec);
	}
}