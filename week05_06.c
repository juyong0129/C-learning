#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int Allrose = 100, Alllily = 80;
	int Needrose = 5, Needlily = 3;
	int result = Alllily - Needlily * (Allrose / Needrose) >= 15;
	printf("%d", result);

	return 0;
}