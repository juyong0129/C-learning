#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;

	printf("n을 입력하세요 >>> ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		if (i % 3 == 0) {
			printf("%d\n", i);
		}
	}

	return 0;
}