#include <stdio.h>

int fig4_9(void) {
	int counter = 1;
	do {
		printf("%d\t", counter);
	} while (++counter <= 10);

	return 0;
}