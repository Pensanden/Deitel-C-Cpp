#include <stdio.h>

int recursivemain(void) {
	static int x = 1;
	printf("%d\n", x);
	x++;
	main();
}