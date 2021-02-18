#include <stdio.h>
#define SIZE 10

int BubbleSortimprovement() {
	int a[SIZE] = { 2,4,6,8,10,12,49,68,95,67 };
	int pass;
	int i;
	int hold;
	int counter;

	printf("Data items in original order\n");

	for (i = 0; i < SIZE; i++) {
		printf("%4d", a[i]);
	}
	counter = 0;
	for (pass = 1; pass < SIZE; pass++) {
		
		for (i = 0; i < SIZE - 1; i++) {
			if (a[i] > a[i + 1]) {
				hold = a[i];
				a[i] = a[i + 1];
				a[i + 1] = hold;
				counter++;
			}
			
		}
		if (counter == 0)
			break;
		
		
	}
	printf("\nData items in ascending order\n");

	for (i = 0; i < SIZE; i++) {
		printf("%4d", a[i]);
	}
	printf("\n");
	return 0;
}