#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i, j;

	for (i = 1; i < 7; i++) {
		printf("%d학년", i);

		for (j = 1; j < 8; j++) {
			printf("%3d반", j);
		}
		printf("\n\n");
	}

	return 0;
}