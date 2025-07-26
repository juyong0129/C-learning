#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int mode() {
	int result;
	printf("###사칙연산###\n");
	printf("1. 정수형 사칙연산\n");
	printf("2. 실수형 사칙연산\n");
	printf("3. 종료\n");
	printf("메뉴를 선택하세요 : ");
	scanf("%d", &result);

	while (result != 1 && result != 2 && result != 3)
	{
		printf("오류! 잘못된 값을 입력했습니다.");
		printf("다시 메뉴를 선택하세요 : ");
		scanf("%d", &result);
	}

	return result;
}

int int_mode() {
	int result;
	printf("\n@@정수형 계산기@@\n");
	printf("1. 덧셈\n");
	printf("2. 뺄셈\n");
	printf("3. 곱셈\n");
	printf("4. 나눗셈\n");
	printf("5. 뒤로\n");
	printf("메뉴를 선택하세요 : ");
	scanf("%d", &result);

	while (result != 1 && result != 2 && result != 3 && result != 4 && result != 5)
	{
		printf("오류! 잘못된 값을 입력했습니다.");
		printf("다시 메뉴를 선택하세요 : ");
		scanf("%d", &result);
	}

	return result;
}

int float_mode() {
	int result;
	printf("\n@@실수형 계산기@@\n");
	printf("1. 덧셈\n");
	printf("2. 뺄셈\n");
	printf("3. 곱셈\n");
	printf("4. 나눗셈\n");
	printf("5. 뒤로\n");
	printf("메뉴를 선택하세요 : ");
	scanf("%d", &result);

	while (result != 1 && result != 2 && result != 3 && result != 4 && result != 5)
	{
		printf("오류! 잘못된 값을 입력했습니다.");
		printf("다시 메뉴를 선택하세요 : ");
		scanf("%d", &result);
	}

	return result;
}