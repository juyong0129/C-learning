#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int ramen = 888;
	int all_spoon = 972, all_chopsticks = 1827;
	int need_spoon = 1, need_chopsticks = 2;

	int result = all_spoon - ramen * need_spoon > all_chopsticks - ramen * need_chopsticks;
	printf("%d", result);
}