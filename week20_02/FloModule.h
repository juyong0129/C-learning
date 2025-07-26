#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

float flo_data() {
	float n;
	printf("ют╥б : ");
	scanf("%d", &n);

	return n;
}

void flo_sum() {
	float a, b, result;
	a = flo_data();
	b = flo_data();
	result = a + b;
	printf("%f + %f = %f", a, b, result);
}

void flo_sub() {
	float a, b, result;
	a = flo_data();
	b = flo_data();
	result = a - b;
	printf("%f - %f = %f", a, b, result);
}

void flo_mul() {
	float a, b, result;
	a = flo_data();
	b = flo_data();
	result = a * b;
	printf("%f * %f = %f", a, b, result);
}

void flo_div() {
	float a, b, result;
	a = flo_data();
	b = flo_data();
	result = a / b;
	printf("%f / %f = %f", a, b, result);
}