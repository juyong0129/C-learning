#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i = 1, n;
	printf("입력할 수는 :");
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