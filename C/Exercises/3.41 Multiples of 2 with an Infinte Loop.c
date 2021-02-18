#include <stdio.h>

int infloop(void)
{
	int num = 1;
	while (num != -1)
	{
		printf("%d", num);
		num *= 2;

	}
}