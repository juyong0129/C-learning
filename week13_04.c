#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main() {
	int i, j, lotto[6];
	srand(time(NULL));

	for (i = 0; i < 6; i++) {
		lotto[i] = rand() % 45 + 1;

		for (j = 0; j < i; j++) {
			if (lotto[j] == lotto[i]) {
				i--;
				break;
			}
		}
	}

	for (i = 0; i < 6; i++) {
		printf("%d ", lotto[i]);
	}

	return 0;
}