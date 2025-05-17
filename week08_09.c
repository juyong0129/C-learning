#include <stdio.h>

int main() {
	float h = 40, sum = 0;
	
	for (int i = 1; i <= 9; i++) {
		printf("%d번째 : %f\n", i, h);
		sum += h;
		h /= 2;
	}

	sum *= 2;
	sum += 80;
	printf("총거리 : %f", sum);

	return 0;
}