#include <stdio.h>

int findlargest(void) {
	int counter, number, largest = 0;
	printf("Enter you're number: ");
	for(counter = 0; counter < 10; counter++) {
		scanf_s("%d", &number);
		if (number > largest)
			largest = number;
		
	}
	printf("The largest number is %d", largest);
}