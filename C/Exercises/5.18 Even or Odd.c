#include <stdio.h>

void evenorodd(int num);

int evenodd(void) {
	int input = 0;
	do {
		printf("Enter a # for evaluation (-1 to end): ");
		scanf_s("%d", &input);
		evenorodd(input);
	} while (input != -1);
	return 0;
}

void evenorodd(int num) {
	if (num % 2 == 0)
		printf("Number is EVEN\n");
	else
		printf("Number is ODD\n");
}