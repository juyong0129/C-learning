#include <stdio.h>

int main() {
	int i = 10, sum = 0, count = 1;

	while (i <= 17) {
		printf("%d회: %d\n", count, i);
		sum += i;
		i++;
		count++;
	}

	printf("while문 종료 후 n의 값 : %d", sum);

	return 0;
}