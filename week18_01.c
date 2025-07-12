#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Address {
	char name[10];
	char phone[20];
	char home[50];
};

int main() {
	struct Address man1, man3;
	strcpy(man1.name, "홍길동");
	strcpy(man1.phone, "029304200");
	strcpy(man1.home, "씨큐브코딩");
	struct Address man2 = { "홍코딩", "02930440", "중계동" };
	printf("%s\n%s\n%s\n\n", man1.name, man1.phone, man1.home);
	printf("%s\n%s\n%s\n\n", man2.name, man2.phone, man2.home);
	strcpy(man3.name, "손주용");
	strcpy(man3.phone, "01068577428");
	strcpy(man3.home, "중계동");

	return 0;
}