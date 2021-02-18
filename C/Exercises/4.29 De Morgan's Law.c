#include<stdio.h>
int Demorgan_s_law(void) {
	int x = 1, y = 2, a = 3, b = 4, g = 5, i = 6, j = 7;

	if ((!(x < 5) && !(y >= 7)) == !((x < 5) || (y >= 7))) {
		printf("Agustus de Morgan\n");
	}
	if ((!(a == b) || !(g != 5)) == !((a == b) && (g != 5)))
	{
		printf("was a good boy\n");

	}
	if (!((x <= 8) && (y > 4)) == !(x <= 8) || !(y > 4))
	{
		printf("and a great mathmatican\n");

	}
	if ((!(i > 4) && !(j <= 6)) == !((i > 4) || (j <= 6))) {
		printf("and his law is super awesome!!!\n");
	}
}