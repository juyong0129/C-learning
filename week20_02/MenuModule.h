#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int mode() {
	int result;
	printf("###��Ģ����###\n");
	printf("1. ������ ��Ģ����\n");
	printf("2. �Ǽ��� ��Ģ����\n");
	printf("3. ����\n");
	printf("�޴��� �����ϼ��� : ");
	scanf("%d", &result);

	while (result != 1 && result != 2 && result != 3)
	{
		printf("����! �߸��� ���� �Է��߽��ϴ�.");
		printf("�ٽ� �޴��� �����ϼ��� : ");
		scanf("%d", &result);
	}

	return result;
}

int int_mode() {
	int result;
	printf("\n@@������ ����@@\n");
	printf("1. ����\n");
	printf("2. ����\n");
	printf("3. ����\n");
	printf("4. ������\n");
	printf("5. �ڷ�\n");
	printf("�޴��� �����ϼ��� : ");
	scanf("%d", &result);

	while (result != 1 && result != 2 && result != 3 && result != 4 && result != 5)
	{
		printf("����! �߸��� ���� �Է��߽��ϴ�.");
		printf("�ٽ� �޴��� �����ϼ��� : ");
		scanf("%d", &result);
	}

	return result;
}

int float_mode() {
	int result;
	printf("\n@@�Ǽ��� ����@@\n");
	printf("1. ����\n");
	printf("2. ����\n");
	printf("3. ����\n");
	printf("4. ������\n");
	printf("5. �ڷ�\n");
	printf("�޴��� �����ϼ��� : ");
	scanf("%d", &result);

	while (result != 1 && result != 2 && result != 3 && result != 4 && result != 5)
	{
		printf("����! �߸��� ���� �Է��߽��ϴ�.");
		printf("�ٽ� �޴��� �����ϼ��� : ");
		scanf("%d", &result);
	}

	return result;
}