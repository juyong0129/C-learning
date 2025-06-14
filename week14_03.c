#include <stdio.h>

int main() {
	char str[] = "gnimargorp retupmoc si gnidoc";
	int len = 0;
	while (str[len] != '\0') {
		len++;
	}

	len -= 1;

	for (int i = len; i >= 0; i--) {
		printf("%c", str[i]);
	}

	return 0;
}