#include <stdio.h>

int isPrime(int num);

int mainisprime(void) {
	for (int i = 1; i <= 10000000; i++)
		isPrime(i);

}

int isPrime(int num){
	for (int i = num - 1; i > 1; i--) {
		if (num % i == 0) {
			return 0;
		}

	}
	printf("%d is Prime\n", num);
}