#include <stdio.h>
#define SIZE 5

void modifyArray(int b[],int size);
void modifyElement(int e);


int Fig6_13(void) {
	int a[SIZE] = { 0,1,2,3,4 };
	int i;

	printf("Effects of passing entire arrays by reference: \n\nThe values of the original array are: \n");
	for (i = 0; i < SIZE; i++) {
		printf("%3d", a[i]);
	}
	printf("\n");

	modifyArray(a, SIZE);
	printf("The Values of the modified array are: \n");

	for (i = 0; i < SIZE; i++) {
		printf("%3d", a[i]);
	}
	printf("\n\nEffects of passing array element by value: \n\nValue of a[3] is %d\n",a[3]);
	modifyElement(a[3]);
	printf("The Value of a[3] is %d\n",a[3]);
	return 0;

}

void modifyArray(int b[], int size) {
	int j;
	for (j = 0; j < size; j++)
	b[j] *= 2;
}

void modifyElement(int e) {
	printf("Value in modifyElement is %d\n", e *= 2);
}