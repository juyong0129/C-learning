#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i = 1, j = 1;

	while (i < 7) {
		printf("%d학년", i);
		i++;

		while (j < 8) {
			printf("%3d반", j);
			j++;
		}
		if (j >= 8) {
			j = 1;
		}
		printf("\n\n");
	}

	return 0;
}