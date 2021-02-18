#include <stdio.h>

int intrestcalculator(void) {
	float rate, principal = 0, intrest;
	int day;
	while (principal != -1) {
		printf("Enter Loan Principal (Enter -1 to end):");
		scanf_s("%f",&principal);
		if (principal == -1)
			break;
		printf("Enter intrest Rate:");
		scanf_s("%f", &rate);
		printf("Enter term of loan in days:");
		scanf_s("%d", &day);
		intrest = principal * rate * day / 365;
		printf("The intrest charge is: $%.2f\n",intrest);
	}
	return 0;
}