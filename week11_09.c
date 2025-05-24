#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i, j, sum = 0;

	for (i = 1; i <= 10; i++) {
		for (j = 1; j <= i; j++) {
			sum += j;
		}
		if (j >= i) {
			j = 1;
		}
	}
	printf("%d", sum);

	return 0;
}