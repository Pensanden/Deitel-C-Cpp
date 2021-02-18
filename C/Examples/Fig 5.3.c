#include <stdio.h>

int square(int y);

int fig5_3(void) {
	int x;

	for (x = 1; x <= 10; x++) {
		printf("%d ", square(x));
		
	}
	printf("\n");
	return 0;
}

int square(int y) {
	return y * y;
}