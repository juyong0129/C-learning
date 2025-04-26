#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, count = 0, sum = 0;

	printf("n을 입력하세요 >>> ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		if (i % 6 == 0) {
			count++;
			sum += i;
			printf("%d\n", i);
		}
	}

	printf("%d 이하의 6의 배수는 %d개 이고, 합은 %d이다.", n, count, sum);

	return 0;
}