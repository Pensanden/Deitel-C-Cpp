#include <stdio.h>

int gasmilage(void) {
	//Initilization
	float current_tank = 0;
	float current_mileage = 0, total_average = 0;
	int counter = 0;

	while (current_tank != -1) {
		printf("Enter the gallons used (-1 to end): ");
		scanf_s("%f",&current_tank);
		if (current_tank == -1)
			break;
		printf("Enter the miles driven: ");
		scanf_s("%f", &current_mileage);
		total_average += current_mileage / current_tank;
		printf("Average for this tank is: %f\n\n", current_mileage / current_tank);
		counter++;
	}//End While
	if (counter != 0) {
		printf("Your total average is: %f", total_average / counter);
	}
	else
		printf_s("No data was entered");
	return 0;



}