#include <stdio.h>
#include <math.h>
#define true 1

void roundToInteger(float num);
void roundToTenths(float num);
void roundToHundreths(float num);
void roundToThousandths(float num);



int roundingnumbers2(void) {

	int  type = 0;
	float num;
	while (true) {
	printf("Enter a Number for rounding (-1 to end): ");
	scanf_s("%f", &num);
	if (num == -1)
		break;
		printf("Enter the type of rounding:\n1.To Integer\n2.To Tenths\n3.To Hundreths\n4.To Thousandsths\n");
		scanf_s("%d", &type);
		switch (type)
		{
		case 1:
			roundToInteger(num);
			break;
		case 2:
			roundToTenths(num);
			break;
		case 3:
			roundToHundreths(num);
			break;
		case 4:
			roundToThousandths(num);
			break;
		default:
			//	printf("Error Re-enter the type");
			break;
		}
		return 0;
	}
}

void roundToInteger(float num) {
	int y;
	y = floor(num + 0.5);
	printf("Rounded value to Integers: %d\n", y);
}

void roundToTenths(float num) {
	int y;
	y = floor(num * 10 + 0.5);
	printf("Rounded value to Tenths: %d\n", y);
}
void roundToHundreths(float num) {
	int y;
	y = floor(num * 100 + 0.5);
	printf("Rounded value to Hundreths: %d\n", y);
}
void roundToThousandths(float num) {
	int y;
	y = floor(num * 1000 + 0.5);
	printf("Rounded value to Thousandths: %d\n", y);
}