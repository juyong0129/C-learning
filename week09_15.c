int main() {
	int i = 1, n;
	printf("n을 입력하세요 >>> ");
	scanf("%d", &n);

	while (1) {

		if (n > 30) {
			break;
		}

		printf("%d ", i);
		i++;

		if (i == n + 1) {
			i = 1;
			printf("\n\n");
		}
	}

	return 0;
}