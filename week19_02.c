#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE* fp = fopen("hello.txt", "w");
	if (fp == NULL) {
		printf("파일열기에 실패했습니다.");
		exit(1);
	}
	printf("파일열기에 성공했습니다.");
	fputc('h', fp);
	fputc('e', fp);
	fputc('l', fp);
	fputc('l', fp);
	fputc('l', fp);
	fputc('o', fp);

	fclose(fp);

	return 0;
}