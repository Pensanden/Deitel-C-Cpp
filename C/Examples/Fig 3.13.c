#include <stdio.h>

int fig_3_13(void) {
	int c;
	c = 5; 
	printf("%d\n", c);
	printf("%d\n", c++);
	printf("%d\n", c);

	c = 5;

	printf("%d\n", c);
	printf("%d\n", ++c);
	printf("%d\n", c);
	return 0;

}