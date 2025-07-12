#include <stdio.h>

struct Circle {
	int x;
	int y;
	double r;
	double area;
	double cf;
};

int main() {
	struct Circle c;
	c.r = 3.3;
	c.area = c.r * c.r * 3.14;
	c.cf = 2 * c.r;

	printf("AREA: %lf\n", c.area);
	printf("CIRCUMFERENCE: %lf", c.cf);

	return 0;
}