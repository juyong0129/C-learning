#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char ch1, ch2;
	printf("소문자를 입력하세요 : ");
	scanf("%c", &ch1);
	printf("대문자를 입력하세요 : ");
	scanf(" %c", &ch2);
	printf("%c의 대문자는 %c\n", ch1, ch1 - 32);
	printf("%c의 소문자는 %c\n", ch2, ch2 + 32);

	return 0;
}