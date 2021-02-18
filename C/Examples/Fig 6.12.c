#include <stdio.h>

int fig6_12(void) {
	char array[5];

	printf("\tArray = %p\n\t&array[0] = %p\n\t&array = %p\n", array, &array[0], &array);
	return 0;
	}