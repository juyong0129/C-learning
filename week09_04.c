#include <stdio.h>

int main() {
	int n = 10;

	while (n <= 17) {
		printf("%d\n", n);
		n++;
	}
	printf("while문 종료후 n의 값: %d", n);

	return 0;
}