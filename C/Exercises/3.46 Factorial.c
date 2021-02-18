#include <stdio.h>

int fact(int num) {
	int fact = 1, numstart;
	/*printf("Enter a Number: ");
	scanf_s("%d", &num);*/
	//numstart = num;
	if (num < 0) {
		printf("Factorial isn't defined for Negetive Numbers.\n ");
		return 0;
	}
	else if (num == 0)
		fact = 1;
	else 
		while (num != 0) {
			fact *= num;
			num--;
		}
	//printf("Factorial for number %d is: %d\n", numstart, fact);
	return fact;
}

int euler(void) {
	double euler = 1;
	int i = 1;
		while (i <= 10) {
			euler += 1 / fact(i);
			i++;
		}
		printf("e =~: %f", euler);
}