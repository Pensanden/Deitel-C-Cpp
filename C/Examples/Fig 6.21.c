#include <stdio.h>

void printMultiArray(const int a[][3]);

int Fig6_21(void) {
	int array1[2][3] = { {1,2,3},{4,5,6} };
	int array2[2][3] = { 1,2,3,4,5 };
	int array3[2][3] = { {1,2},{4} };

	printf("Values in array1 by row are:\n");
	printMultiArray(array1);

	printf("Values in array2 by row are:\n");
	printMultiArray(array2);

	printf("Values in array3 by row are:\n");
	printMultiArray(array3);
	return 0;

}
void printMultiArray(const int a[][3]) {
	int i, j;
	for (i = 0; i <= 1; i++) {
		for (j = 0; j <= 2; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}