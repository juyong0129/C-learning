#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num[10];
	int i, n;
	for (i = 0; i < 10; i++) {
		scanf("%d", &n);
		num[i] = n;
	}
	for (i = 0; i < 10; i++) {
		printf("%d ", num[i]);
	}
}