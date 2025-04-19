#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c, num;
	printf("세 자리수를 입력하세요: ");
	scanf("%d", &num);
	a = num / 100;
	b = num % 100 / 10;
	c = num % 10;
	printf("백의 자리는 %d 이고, 십의 자리는 %d 이고, 일의 자리는 %d 입니다.", a, b, c);

	return 0;
}
