int main() {
	int i = 1, n;
	printf("n�� �Է��ϼ��� >>> ");
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