#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

int ex2_20() {
	float radius;
	printf("Please Enter The Radius of Your Circle:\n");
	scanf_s("%f", &radius);
	printf("Diameter: %f\n", radius * 2);
	printf("Circumference: %f\n",2*radius*PI);
	printf("Area: %f\n", PI*pow(radius,2));
	return 0;
}