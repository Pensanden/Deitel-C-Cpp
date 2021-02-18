#include <stdio.h>

int loopprinter(void) {
	int num;
	printf("Enter the end number for counting:");
	scanf_s("%d", &num);
	for (int i = 1; i <= num; i++) {
		printf("%d   ", i);
	}
}