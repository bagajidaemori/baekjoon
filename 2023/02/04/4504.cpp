#include <stdio.h>

int main(void) {

	int N;
	int a;

	scanf("%d", &N);

	while (1) {
		scanf("%d", &a);

		if (a == 0)
			break;
		else if (a % N == 0)
			printf("%d is a multiple of %d.\n", a, N);
		else 
			printf("%d is NOT a multiple of %d.\n", a, N);
	}

	return 0;
}