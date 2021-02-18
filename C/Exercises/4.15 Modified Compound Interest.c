#include <stdio.h>
#include <math.h>

int ModCI(void) {
	double amount, principal = 1000.0, rate = 0.05;
	int year;

	printf("%4s%21s\t%s\n", "Year", "Amount of Deposit","Rate");
	do {
		for (year = 1; year <= 10; year++)
		{
			amount = principal * pow(1.0 + rate, year);
			printf("%4d%21.2f\tat %.2f %s\n", year, amount,rate,"%");
			
		}
		if (rate == 0.05) {
			rate = 4.0;
		}
		rate += 1.0;
		printf("\n----------------------------\n");
	} while (rate <= 10.0);
	

	return 0;
	
}