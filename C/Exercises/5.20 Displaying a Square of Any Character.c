#include <stdio.h>

void printSquareModified(int side,char chr);

int DASOAC(void) {
	int side;
	char chr;
	printf("Enter a characher: ");
	scanf_s("%c", &chr);
	printf("Enter # of sides of the square: ");
	scanf_s("%d", &side);
	printSquareModified(side,chr);

}

void printSquareModified(int side,char chr) {
	printf("\n");
	for (int i = side; i > 0; i--)
	{
		for (int i = side; i >= 0; i--) {
			printf("%c",chr);
		}
		printf("\n");
	}

}
