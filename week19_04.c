#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE* fp = fopen("datafile.txt", "r");
	if (fp == NULL) {
		printf("파열기 실패\n");
		exit(1);
	}
	printf("파일열기 성공\n");

	char c;
	while ((c = fgetc(fp)) != EOF) {
		putchar(c);
	}

	fclose(fp);

	return 0;
}