﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double f1, f2, f3;
	double* p1, * p2, * p3;

	p1 = &f1;
	p2 = &f2;
	p3 = &f3;

	printf("실수 입력 : ");
	scanf("%lf", &f1);

	printf("실수 입력 : ");
	scanf("%lf", &f2);

	f3 = *p1 + *p2;
	printf("%lf + %lf = %lf\n", f1, f2, *p3);

	printf("실수 입력 : ");
	scanf("%lf", &f1);

	printf("실수 입력 : ");
	scanf("%lf", &f2);

	f3 = *p1 - *p2;
	printf("%lf - %lf = %lf\n", f1, f2, *p3);

	printf("실수 입력 : ");
	scanf("%lf", &f1);

	printf("실수 입력 : ");
	scanf("%lf", &f2);

	f3 = *p1 * *p2;
	printf("%lf * %lf = %lf", f1, f2, *p3);

	return 0;
}