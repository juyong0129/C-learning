//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <time.h>
//
//int main() {
//	int user, robot;
//	char user_input[10];
//
//	srand(time(NULL));
//	robot = rand() % 3 + 1;
//
//	printf("가위바위보를 시작합니다.\n가위, 바위, 보 중에서 입력하세요: ");
//	scanf("%s", user_input);
//
//	if (strcmp(user_input, "가위") == 0) {
//		user = 1;
//	}
//	else if (strcmp(user_input, "바위") == 0) {
//		user = 2;
//	}
//	else if (strcmp(user_input, "보") == 0) {
//		user = 3;
//	}
//	else {
//		printf("잘못된 입력입니다.\nError!!!\n");
//		exit(1);
//	}
//
//	if (user == robot) {
//		printf("비겼다\n");
//	}
//	else if ((user == 1 && robot == 3) || (user == 2 && robot == 1) || (user == 3 && robot == 2)) {
//		printf("내가 이겼다\n");
//	}
//	else {
//		printf("로봇이 이겼다\n");
//	}
//
//	return 0;
//}
