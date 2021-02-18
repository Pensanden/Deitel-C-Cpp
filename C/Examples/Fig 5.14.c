#include <stdio.h>

long factorial(long number);

int fig5_14(void) {
	int i;
	for (i = 0; i <= 10; i++) {
		printf("%2d! = %ld\n",i, factorial(i));

	}
	return 0;

}

long factorial(long number) {

	//---------------Base case
	if (number <= 1) {
		return 1;
	//-------------End of base case
	}
	else
		return (number * factorial(number - 1));

}