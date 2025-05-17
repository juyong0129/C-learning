#include <stdio.h>

int main() {
	float f1, f2;
	f1 = 0.000001;
	f2 = 0.000002;

	if (f1 < f2) {
		printf("f2가 f1 보다 큽니다.");
	}
	else {
		printf("f1이 f2보다 큽니다.");
	}
	
	return 0;
}