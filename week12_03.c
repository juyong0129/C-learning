#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int rd_num() {
	srand(time(NULL));
	return rand() % 10 + 1;
}

int main() {
	int x = rd_num();
	printf("%d", x);

	return 0;
}