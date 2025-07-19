#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE* fp = fopen("datafile.txt", "r");
	if (fp == NULL) {
		printf("파일없음\n");
		exit(1);
	}

	char ch = fgetc(fp);
	printf("%c", ch);
	ch = fgetc(fp);
	putchar(ch);

	fclose(fp);

	return 0;
}