#include <stdio.h>

int p_2(void) {
	int integer1, integer2, sum;
		printf("Please Enter Two Integer Numbers For Summation\n");
		scanf_s("%d", &integer1);
		scanf_s("%d", &integer2);
		sum = integer1 + integer2;
		printf("Sum is %d\n",sum);
		return 0;

}