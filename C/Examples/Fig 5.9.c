#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int fig5_9(void) {
	int i;
	unsigned seed;
	//printf("Enter Seed: ");
	//scanf_s("%u", &seed);
	srand(time(NULL));
	for (i = 1; i <= 10; i++) {
		printf("%10d", 1 + (rand() % 6));
		if (i % 5 == 0) {
			printf("\n");
		}
		
	}
	return 0;
}