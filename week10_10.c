#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, m, i = 1, j = 1;
	scanf("%d %d", &n, &m);

	while (i <= m) {
		while (j <= n) {
			printf("%d", j);
			j++;
		}

		if (j == n + 1) {
			printf("\n");
			j = 1;
		}
		i++;
	}

	return 0;
}