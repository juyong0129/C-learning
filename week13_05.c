#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main() {
	int n[10];
	int sum = 0;
	srand(time(NULL));

	for (int i = 0; i < 10; i++) {
		n[i] = rand() % 9 + 1;
		sum += n[i];
	}
	printf("%d", sum);

	return 0;
}