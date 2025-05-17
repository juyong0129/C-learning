#include <stdio.h>

int main() {
	int n;

	for (n = 30; n > 20; n--) {
		printf("n = %d\n", n);
	}
	
	printf("마지막 n = %d", n);
	return 0;
}