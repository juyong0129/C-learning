#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i, j, isPrime = 1;

	for (i = 100; i < 1000; i++) {
		for (j = 2; j < i; j++) {
			if (i % j == 0) {
				isPrime = 0;
				break;
			}
		}
		if (isPrime) {
			printf("%d\n", i);
		}
		isPrime = 1;
	}
	return 0;
}