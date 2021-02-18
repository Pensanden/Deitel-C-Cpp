#include <stdio.h>
//FIRST ATEMPT BEARLY UNDERESTAND IT REVIST LATER
int towerOfHanoi(int disks,int initalpeg,int temppeg,int finalpeg);

int toh1(void) {
	int disks = 0;
	printf("Enter the number of disks: ");
	scanf_s("%d", &disks);
	towerOfHanoi(disks,1,2,3);
	return 0;
}

int towerOfHanoi(int disks, int initalpeg, int temppeg, int finalpeg) {
	

	if (1 == disks) {
		printf("1 --> %d\n", finalpeg);
		return 1;
		
	}
	else {
		towerOfHanoi(disks - 1, initalpeg, finalpeg, temppeg);
		printf("%d --> %d\n", initalpeg, finalpeg);
		towerOfHanoi(disks - 1, temppeg, initalpeg, finalpeg);
	}

}
