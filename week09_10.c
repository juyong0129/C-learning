#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i = 1, n;
	printf("n�� �Է��ϼ��� >>>");
	scanf("%d", &n);

	while (i <= n) {
		if (i % 2 == 0) {
			printf("-%d ", i);
		}
		else {
			printf("%d ", i);
		}
		i++;
	}

	return 0;
}