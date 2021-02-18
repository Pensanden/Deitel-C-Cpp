#include <stdio.h>
#include <math.h>

int pythtriple(void) {
	int side1 = 0, side2 = 0, hyp = 0;
	for (side1 = 1; side1 <= 500; side1++) {
		for (side2 = 1; side2 <= 500; side2++) {
			for (hyp = 1; hyp <= 500; hyp++) {
				if ((side1 *side1) + (side2 * side2) == (hyp * hyp)) {
					printf("%d & %d & %d\n", side1, side2, hyp);
				}
			}
		}
	}

}