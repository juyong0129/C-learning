#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int a[10] = { 0 };
	int max = 0;
	srand(time(NULL));

	for (int i = 0; i < 100; i++) {
		a[rand() % 10]++;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d : %d\n", i, a[i]);
	}
	for (int i = 0; i < 10; i++) {
		if (a[i] > a[max]) {
			max = i;
		}
	}

	printf("가장 많이 생성된 수 = %d", max);

	return 0;
}