#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <math.h>
struct Point {
	int x;
	int y;
};

struct Rect {
	struct Point p1;
	struct Point p2;
};

int main() {
	struct Rect r;
	int w, h, area, lenth;

	printf("오른쪽 상단 점의 좌표를 입력하세요 : ");
	scanf("%d %d", &r.p1.x, &r.p1.y);
	printf("왼쪽 하단 점의 좌표를 입력하세요 : ");
	scanf("%d %d", &r.p2.x, &r.p2.y);

	w = abs(r.p1.x - r.p2.x);
	h = abs(r.p1.y - r.p2.y);
	area = w * h;
	lenth = 2 * (w + h);

	printf("사각형의 넓이 : %d\n사각형 둘레의 길이: %d\n", area, lenth);

	return 0;
}