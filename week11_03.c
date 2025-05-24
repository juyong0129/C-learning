#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i = 1, j = 1;

	do {
		printf("%d학년", i);
		i++;

		do {
			printf("%3d반", j);
			j++;
		} while (j < 8);

		if (j >= 8) {
			j = 1;
		}

		printf("\n\n");

	} while (i < 7);

	return 0;
}