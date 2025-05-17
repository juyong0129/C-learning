#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int money = 15000;
	int egg_price = 2000;
	int salmon_price = 4000;
	int tuna_price = 5000;

	int result = 4 * egg_price + tuna_price <= money || 3 * egg_price + 2 * tuna_price <= money;
	printf("%d", result);

	return 0;
}