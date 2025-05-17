#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	printf("날짜를 입력하세요: ");
	scanf("%d", &n);

	switch (n % 7)
	{
	case 1:
		printf("토요일");
		break;
	case 2:
		printf("일요일");
		break;
	case 3:
		printf("월요일");
		break;
	case 4:
		printf("화요일");
		break;
	case 5:
		printf("수요일");
		break;
	case 6:
		printf("목요일");
		break;
	case 0:
		printf("금요일");
		break;
	}
}