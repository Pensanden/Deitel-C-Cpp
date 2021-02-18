/*Write a Program that takes 2 ints and calculates the sum product difference quotient and remainder then 
prints the results */
#include <stdio.h>

int ex2_16()
{
	int x, y;
	int product, sum, diff, quo, remain;
	printf("Please Enter 2 Integer Numbers:\n");
	scanf_s("%d%d",&x,&y);
	sum = x + y;
	product = x * y;
	quo = x / y;
	remain = x % y;
	diff = x - y;
	printf("Sum: %d\n",sum);
	printf("Difference: %d\n", diff);
	printf("Quotient: %d\n", quo);
	printf("Remainder: %d\n", remain);
	printf("Product: %d\n", product);
	return 0;
	   	 

}