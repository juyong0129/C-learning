#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int num;

	printf("10000 �̸� ���� �Է� : ");
	scanf("%d", &num);

	if (num >= 1000 && num < 10000) {
		printf("�� �ڸ� ��\n");
	}
	else if (num >= 100) {
		printf("�� �ڸ� ��");
	}
	else if (num >= 10) {
		printf("�� �ڸ� ��");
	}
	else if (num < 10) {
		printf("�� �ڸ� ��");
	}

	return 0;
}
