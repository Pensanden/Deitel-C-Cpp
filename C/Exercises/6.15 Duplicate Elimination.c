#include <stdio.h>
#define SIZE 20



int _615_notdone(void) {
	int i;
	int num;
	int counter[SIZE] = { 0 };
	int j;
	
	for (i = 0; i < SIZE; i++) {
		scanf_s("%d", &num );
		counter[i] = num;
	}
	for (i = 0; i < SIZE; i++) {
		num = 0;
		for (j = 0; j < SIZE; j++) {
			if (counter[i] == counter[j])
				num++;
		}
		if (num == 0)
		printf("%d\t", counter[i]);

	}
}
