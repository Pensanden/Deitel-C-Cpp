#include <stdio.h>

int ex2_18() {
	int x, y;
	printf("Enter 2 Integers for comparison:\n");
	scanf_s("%d%d",&x,&y);
	if (x == y)
		printf("These Numbers are equal");
	if (x > y)
		printf("%d is larger than %d", x, y);
	if (x < y)
		printf("%d is larger than %d", y, x);

}