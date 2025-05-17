#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	printf("정수를 입력하세요: ");
	scanf("%d", &n);

	switch (n)
	{
	case 1:case 3:case 5:case 7:case 9:
		printf("홀수");
		break;
	case 2:case 4:case 6:case 8:case 10:
		printf("짝수");
		break;
	default:
		printf("자연수");
	}
}