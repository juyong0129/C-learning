#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int int_data() {
	int n;
	printf("ют╥б : ");
	scanf("%d", &n);

	return n;
}

void int_sum() {
	int a, b, result;
	a = int_data();
	b = int_data();
	result = a + b;
	printf("%d + %d = %d", a, b, result);
}

void int_sub() {
	int a, b, result;
	a = int_data();
	b = int_data();
	result = a - b;
	printf("%d - %d = %d", a, b, result);
}

void int_mul() {
	int a, b, result;
	a = int_data();
	b = int_data();
	result = a * b;
	printf("%d * %d = %d", a, b, result);
}

void int_div() {
	int a, b, result;
	a = int_data();
	b = int_data();
	result = a / b;
	printf("%d / %d = %d", a, b, result);
}