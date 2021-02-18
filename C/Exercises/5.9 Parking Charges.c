#include <stdio.h>
#include <math.h>

float calculateCharges(float hours);



int parkingcharges(void) {
	float car1h, car2h, car3h; //Hours of each car
	float car1charge, car2charge, car3charge; //Charge of each car

	printf("Enter Car 1's Hours of occupation: ");
	scanf_s("%f", &car1h);
	printf("Enter Car 2's Hours of occupation: ");
	scanf_s("%f", &car2h);
	printf("Enter Car 3's Hours of occupation: ");
	scanf_s("%f", &car3h);

	car1charge = calculateCharges(car1h);
	car2charge = calculateCharges(car2h);
	car3charge = calculateCharges(car3h);

	printf("Car\tHours\tCharge\n");
	printf("1\t%.2f\t%.2f\n", car1h, car1charge);
	printf("2\t%.2f\t%.2f\n", car2h, car2charge);
	printf("3\t%.2f\t%.2f\n", car3h, car3charge);
	printf("TOTAL\t%.2f\t%.2f\n", car1h+ car2h+ car3h, car1charge+ car2charge+ car3charge);

}

float calculateCharges(float hours) {
	float total = 2.0;
	if (hours <= 2) {
		return total;
	}
	
	if (hours == 24.0) {
		return 10.00;
	}
	else {
		total += floor(hours-3) * 0.50;
		return total;
	}
		

}