#include <stdio.h>

int EaRo(void)
{
	int num1, num2;
	printf("Enter two integers and i will tell you \n the relationship they satisfy :");
		scanf_s("%d%d", &num1, &num2);
		if (num1 == num2) {
			printf("%d is equal to %d\n", num1, num2);
		}
		if (num1 != num2) {
			printf("%d is not equal to %d\n", num1, num2);
		}
		if (num1 > num2) {
			printf("%d is greater than %d\n", num1, num2);
		}
		if (num1 <= num2) {
			printf("%d is less than or equal to %d\n", num1, num2);
		}
		return 0;
}