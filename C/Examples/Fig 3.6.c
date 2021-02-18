#include <stdio.h>

int fig_3_6() {
	int counter, grade, total, average;
	total = 0;
	counter = 1;
	while (counter <= 10) {
		printf("Plese Enter grade %d of 10\n12", counter);
		scanf_s("%d", &grade);
		total += grade;
		counter++;

	}
	average = total / counter;
	printf("The Class Average is: %d\n", average);
	return 0;


}