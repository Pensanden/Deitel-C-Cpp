#include <stdio.h>

void staticArrayinit(void);
void automaticArrayInit(void);

int fig6_11(void) {
	printf("first call to each funcition:\n");
	staticArrayinit();
	automaticArrayInit();

	printf("\nsecond call to each funcition:\n");
	staticArrayinit();
	automaticArrayInit();
	return 0;
	
}

void staticArrayinit(void) {
	static int array1[3];
	int i;
	printf("\n\nValues on entering staticArrayInit:\n");
	for (i = 0; i <= 2; i++) {
		printf("array1[%d] = %d\n", i, array1[i]);
	}
	printf("\n\nValues on exiting staticArrayInit:\n");
	for (i = 0; i <= 2; i++) {
		printf("array1[%d] = %d\n", i, array1[i] += 5);
	}

}

void automaticArrayInit(void) {
	int array2[3] = { 1,2,3 };
	int i;
	printf("\n\nValues on entering automaticArrayInit:\n");
	for (i = 0; i <= 2; i++) {
		printf("array2[%d] = %d\n", i, array2[i]);
	}
	printf("\n\nValues on exiting automaticArrayInit:\n");
	for (i = 0; i <= 2; i++) {
		printf("array2[%d] = %d\n", i, array2[i] += 5);
	}

}