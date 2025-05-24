#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i, j;

	for (i = 5; i >= 1; i--) {
		for (j = 1; j <= i; j++) {
			printf("%d ", j);
		}
		if (j >= i) {
			printf("\n");
			j = 1;
		}
	}

	return 0;
}