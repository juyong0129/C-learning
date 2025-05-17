#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;

	printf("정수 입력 : ");
	scanf("%d", &num);

	if (num % 2 == 0) {
		printf("%d는 짝수", num);
	}
	else {
		printf("%d는 음수", num);
	}

	return 0;
}