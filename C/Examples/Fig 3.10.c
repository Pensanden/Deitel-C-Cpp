#include <stdio.h>

int fig_310(void) {
	int passes = 0;
	int failure = 0;
	int students = 1;
	int current = 0;
	while (students <= 10) {
		printf(" Enter the next exam result:");
		scanf_s("%d", &current);
		if (current == 1) {
			passes++;
		}
		else {
			failure++;
		}
		students++;}
	printf("Number of Passes is:%d\n", passes);
	printf("Number of Failures is:%d\n", failure);
	if (passes > 8) {
		printf("Bonus to instructor");
		return 0;

	}

				

}