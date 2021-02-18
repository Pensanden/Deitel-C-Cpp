#include <stdio.h>
#include <math.h>
float roundTheNumber(float x);

int rounder1(void) {
	float a, b, c, d, e;
	printf("Enter 5 floating point Numbers to be rounded: ");
	scanf_s("%f",&a);
	scanf_s("%f",&b);
	scanf_s("%f",&c);
	scanf_s("%f",&d);
	scanf_s("%f",&e);
	roundTheNumber(a);
	roundTheNumber(b);
	roundTheNumber(c);
	roundTheNumber(d);
	roundTheNumber(e);

}


float roundTheNumber(float x) {
	float y;
	y = floor(x + 0.5);
	printf("%.2f was rounded to : %.2f\n", x, y);

}

