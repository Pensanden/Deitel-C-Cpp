#include <stdio.h>


int salescom(void) {
	int i;
	int grossSale = 0;
	int salaries[9] = {0};
	int range1 = 200, range2 = 299;
	printf("Enter the salary paid (-1 to end):");
	while (1) {
		scanf_s("%d", &grossSale);
		if (grossSale == -1)
			break;
		if (grossSale <= 299 && grossSale >= 200)
			salaries[0]++;
		else if (grossSale <= 399 && grossSale >= 300)
			salaries[1]++;
		else if (grossSale <= 499 && grossSale >= 400)
			salaries[2]++;
		else if (grossSale <= 599 && grossSale >= 500)
			salaries[3]++;
		else if (grossSale <= 699 && grossSale >= 600)
			salaries[4]++;
		else if (grossSale <= 799 && grossSale >= 700)
			salaries[5]++;
		else if (grossSale <= 899 && grossSale >= 800)
			salaries[6]++;
		else if (grossSale <= 999 && grossSale >= 900)
			salaries[7]++;
		else if (grossSale <= 1000)
			salaries[8]++;
		
	}

	for ( i = 0; i < 9; i++)
	{
		if (range2 == 1099)
			printf("Number of salaries paid for %d and above is:   %d\n", range1, salaries[i]);
		else {
			printf("Number of salaries paid for %d to %d is:	 %d\n", range1, range2, salaries[i]);
			range1 += 100;
			range2 += 100;
		}
		

	}
}