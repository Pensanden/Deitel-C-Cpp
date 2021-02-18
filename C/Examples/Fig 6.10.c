#include <stdio.h>

int Fig6_10(void) {
	char string1[20];
	char string2[] = "String Literal";
	int i;

	printf("Enter a String: ");
	scanf_s("%s", string1);

	printf("string1 is: %s\nstring2 is: %s\n"
		   "string1 with spaces between them is: \n",
			string1, string2);

	for (i = 0; string1[i] != '\0'; i++) {
		printf("%c ", string1[i]);
	}
	printf("\n");
	return 0;
}