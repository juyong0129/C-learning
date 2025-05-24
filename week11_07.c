#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i, j = 5;

	for (i = 1; i <= 5;) {
		i++;
		for (; j <= 5; j++) {
			printf("%d ", j);
		}
		if (j >= 5) {
			printf("\n");
			j = 6 - i;
		}
	}

	return 0;
}