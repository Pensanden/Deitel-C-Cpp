#include <stdio.h>

int seqsum(void) {
	int i = 0;
	int num = 0;
	int total = 0;
	printf("How long is your sequence? ");
	scanf_s("%d", &i);
	if (i <= 0) {
		printf("Invalid Input!");
		return 0;
	}
	else
		for (i = i; i != 0; i--) {
			printf("Enter a number: ");
			scanf_s("%d", &num);
			total += num;

		}
	printf("Total Sum is: %d", total);
}