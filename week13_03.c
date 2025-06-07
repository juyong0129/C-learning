#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main() {
	srand(time(NULL));
	printf("%d", rand() % 10);
	return 0;
}