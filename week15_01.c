#include <stdio.h>

int main() {
	int a = 3;
	int b = 7;

	int* pa;
	int* pb;

	pa = &a;
	pb = &b;

	printf("a + b =  %d", *pa + *pb);
}