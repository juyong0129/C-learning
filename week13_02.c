#include <stdio.h>

int main() {
	int ar[10];
	int br[] = { 1,2,3,4,5 };
	double dr[20];

	printf("%d ", sizeof(ar));
	printf("%d ", sizeof(br));
	printf("%d\n", sizeof(dr));
	printf("%d ", sizeof(ar) / sizeof(int));
	printf("%d ", sizeof(br) / sizeof(int));
	printf("%d ", sizeof(dr) / sizeof(double));
}