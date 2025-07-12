#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Coordi {
	int x;
	int y;
};

struct Circle {
	struct Coordi cen;
	double r;
};

int main() {
	struct Circle c1 = { {0, 0}, 12.3 };
	struct Circle c2 = { {4, 5}, 12.4 };
	struct Circle c3;

	printf("c2 x: %d, c2 y: %d, c2 r: %lf\n\n", c2.cen.x, c2.cen.y, c2.r);

	printf("c3 x : ");
	scanf("%d", &c3.cen.x);
	printf("c3 y : ");
	scanf("%d", &c3.cen.y);
	printf("c3 r : ");
	scanf("%lf", &c3.r);

	printf("\nc3 x: %d, c3 y: %d, c3 r: %lf", c3.cen.x, c3.cen.y, c3.r);

	return 0;
}