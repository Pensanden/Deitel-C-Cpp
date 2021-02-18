#include <stdio.h>

float minf(float a, float b, float c);

int minfmain(void) {
	float a, b, c;
	printf("Enter 3 floats for comparison: ");
	scanf_s("%f", &a);
	scanf_s("%f",&b);
	scanf_s("%f", &c);
	printf("%.2f",minf(a, b, c));

}

float minf(float a, float b, float c) {
	if (a < b && a < c) {
		return a;
	}
	else 
		if (b < a && b < c) {
			return b;
		}
	
	else
			return c;
}