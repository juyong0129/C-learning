#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, count = 0, sum = 0;

	printf("n�� �Է��ϼ��� >>> ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		if (i % 6 == 0) {
			count++;
			sum += i;
			printf("%d\n", i);
		}
	}

	printf("%d ������ 6�� ����� %d�� �̰�, ���� %d�̴�.", n, count, sum);

	return 0;
}