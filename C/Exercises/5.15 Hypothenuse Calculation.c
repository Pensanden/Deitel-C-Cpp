#include <stdio.h>
#include <math.h>
double hypothenuse(double side1, double side2);

int hypothenuseTheorem(void) {
	double side1, side2;
	printf("Enter side 1:");
	scanf_s("%lf", &side1);
	printf("Enter side 2:");
	scanf_s("%lf", &side2);
	printf("Hypethonuse = %f", hypothenuse(side1, side2));
}

double hypothenuse(double side1, double side2) {
	return sqrt((side1 * side1) + (side2 * side2));
}