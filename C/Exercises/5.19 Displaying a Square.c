#include <stdio.h>

void printSquare1(int side);

int prntsq1(void) {
	int side = 4;
	printSquare1(side);

}

void printSquare1(int side) {
	for ( int i = side; i >0; i--)
	{
		for (int i = side; i >= 0; i--) {
			printf("*");
		}
		printf("\n");
	}
	
}
