#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c, num;
	printf("�� �ڸ����� �Է��ϼ���: ");
	scanf("%d", &num);
	a = num / 100;
	b = num % 100 / 10;
	c = num % 10;
	printf("���� �ڸ��� %d �̰�, ���� �ڸ��� %d �̰�, ���� �ڸ��� %d �Դϴ�.", a, b, c);

	return 0;
}
