#include <stdio.h>

int calcsale(void) {
	int item = 0, quantity;
	float total = 0;
	while (item != -1) {
		printf("Enter the item's product number (Enter -1 to end): ");
		scanf_s("%d", &item);
		if (item == -1)
			break;
		printf("Enter the sold quantity of the item: ");
		scanf_s("%d", &quantity);
		switch (item)
		{

		case 1:
			total += quantity * 2.98;
			break;
		case 2 : 
			total += quantity * 4.50;
			break;
		case 3 : 
			total += quantity * 9.98;
			break;
		case 4 : 
			total += quantity * 4.49;
			break;
		case 5 : 
			total += quantity * 6.87;
			break;
		default:
			printf("Incorect item number!!\nTry Again.");
			break;
		}
	}
	printf("Total of sold procucts: $%f", total);
}