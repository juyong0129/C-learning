#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i = 1, n;
	printf("�Է��� ���� :");
	scanf("%d", &n);

	while (1) {
		printf("%d\n", i);
		if (i == n) {
			break;
		}
		i++;
	}

	return 0;
}