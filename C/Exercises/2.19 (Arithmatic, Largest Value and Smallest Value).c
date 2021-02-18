#include <stdio.h>


int ex2_19() {
	int x, y, z, avg, product, small, large;
	register int sum;
	printf("Please Enter 3 Integer Values:\n");
	scanf_s("%d%d%d", &x, &y, &z);
	sum = x + y + z;
	avg = sum / 3;
	product = x * y * z;
	if (x < y && x < z)
		small = x;
	if (y < x && y < z)
		small = y;
	if (z < x && z < y)
		small = z;
	if (x > y && x > z)
		large = x;
	if (y > x && y > z)
		large = y;
	if (z > x && z > y)
		large = z;
	printf("Sum is : %d\n", sum);
	printf("Average is : %d\n", avg);
	printf("Product is : %d\n", product);
	printf("Smallest is : %d\n", small);
	printf("Largest is : %d\n", large);

}