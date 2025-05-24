#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i, j = 5;

	for (i = 5; i >= 1;) {
		i--;
		for (; j >= 1; j--) {
			printf("%d ", j);
		}
		if (j <= 1) {
			printf("\n");
			j = i;
		}
	}

	return 0;
}