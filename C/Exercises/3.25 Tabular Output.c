#include <stdio.h>

int tableout(void) {
	printf("N\tN*10\tn*100\tN*1000\n\n");
	int i = 1;
	while (i <= 10) {
		printf("%d\t%d\t%d\t%d\n",i,i*10,i*100,i*1000);
		i++;
	}
	return 0;
}