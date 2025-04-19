#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int pencil = 500, note = 1000;
	int result = 5 * pencil + 2 * note <= 5000;
	printf("%d", result);

	return 0;
}