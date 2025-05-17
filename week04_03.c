#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int c, c500, c100, c50, c10;
	printf("금액를 입력하세요: ");
	scanf("%d", &c);

	c500 = c / 500;
	c100 = c % 500 / 100;
	c50 = c % 500 % 100 / 50;
	c10 = c % 500 % 100 % 50 / 10;

	printf("500원: %d개,  100원: %d개, 50원: %d개, 10원: %d개 입니다.", c500, c100, c50, c10);

	return 0;
}