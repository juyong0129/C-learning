#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int n) {
	return n * (n + 1) / 2;
}

int main() {
	int result, n;
	printf("숫자 하나를 입력해 주세요 : ");
	scanf("%d", &n);
	result = sum(n);
	printf("%d", result);
}