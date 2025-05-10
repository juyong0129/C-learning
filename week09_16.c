#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i = 1, n, m;
	printf("n, m을 입력하세요 >>> ");
	scanf("%d %d", &n, &m);

	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			printf("%d", j);

			if (j == n) {
				printf("\n");
			}
		}
	}

	return 0;
}