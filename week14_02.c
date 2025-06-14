#include <stdio.h>

int main() {
	char str[15] = { 'h', 'i', ' ', 'c', '3', ' ', 'C', 'o', 'd', 'i', 'n', 'g', '\0' };
	int i = 0;

	while (str[i] != '\0') {
		printf("%c", str[i]);
		i++;
	}

	return 0;
}