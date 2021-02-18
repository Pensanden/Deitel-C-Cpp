#include <stdio.h>
#define SIZE 99


void mean(const int answer[]);
void median(int answer[]);
void mode(int freq[], const int answer[]);
void bubbleSort(int a[]);
void printArray(const int a[]);


int Fig6_16(void) {
	int frequency[10] = { 0 };

	int response[SIZE] = {
		6,7,8,9,8,7,8,9,8,9,
		7,8,9,5,9,8,7,8,7,8,
		6,7,8,9,3,9,8,7,8,7,
		7,8,9,8,9,8,9,7,8,9,
		6,7,8,7,8,7,9,8,9,2,
		7,8,9,8,9,8,9,7,5,3,
		5,6,7,2,5,3,9,4,6,4,
		7,8,9,6,8,7,8,9,7,8,
		7,4,4,2,5,3,8,7,5,6,
		4,5,6,1,6,5,7,8,7 };
	mean(response);
	median(response);
	mode(frequency, response);
	return 0;

	}
	
void mean(const int answer[]) {
	int j;
	int total = 0;
	printf("%s\n%s\n%s\n", "********", "  Mean", "********");

	for (j = 0; j < SIZE; j++) {
		total += answer[j];
	}
	printf("The mean is the average value of the data\n"
		"items. the mean is equal to the total of\n"
		"all the data items (%d) divided by number\n"
		"this run is : %d / %d = %.4f\n\n", SIZE, total, SIZE, (double)total / 99);
}

void median(int answer[]){
	printf("%s\n%s\n%s\n%s\n", "********", "  Median", "********","The unsorted array of responses is");
	printArray(answer);
	bubbleSort(answer);
	printf("\n\nThe sorted array is");
	printArray(answer);

	printf("\n\nThe median is element %d of\n the sorted %d element array.\n"
		"For this run median is %d\n\n", SIZE / 2, SIZE, answer[SIZE / 2]);

	}

void mode(int freq[], const int answer[]) {
	int rating;
	int j;
	int h;
	int largest = 0;
	int modeValue = 0;
	printf("%s\n%s\n%s\n", "********", "  Mode", "********");
	for (rating = 1; rating <= 9; rating++) {
		freq[rating] = 0;

	}
	for (j = 0; j < SIZE; j++) {
		++freq[answer[j]];
	}

	printf("%s%11s%19s\n\n%54s\n%54s\n\n", "Response", "Frequency", "Histogram", "1\t1\t2\t2", "5\t0\t5\t0\t5");

	for (rating = 1; rating <= 9; rating++) {
		printf("%8d%11d\t\t",rating, freq[rating]);
		if (freq[rating] > largest) {
			largest = freq[rating];
			modeValue = rating;
		}
		for (h = 1; h <= freq[rating]; h++) {
			printf("*");
		}
		printf("\n");

	}
	printf("The mode is the most frequent value.\n"
		"For This run the mode is %d which occurred %d times.\n", modeValue, largest);


}

void bubbleSort(int a[]) {
	int pass;
	int i;
	int hold;

	
	for (pass = 1; pass < SIZE; pass++) {

		for (i = 0; i < SIZE - 1; i++) {
			if (a[i] > a[i + 1]) {
				hold = a[i];
				a[i] = a[i + 1];
				a[i + 1] = hold;
			}
		}
	}
	
}

void printArray(const int a[]) {
	int i;

	for (i = 0; i < SIZE; i++) {
		if (i % 20 == 0) {
			printf("\n");
		}

		printf("%2d", a[i]);
	}

}
