#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int c, c500, c100, c50, c10;
	printf("�ݾ׸� �Է��ϼ���: ");
	scanf("%d", &c);

	c500 = c / 500;
	c100 = c % 500 / 100;
	c50 = c % 500 % 100 / 50;
	c10 = c % 500 % 100 % 50 / 10;

	printf("500��: %d��,  100��: %d��, 50��: %d��, 10��: %d�� �Դϴ�.", c500, c100, c50, c10);

	return 0;
}