#include <stdio.h>

int howfast(void)
{
	int i = 0;
	while (i != 30000000000) {
		i++;
		if (i  == 10000000000)
			printf("%d\n", i);
		if (i == 20000000000)
			printf("%d\n", i);
		if (i == 30000000000)
			printf("%d\n", i);
			}
	//4.79 sec
}