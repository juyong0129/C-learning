#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int a[10] = { 0 };
	srand(time(NULL));
	printf("==============================\n");
	printf("주사위 면                빈도\n");
	printf("==============================\n");

	for (int i = 0; i < 60000; i++) {
		a[rand() % 10]++;
	}

	for (int i = 0; i < 10; i++) {
		printf("    %d                    %d\n", i, a[i]);
	}

	return 0;
}