#include <stdio.h>

int ReserveNum(int n) {
	int i = 10, r_num = 0, tmp;
	while (n / i > 1) {
		i *= 10;
	}
	tmp = i;
	while (i >= 1) {
		r_num += tmp / i * (n / i);
		n -= n / i * i;
		i /= 10;
	}

	return r_num;
}

int main() {
	printf("%d", ReserveNum(123));

	return 0;
}