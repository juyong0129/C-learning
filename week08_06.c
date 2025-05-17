#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, sum = 0;

	printf("n을 입력하세요 >>> ");
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++) {
		sum += i;
	}

	printf("답: %d", sum);
	return 0;
}