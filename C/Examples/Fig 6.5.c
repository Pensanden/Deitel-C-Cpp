#include <stdio.h>
#define SIZE 10

int Fig6_5(void) {
	int s[SIZE];
	int j;
	for (j = 1; j < SIZE; j++) {
		s[0] = 2;//My Mod (inefficient)
		s[j] = s[j-1] + 2;

	}
	
	printf("%s%13s\n","Element","Value");

	for (j = 0; j < SIZE; j++) {
		printf("%7d%13d\n",j,s[j]);
	}
	return 0;


}
