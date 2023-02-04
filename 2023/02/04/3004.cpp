#include <stdio.h>

int main(void) {

	int N;

	scanf("%d", &N);

	if (N % 2 == 0) {
		if (N == 2) {
			printf("4");

		}
		else {
			printf("%d", (N / 2 + 1) * (N / 2 + 1));
		}
	}
	else {
		if (N == 1) {
			printf("2");

		}
		else {
			printf("%d", (N / 2 + 2) * (N / 2 + 2) - (N / 2 + 2));
		}
	}

	return 0;
}