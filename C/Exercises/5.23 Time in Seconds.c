#include <stdio.h>


int twelfthstruck(int hour, int min, int sec);

int timeinsec (void) {
	int hour = 0, min = 0, sec = 0;
	printf("Enter Hour, Minute and second in that order: ");
	scanf_s("%d", &hour);
	scanf_s("%d", &min);
	scanf_s("%d", &sec);
	printf("Seconds Till Midnight: %d",twelfthstruck(hour, min, sec));
	return 0;
}

	int twelfthstruck(int hour, int min, int sec){
		int total = (hour * 3600) + (min * 60) + sec;
		return (12 * 3600) - total;
		
	}