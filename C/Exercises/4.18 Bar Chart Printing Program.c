#include <stdio.h>

int barcharts(void) {
	int num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0 ;
	printf("Enter 5 Numbers:");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	scanf_s("%d", &num3);
	scanf_s("%d", &num4);
	scanf_s("%d", &num5);
	printf("\n------------------\n");
		for (int i = num1; i > 0; i--){
			printf("*");
				
		}
		printf("\n");
		for (int i = num2; i > 0; i--) {
			printf("*");

		}
		printf("\n");
		for (int i = num3; i > 0; i--) {
			printf("*");

		}
		printf("\n");
		for (int i = num4; i > 0; i--) {
			printf("*");

		}
		printf("\n");
		for (int i = num5; i > 0; i--) {
			printf("*");

		}
		
		printf("\n------------------");
		return 0;
}