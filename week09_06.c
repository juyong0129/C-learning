#include <stdio.h>

int main() {
	int i = 10, sum = 0, count = 1;

	while (i <= 17) {
		printf("%dȸ: %d\n", count, i);
		sum += i;
		i++;
		count++;
	}

	printf("while�� ���� �� n�� �� : %d", sum);

	return 0;
}