#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main() {
	printf("%d\n", time(NULL));
	printf("%d\n", 1610343710 / (3600 * 24 * 365));

	return 0;
}