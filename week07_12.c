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
//	printf("������������ �����մϴ�.\n����, ����, �� �߿��� �Է��ϼ���: ");
//	scanf("%s", user_input);
//
//	if (strcmp(user_input, "����") == 0) {
//		user = 1;
//	}
//	else if (strcmp(user_input, "����") == 0) {
//		user = 2;
//	}
//	else if (strcmp(user_input, "��") == 0) {
//		user = 3;
//	}
//	else {
//		printf("�߸��� �Է��Դϴ�.\nError!!!\n");
//		exit(1);
//	}
//
//	if (user == robot) {
//		printf("����\n");
//	}
//	else if ((user == 1 && robot == 3) || (user == 2 && robot == 1) || (user == 3 && robot == 2)) {
//		printf("���� �̰��\n");
//	}
//	else {
//		printf("�κ��� �̰��\n");
//	}
//
//	return 0;
//}
