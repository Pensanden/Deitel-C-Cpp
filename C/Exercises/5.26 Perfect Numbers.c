#include <stdio.h>

int perfect(int x);


int perfectmain(void) {
	for (int i = 0; i <= 10000; i++)
		perfect(i);
}


int perfect(int x) {
	int total = 0;
	for (int i = x - 1; i > 0; i--) {
		if (x % i == 0)
			total += i;
	}
	if (total == x && total !=0) {
		printf("%d is Perfect\n", x);
		return 1;
	}
	else
		return 0;
}
