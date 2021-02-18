#include <stdio.h>

//void trytoModifyArray(const int b[]);

int fig6_14(void) {
	int a[] = { 10,20,30 };
	//trytoModifyArray(a);
	printf("%d %d %d\n", a[0], a[1], a[2]);
	return 0;
}

/*void trytoModifyArray(const int b[]) {
	b[0] /= 2;
	b[1] /= 2;
	b[2] /= 2;


}*/
