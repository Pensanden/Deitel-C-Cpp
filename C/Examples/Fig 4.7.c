#include <stdio.h>

int switchtut(void) {
	int grade = 0;
	int aCount = 0;
	int bCount = 0;
	int cCount = 0;
	int dCount = 0;
	int eCount = 0;
	int fCount = 0;
	printf("Enter letter Grade\n");
	printf("Enter EOF Charachter to escape. \n");

	while ((grade = getchar()) != EOF) {
		switch (grade)
		{
		case 'A':
		case 'a':
			aCount++;
			break;

		case 'B':
		case 'b':
			bCount++;
			break;

		case 'C':
		case 'c':
			cCount++;
			break;

		case 'D':
		case 'd':
			dCount++;
			break;

		case 'E':
		case 'e':
			eCount++;
			break;

		case 'F':
		case 'f':
			fCount++;
			break;

		case 'n' :
		case '\t':
		case '\n':
			break;

		default:
			printf("Thats not a grade Enter a new grade:");

		}//end switch

		/*output*/

	}

	printf("\nTotal for each letter grade are:\n");
	printf("A: %d\n", aCount);
	printf("B: %d\n", bCount);
	printf("C: %d\n", cCount);
	printf("D: %d\n", dCount);
	printf("E: %d\n", eCount);
	printf("F: %d\n", fCount);
	return 0;

}