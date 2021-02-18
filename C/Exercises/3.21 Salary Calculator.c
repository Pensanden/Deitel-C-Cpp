#include <stdio.h>

int salarycalc(void) {
	float hours = 0.0, rate, overtime,salary;
	while (hours != -1) {
		printf("Enter # of hours worked (-1 to end):");
		scanf_s("%f", &hours);
		if (hours == -1)
			break;
		printf("Enter hourly rate of the worker ($00.00):");
		scanf_s("%f", &rate);
		if (hours > 40) {
			overtime = hours - 40;
			salary = overtime * (rate * 1.5) + 40 * rate;
			printf("Salary is: $%.2f\n\n", salary);
		}
		else {
			salary = hours * rate;
			
			printf("Salary is: $%.2f\n\n", salary);
		}

	}


}