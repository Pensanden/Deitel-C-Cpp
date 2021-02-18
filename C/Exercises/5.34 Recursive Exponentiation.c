#include <stdio.h>
int power(int base, int exponent);

int pwrrec(void) {
	int x = 0, y= 0;
	printf("Enter 2 numbers the first one is the base and second one is the Exponent: ");
	scanf_s("%d", &x);
	scanf_s("%d", &y);
	printf("%d to the power of %d is : %d", x, y, power(x, y));
	return 0;

}

int power(int x, int y) {
	//Base Case
	if (y == 0)
		return 1 ;
	else
		return x * power(x , y - 1);
}
